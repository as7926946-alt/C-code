// Array basics
#include<stdio.h>
int main(){
   int arr[5]={1,2,3,4,5};
   for(int i=0;i<5;i++){
    printf("%d",arr[i]);
   }
}

int main(){                                    // code for reversing array
    int arr[5]={1,2,4};
    for(int i=2;i>=0;i--){
        printf("%d",arr[i]);
    }
}

int main(){                             // code for sum of digits of array
    int arr[5]={1,3,4};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);

}

int main(){                          // code for printing maximum digit
    int arr[5]={1,3,2};
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     printf("%d",max);
}

int main(){                        // code for printing minimum digit
    int arr[5]={1,4,7,8};
    int min=arr[0];
    for(int i=0;i>8;i++){
        if(arr[i]>min){
            min=arr[i];
        }
    }
    printf("%d",min);
}

int main(){                                     // code for printing even odd
    int arr[5]={22,10,40,33,15};
    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            printf("%d is Even\n",arr[i]);
        }
        else{
            printf("%d is Odd\n",arr[i]);
        }
    }
}