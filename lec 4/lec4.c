// code for if else

#include <stdio.h>
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
  
// code for traffic light

int main(){
    int a;
    printf("Enter number");
    scanf("%d",&a);
    switch(a){
        case 1: 
        printf("Red light\n Stop\n");
        break;
        case 2:
        printf("Yellow light\n Get ready\n");
        break;
        case 3:
        printf("Green light \n Go \n");
        break;
        default :
        printf("Invalid number");
        break;
    }
}
    
// code for currency converter

int main(){
    int choice;
    float inr;
    printf("Press 1 for INR to USD\n 2 for INR to EUR\n 3 INR to YEN\n 4 INR to AUD\n");
    printf("Enter choice");
    scanf("%d", &choice);
    printf("Enter amount in INR");
    scanf("%f",&inr);
    switch(choice)
    {
        case 1:
        printf("USD=%.2f\n",inr*0.012);
        break;
        case 2:
        printf("EUR=%.2f\n",inr*0.011);
        break;
        case 3:
        printf("YEN=%.2f\n",inr*1.73);
        break;
        case 4:
        printf("AUD=%.2f\n",inr*0.017);
        break;
        default :
        printf("Invalid operation");
        break;
}
return 0;
}

// Code for Atm machine
int main()
{
    int choice;
    float balance=10000;
    float amount;
    printf("Press 1 for checking balance\n 2 for withdraw\n 3 for deposit\n 4 for exit\n");
    printf("Enter choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Current Balance=%.2f\n",balance);
        break;
        case 2:
        printf("Enter amount to withdraw");
        scanf("%f",&amount);
        if(amount<=balance){
            balance-=amount;
            printf("withdraw successful\n New balance is %.2f\n",balance);
        }
        else{
            printf("Insufficient balance!!!!!!\n");
        }
        break;
        case 3:
        printf("Enter amount to deposit");
        scanf("%f",&amount);
        balance+=amount;
        printf("Deposit successful\n New balance=%.2f\n",balance);
        break;
        case 4:
        printf("Thankyou for visiting please visit again!! exiting......\n");
        break;
        default:
        printf("Invalid choice");
        break;
    }
    return 0;
}