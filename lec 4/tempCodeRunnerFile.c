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
  
