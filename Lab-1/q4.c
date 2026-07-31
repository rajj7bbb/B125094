#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x,y;
    printf("Enter 2 integers");
    scanf("%d %d", &x,&y);

    printf("before awapping");
    printf("x=%d , y=%d", x,y);

    swap(&x,&y);

    printf("After swapping");
    printf("x=%d , y=%d", x,y);

    return 0;
}