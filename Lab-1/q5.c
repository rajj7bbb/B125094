#include<stdio.h>


int main()
{
   int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d", sum);
    
    return 0;

}