#include <stdio.h>

int main()
{
    int department, section;
    printf("This is a program written in C, to pracitce nested switch");
    printf("Select Department\n");
    printf("1 = Computer Science\n");
    printf("2 = Information Technology\n");
    printf("3 = Artificial Intelligence\n");
    printf("Enter your choice: ");
    scanf("%d", &department);

    switch (department)
    {
    case 1:
        printf("Select Section (1 = Section A, 2 = Section B): ");
        scanf("%d", &section);

        switch (section)
        {
        case 1:
            printf("Department: Computer Science\n");
            printf("Section: A\n");
            break;
        case 2:
            printf("Department: Computer Science\n");
            printf("Section: B\n");
            break;
        default:
            printf("Invalid section choice\n");
        }
        break;

    case 2:
        printf("Select Section (1 = Section A, 2 = Section B): ");
        scanf("%d", &section);

        switch (section)
        {
        case 1:
            printf("Department: Information Technology\n");
            printf("Section: A\n");
            break;
        case 2:
            printf("Department: Information Technology\n");
            printf("Section: B\n");
            break;
        default:
            printf("Invalid section choice\n");
        }
        break;

    case 3:
        printf("Select Section (1 = Section A, 2 = Section B): ");
        scanf("%d", &section);

        switch (section)
        {
        case 1:
            printf("Department: Artificial Intelligence\n");
            printf("Section: A\n");
            break;
        case 2:
            printf("Department: Artificial Intelligence\n");
            printf("Section: B\n");
            break;
        default:
            printf("Invalid section choice\n");
        }
        break;

    default:
        printf("Invalid department choice\n");
    }

    return 0;
}


