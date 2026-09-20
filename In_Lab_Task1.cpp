#include <stdio.h>

int main()
{
    int age, marks;
    printf("This is a program written in C to practice nested if-else");
    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("\nEnter your marks: ");
    scanf("%d", &marks);

    if (age >= 18)
    {
        if (marks >= 50)
        {
            printf("Eligible for Admission\n");
        }
        else
        {
            printf("Not Eligible: Your marks are less than 50\n");
        }
    }
    else
    {
        printf("Not Eligible: You must be at least 18 years old\n");
    }

    return 0;
}
