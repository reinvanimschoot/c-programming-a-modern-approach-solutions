#include <stdio.h>

int main(void)
{
    char c, operation;
    float operand_1, operand_2, total;

    printf("Enter an expression: ");

    scanf("%f", &operand_1);

    while ((c = getchar()) != '\n')
    {
        operation = c;
        scanf("%f", &operand_2);

        switch (operation)
        {
        case '+':
            total = operand_1 + operand_2;
            break;
        case '-':
            total = operand_1 - operand_2;
            break;
        case '/':
            total = operand_1 / operand_2;
            break;
        case '*':
            total = operand_1 * operand_2;
            break;
        }

        operand_1 = total;
    }

    printf("Value of expression: %.1f", total);

    return 0;
}
