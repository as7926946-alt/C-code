#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int k=3;
    int n= sizeof(arr)/sizeof(arr[0]);
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum=windowsum+arr[i];
    }
    int maxSum=windowsum;
    for(int j=k;j<n;j++){
        windowsum=windowsum+arr[j]-arr[j-k];
    }
        if(windowsum>maxSum){
          maxSum=windowsum;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
        }
        printf("%d",maxSum);
    }

 int main(){
    int arr[]={12,-1,-7,8,-15,30,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    for(int i=0;i<=n;i++){
        int found=0;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                printf("%d",arr[j]);
                found=1;
                break;
            }
        }
    }
 }

 int main(){
   int arr[] = {1, 2, -4, -9, 0, 9, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;;
    for (int i = 0; i < n - k; i++)
    {
        int max = arr[i];
        for (int j = 1; j < k; j++)
        {
            if (arr[i + j] > max )
            {
                max = arr[i + j];
            }
            printf("%d\n", max);
        }
    }
}
   

