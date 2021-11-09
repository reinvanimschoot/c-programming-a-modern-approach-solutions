#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numberical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0)
        printf("Invalid grade given.");
    else
    {
        printf("Letter grade: ");

        switch (grade / 10)
        {
        case 10:
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("F");
            break;
        }
    }
}
