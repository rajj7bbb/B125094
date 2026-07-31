#include<stdio.h>

struct student{
    int rollNo;
    char name[100];
    float marks;
};

int main()
{
    struct student s[5];
    int i;

    printf("Enter the details of 5 students");

    for(i=0; i<5; i++)
    {
        printf("student%d\n", i+1);

        printf("Enter the rollNo");
        scanf("%d", &s[i].rollNo );

        printf("Enter name");
        scanf("%s", s[i].name);

        printf("enter marks");
        scanf("%f",&s[i].marks);
    }
    printf("\n--------------------------------------------------\n");
    printf("%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n",
               s[i].rollNo,
               s[i].name,
               s[i].marks);
    }
    printf("--------------------------------------------------\n");

    return 0;
}