/* Adds two fractions */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;

    printf("Enter two fractions separated by an operator (* / + or -): ");
    scanf("%d /%d %c %d /%d", &num1, &denom1, &operator, & num2, &denom2);

    switch (operator)
    {
    case '*':
    {
        printf("Result: %d/%d\n", num1 * num2, denom1 * denom2);
        break;
    }
    case '/':
    {
        printf("Result: %d/%d\n", num1 * denom2, num2 * denom1);
        break;
    }
    case '+':
    {
        printf("Result: %d/%d\n", (num1 * denom2) + (num2 * denom1), denom1 * denom2);
        break;
    }
    case '-':
    {
        printf("Result: %d/%d\n", (num1 * denom2) - (num2 * denom1), denom1 * denom2);
        break;
    }
    default:
        printf("Operation %c not supported.\n", operator);
        return 1; /* operation error */
    }

    return 0;
}
