//Code for while loops

#include<stdio.h>
int main(){                    //code for reversing number
    int n;
    int res=0;
    printf("Enter number");
    scanf("%d",&n);
    while(n!=0){
        int lastd= n%10;
        res= res*10+ lastd;
        n= n/10;
    } 
    printf("%d",res);
    return 0;
}

int main(){
    int n;
    int res=0;              //code for palindrome
    printf("Enter number");
    scanf("%d",&n);
     int original=n;
    while(n!=0){
        int lastd= n%10;
        res=res*10+ lastd;
        n =n/10;   
     }
     printf("%d",res);
     if(original==res){
        printf("It is palindrome");
     }
     else{
        printf("not palindrome");
     }

}

int main(){
    int n;                     // code for factorial
    long fact=1 ,i;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial is%d",fact);
}

int main(){                     // code for prime number
     int count=0,i,n;
     printf("Enter prime number");
     scanf("%d",&n);
     if(n<=1){
        printf("%disnot a prime number\n",n);
     }
     else{
        for(i=1;i<=n;i++){
            if(n%i==0){
                count++;

            }
        }
        if(count==2)
        printf("%d is a prime number\n",n);
        else
        printf("%d is not a prime number\n",n);
    }
    return 0;
}