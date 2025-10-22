#include<stdio.h>
#include<string.h>
int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int j=0;
    j=8;
    int i=0;
    int maxArea=0;
    while(i<j){
        int h;
        if(height[i]<height[j]){
            h=height[i];
        }
        else{
            h=height[j];
        }
        int w=j-i;
        int area=h*w;
        if(area>maxArea){
            maxArea=area;
        }
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    printf("%d",maxArea);
}

struct Student{
    char name[50];
    int rollno;
    int age;
};
int main(){
    struct Student s1;
    s1.age=25;
    printf("%d\n",s1.age);
    s1.rollno=23;
    printf("%d\n",s1.rollno);
    strcpy(s1.name,"Anshika");
    printf("%s\n",s1.name);
}

struct Address
{
    int pinCode;
};
struct Student{
    char name[50];
    int rollno;
    int age;
    struct Address s2;
};
int main(){
    struct Student s1;
    s1.age=25;
    s1.s2.pinCode=482004;
    printf("%d\n",s1.s2.pinCode);
    printf("%d\n",s1.age);
    s1.rollno=23;
    printf("%d\n",s1.rollno);
    strcpy(s1.name,"Anshika");
    printf("%s\n",s1.name);
}
