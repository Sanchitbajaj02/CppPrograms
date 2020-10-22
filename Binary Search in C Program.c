#include <stdio.h>
void main()
{
    int choice = 1;
    switch (choice)
    {
    case 1:
        printf(“Manav”);
    case 2:
        printf(“Rachna”);
        break;
    case 3:
        printf(“University”);
        break;
    default:
        printf(“Invalid choice”);
    }
}