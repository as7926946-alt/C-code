#include <stdio.h> 
// code for taking input from user 

int main ()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("you have entered %d\n",a);
    return 0;
}

// code for various operations
int main(){
    int x= 2,y=6,z=9;
    printf("x + y +z =%d\n",x+y+z);
    return 0;
}

int main(){

    int x=78,y=56;
    printf("x-y=%d\n",x-y);
    return 0;
}

int main(){

    int x=34,y=5;
    printf("x*y=%d\n",x*y);
    return 0;
}

int main (){
    float x=2,y=3;
    printf("x/y=%f\n",x/y);
    return 0;
}

int main(){
    int x=7,y=3;
    printf("x%%y=%d\n",x%y);
    return 0;
}

// code for type casting 

int main (){
    int x =10,y=5;
     float result = (float)x / y;  // explicit type casting
    printf("Type casted division: %.2f\n\n", result);
    return 0;
}


// code for increment decrement operation

int main(){
    int n = 8;
    printf("number=%d\n",n);
    printf("number++ = %d\n",n++);
    printf("Number is %d\n",n);
    printf("++number=%d\n",++n);
    printf("Number is%d\n",n);
    return 0;

}

int main ()
{
    int a=5;
    int b=3; 
    int sum= a++ + ++b + b-- + ++a;
    printf("%d",sum);
    return 0;
}

// code for if else

    int main()
    {  
        int a= 10;
        int b=21 ;
        if(a==10 || b>25)
        {
           printf("hello");
        } 
        else{
              printf("byeee");
            }
       return 0;
    }

    int main()
    {
    int a=10;
    int b=21;
    if(a=10 && b>25);
    printf ("hello"); 
    else  
    printf("byeeee");
    return 0;    
    }
   
    // code for size of operator

    int main()
    {
        int a;
    printf("\nSize of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n\n", sizeof(char));
    return 0;
    }

    // code for checking ASCII

    int main(){
    int ascii = 65;
    char ch = ascii;  // converting int to char
    printf("ASCII value %d = character '%c'\n", ascii, ch);

    return 0;
    }
