// code for functions

#include<stdio.h>
int sum(){                             // called as function definition
    int  a=3;
    int b=5;
    int c;
    c = a+b;
    printf("%d",c);
    return 0;
}
int main(){                         
    sum();
}

int prime(){                                 // code using  function for prime number    
    int n, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        isPrime = 0;
    } else {
        while (i <= n / 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
    }
int main(){
  prime();
 }

 int evenodd(int n){                   // code for evenodd
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
 }
 int main(){
    int n;
  printf("Enter a number");
    scanf("%d",&n);   
    evenodd(n);
 }

int printnumber(int a, int b){                    // code for printing number of given range
    for(int i=a;i<=b;i++){
        printf("Numbers are for given range = %d",i);
    }
int main(){
    int a,b;
    printf("Enter First number=");
    scanf("%d",&a);
    printf("Enter Last number=");
    scanf("%d",&b);
    printf("Number are %d to %d\n",a,b);
    printnumber(a,b);
} 
}

int sum(int a,int b){         // parameter
    printf("%d",a+b);
 }
int main(){
    sum(2,5);                  //argument
    return 0;
}

int sum(){           
    int a=5;
    int b= 10;
    int c=a+b;
    return c;
} 
int main(){
    int data = sum();
    printf("%d",data);

}

int SingleDigit(int originalNumber) {                 // code for magic number 
    int currentNumber = originalNumber;
    int digitSum;

    while (currentNumber > 9) {
        digitSum = 0;
        while (currentNumber > 0) {
            int lastDigit = currentNumber % 10;
            digitSum += lastDigit;
            currentNumber /= 10;
        }
        currentNumber = digitSum;
    }
}


int MagicNumber(int inputNumber) {
    int finalDigit = SingleDigit(inputNumber);

    if (finalDigit == 1)
        printf("%d is a Magic Number!\n", inputNumber);
    else
        printf("%d is NOT a Magic Number.\n", inputNumber);
}

int main() {
    int userNumber;

    printf("Enter a number: ");
    scanf("%d", &userNumber);

    MagicNumber(userNumber);  
    return 0;
}