#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h> /* exit */

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char c, last_char;
    bool matching = true;

    printf("Enter parentheses and/or braces: ");
    while ((c = getchar()))
    {
        if (c == '(' || c == '{')
            push(c);

        if ((c == ')' && pop() != '(') || (c == '}' && pop() != '{'))
        {
            matching = false;
            break;
        }

        if (c == '\n')
        {
            if (!is_empty())
                matching = false;

            break;
        }
    }

    if (matching)
        printf("Parentheses/braces are nested properly");
    else
        printf("Parentheses/braces are NOT nested properly");
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void)
{
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}