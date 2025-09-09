#include<stdio.h>
int main(){                                // code for continue function
     for(int i =0;i<5;i++){
        if(i==3){
            continue;
        }
         printf("%d",i);
     }
}

int main(){                           // code for break function
 for(int i =0;i<5;i++){
         if(i==3){
              break;
        }
       printf("%d",i);
     }
}

int main(){                    // code for fibonacci series using for loop
    int n=8;      
    int t1=0;
    int t2=1;
    int next;
    for(int i=1;i<=n;i++){
    printf("%d\n",t1);
    next=t1+t2;
    t1=t2;
    t2=next;
    }
    return 0;
}

int main() {
    int n, t1 = 0, t2 = 1, next, i = 0;     // code for fibonacci series using while loop 

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: \n");

    while (i < n) {
        printf("%d\n", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        i++;
    }
    return 0;
}

int main() {                                       // code for prime number using while loop
    int num, i = 2, isPrime = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        isPrime = 0;
    } else {
        while (i <= num / 2) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

int main() {                                        // code to count digit using while loop
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}

int main(){                                         // code to count digit using for loop
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num == 0) {
        count = 1;
    } else {
        for (int temp = num; temp != 0; temp /= 10) {
            count++;
        }
    }
    printf("Number of digits: %d\n", count);
    return 0;
}





