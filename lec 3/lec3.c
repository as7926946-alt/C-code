// Code using if else

#include<stdio.h>
int main(){
    int a,m;
    printf("Enter value of A and M");
    scanf("%d%d",&a,&m);
     if(a>75 && m>75  )
     {
             printf("A");
     }
         else if(a>75 && m>65 && m<75)
         {
             printf("B");
         }
     else if(a>75  && m<65 && m>50 )
     {
         printf("C");
     }
     else if (a>75 && m<50 && m>33)
     {
            printf("D");
     }
    
   else{
          printf("SORRY BUT FAIL!!!!");
    }

}

 int main(){
    int a=10;
    int b=26;
    if(a==10||b>25)               
    {
        printf("HELLO");
    }
    else{
        printf("HIII");
    }
    return 0;
 }

int main(){
    int a;
    printf("Enter a number=");
    scanf("%d",&a);
    if(a%=2==0){
        printf("IT IS EVEN");
    }
    else{
        printf("IT IS ODD");
    }
   return 0;
 }
  
 
