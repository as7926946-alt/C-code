#include<stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d\n", *x, *y);
}

int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y);
    return 0;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;

    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}

int main() {
    int x = 10;
    int *p = &x;
    int **k = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**k = %d\n", **k);

    return 0;
}

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int *p1 = arr1;
    int *p2 = arr2;

    int flag = 1;
    for (int i = 0; i < 5; i++) {
        if (*(p1 + i) != *(p2 + i)) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}

int main() {
    int arr[5] = {1, 2, 3, 45, 6};
    int *p = arr;

    printf("%d\n", *(p));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));

    return 0;
}