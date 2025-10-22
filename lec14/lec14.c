
#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int temp=arr[0];
for(int i=0;i<5;i++)
{
    arr[i]=arr[i+1];
}
arr[4]=temp;
for(int k=0;k<5;k++){
    printf("%d",arr[k]);
}
} 

int arr[]={1,2,3,2,1};
int istrue=1;
for(int i=0;i<5/2;i++){
    if(arr[i]!=arr[5-i-1]){
    
istrue=0;
    }
}
 if(istrue){
    printf("palindrome");
}
else{
    printf("not ");
}

}

int arr[]={1,2,3,2,1};
for(int i=0;i<5/2;i++){
    if(arr[i]=arr[5-i-1])
printf("palindrome");
    
else {
    printf("not ");
}
}
}

int arr[5]={1,2,3,-2,-7};
int maxsum=arr[0];
for(int i=0;i<5;i++){
int currentsum=0;
for(int j=i;j<5;j++)
{
 currentsum=currentsum+arr[j];

if(currentsum>maxsum)
{
    maxsum=currentsum;
}
}
}
printf("maxsum=%d",maxsum);

}
