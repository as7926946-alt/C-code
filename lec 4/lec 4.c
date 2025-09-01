#include <stdio.h>
// code for if else
int main()
{
    int a=5;
    a<5?printf("hello"):printf("hiii");
}

int main(){ 
int a=5;
if (a<5){ 
    printf("hello");
    printf("byee");
}
else 
    printf("hiiii");
    }  

    // code for switch cases
   
    int main(){
        int a=1;
        switch(a)
        {
            case 1:
            printf("hello");
            case 2:
            printf("hii");

            default:
            printf("invalid operation");
        }
        return 0;
    }

    int main(){
        int a=2;
        switch(a){
            case 1:
            printf("hello");
            break;
            case 2:
            printf("hii");
            break;
            default :
            printf("invalid operator");   
        }
    }

    // code to print weekdays using switch case

    int main(){
        int a ;
        printf ("Enter number");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
            printf("monday");
            break;
            case 2:
            printf("tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("thursday");
            break;
            case 5:
            printf("friday");
            break;
            case 6:
            printf("saturday");
            break;
            case 7:
            printf("sunday");
            break;
            default :
            printf ("invalid number");
            break;
        }
        return 0;
    }
  
    // code for simple calculator switch case
    int main(){
        int choice;
        float a,b;
        printf("Enter two numbers");
        scanf("%f%f",&a,&b);
        printf("Press 1 for additiion\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
        printf("Enter choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
            printf("a+b=%f\n",a+b);
            break;
            case 2:
            printf("a-b=%f\n",a-b);
            break;
            case 3:
            printf("a*b=%f\n",a*b);
            break;
            case 4:
            printf("a/b=%f\n",a/b);
            break;
            default:
            printf("Invalid operation");
            break;
        }
        return 0;
    }
  

    