#include <stdio.h>
 int main()
 {
    int n,i, arr[100];
    printf("enter the size of array");
    scanf("%d", &n);

    printf("enter the elements in array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     
    int smallest = arr[0];
    int largest = arr[0];
    int sum=0;
    for(i = 0; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];

        sum += arr[i];
        
    }
    float avg = (float)sum/n;
    printf("the largest no is %d", largest);
    printf("the smallest no is %d", smallest);
    printf("the average of all nos is %f", avg);

 }