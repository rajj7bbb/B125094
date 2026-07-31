#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, max = 0;
    struct Student *ptr;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    ptr = (struct Student *)malloc(n * sizeof(struct Student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &ptr[i].roll);

        printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Marks: ");
        scanf("%f", &ptr[i].marks);
    }

    for (i = 1; i < n; i++)
    {
        if (ptr[i].marks > ptr[max].marks)
        {
            max = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("----------------------------\n");
    printf("Roll Number : %d\n", ptr[max].roll);
    printf("Name        : %s\n", ptr[max].name);
    printf("Marks       : %.2f\n", ptr[max].marks);

    free(ptr);

    return 0;
}