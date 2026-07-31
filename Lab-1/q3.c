#include <stdio.h>
int main()
{
    int n,i,arr[100],key, found=0;
    printf("enter the size of array");
    scanf("%d", &n);

    printf("enter the elements in array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the serching element");
    scanf("%d", &key);

    for (i = 0; i < n; i++) 
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element not found");
    }
    return 0;

}