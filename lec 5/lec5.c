// code for for loop

#include <stdio.h>
int main(){
    for(int i=0;i<10;i++)
    {
        printf("hello\n");
    }
    return 0;
}

int main(){                    //code for number
    int i;
    for (int i=1;i<=10;i++){
        printf("%d\n",i);
    }
}

int main(){                   //code for reverse number 
    int i;
    for(int i=10;i>0;i--)
    printf("%d\n",i);
}

int main(){                    //code for printing odd numbers
    for(int i=10;i>0;i--){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}

int main(){                     // code for even numbers
    for(int i=10;i>0;i--){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
}

int main(){                   // code for sum of numbers
    int sum=0;
    for(int i=0;i<=10;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
}

// code for printing table

int main() {
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Multiplication table for %d:\n", number);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}

// code for printing sum of digits

int main() {
    int num, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;   
        sum += digit;       
        num /= 10;         
    printf("Sum of digits = %d\n", sum);
    return 0;
}
}