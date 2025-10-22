#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }  
    printf("Array is \n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int n;
    printf("Enter size ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[j]=arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr[j]=arr[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                arr[j]=arr[i];
                j++;
            }
        }
    }
}

int main(){ 
    int n;
    printf("Enter size ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n * sizeof(int));
    printf("Enter elements\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nNow enter new size ");
    int newsize;
    scanf("%d",&newsize);
    arr=(int *)realloc(arr , newsize * sizeof(int));
    printf("Array is \n",newsize);
    for(int i=0;i<newsize;i++){
        printf("%d\n",&arr[i]);
    }
}

int main(){
    int n;
    printf("Enter Size");
    scanf("%d",&n);
    int *arr=(int *)calloc(n, sizeof(int));
     if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    // Free allocated memory
    free(arr);

    return 0;
}

int main() {
    int n;
    printf("Enter initial size: ");
    scanf("%d", &n);

    // Initial memory allocation
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Initial allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newsize;
    printf("Enter new size: ");
    scanf("%d", &newsize);

    // Resize memory using realloc
    int *temp = (int *)realloc(arr, newsize * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed.\n");
        free(arr);
        return 1;
    }
    arr = temp;

    // If new size is greater, initialize new elements to 0
    if (newsize > n) {
        for (int i = n; i < newsize; i++) {
            arr[i] = 0;
        }
    }

    printf("Array after realloc:\n");
    for (int i = 0; i < newsize; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}

    


