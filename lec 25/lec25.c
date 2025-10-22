#include<stdio.h>
#include<string.h>
struct Student{
    char name[50];
    int rollno;
    int marks;
};
int main(){
    struct Student s1[5];
    for(int i=0;i<5;i++){
        printf("Enter your name");
        scanf("%s",&s1[i].name);
        printf("Enter rollno");
        scanf("%d",&s1[i].rollno);
        printf("Enter your marks");
        scanf("%d",&s1[i].marks);
    }
printf("details of students are\n");
    for(int i=0;i<5;i++){
        printf("rollno=%d \n name=%s\n marks=%d\n",s1[i].rollno,s1[i].name,s1[i].marks);
    }
    return 0;


}


struct employee{
    int id;
    char name[20];
    float salary;

};
int main(){
    struct employee e1[5];
    for(int i=0;i<5;i++){
        printf("enter id=");
        scanf("%d",&e1[i].id);
        printf("enter name=");
        scanf("%s",e1[i].name);
        printf("enter salary=");
        scanf("%f",&e1[i].salary);
    }
    printf("details of employees are\n");
    for(int i=0;i<5;i++){
        printf("id=%d \n name=%s\n salary=%f\n",e1[i].id,e1[i].name,e1[i].salary);
    }
    return 0;
}

// code for tap water
int main(){
    int letMax[6];
    int height[6]={4,2,0,3,2,5};
    int rightMax[6];
    int water=0;
    letMax[0]=height[0];
    for(int i =1;i<6;i++){
        if(height[i]>letMax[i-1]){
            letMax[i]=height[i];
        }else{
            letMax[i]=letMax[i-1];
        }
    }
        rightMax[5]=height[5];
     for(int i =3;i>=0;i--){
        if(height[i]>rightMax[i+1]){
            rightMax[i]=height[i];
        }else{
            rightMax[i]=rightMax[i+1];
        }
    }


    for(int i=0;i<6;i++){
    int minHieght;
        if(letMax[i]<rightMax[i]){
            minHieght=letMax[i];
        }else 
        {
            minHieght=rightMax[i];
        }
        water=water+(minHieght-height[i]);
        
    }
    printf("%d",water);
    
}

