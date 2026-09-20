#include <stdio.h>

int main()
{
    int cnic, test;
    printf("This is a program written in C to check whether or not the user have CNIC.");

    printf("\nDo you have a CNIC? (1 = Yes, 0 = No): ");
    scanf("%d", &cnic);

    if (cnic == 1)
    {
        printf("\nHave you passed the driving test? (1 = Yes, 0 = No): ");
        scanf("%d", &test);

        if (test == 1)
        {
            printf("\nLicense Can Be Issued\n");
        }
        else if (test == 0)
        {
            printf("\nLicense Cannot Be Issued: You have not passed the driving test\n");
        }
        else
        {
            printf("Invalid input for driving test\n");
        }
    }
    else if (cnic == 0)
    {
        printf("\nLicense Cannot Be Issued: You need a CNIC\n");
    }
    else
    {
        printf("\nInvalid input for CNIC\n");
    }

    return 0;
}

