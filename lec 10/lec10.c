#include<stdio.h>
int main(){                                       // code for butterfly pattern
    for(int i =0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("*");                         
        }
        for(int k=3;k>i;k--){
            printf(" ");
        }
         for(int p=3;p>i;p--){
            printf(" ");
        }
        for(int z=0;z<=i;z++){
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<4;i++){
        for(int j=3;j>i;j--){
            printf("*");
        }
        for(int k=0;k<=i;k++){
            printf(" ");
        }
         for(int k=0;k<=i;k++){
            printf(" ");
        }
         for(int j=3;j>i;j--){
            printf("*");
        }
        printf("\n");

    }

}

int main(){                                              // code for hollow square pattern
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){                                             //code for cross pattern
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j || j==(5-i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");

    }

}


       
   
  


        
       
    


    
       
    
    