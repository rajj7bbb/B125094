#include<stdio.h>
struct student{
    int rollNo;
    char name[100];
    float marks;
};

int main()
{
    struct student s[5];
    int i,highest=0,sum=0;
    float average=0.0;

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
 if (s[i].marks > s[highest].marks) {
            highest = i;
        }
        sum+=s[i].marks;
    }

    average = sum / 5.0;
   
    printf("highest mark is %.2f", s[highest].marks );
    printf("Average is %f", average);
}
    