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
void push(int c);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
  int i, value;
  char ch;

  printf("Enter an RPN expression: ");

  for (i = 0; i < STACK_SIZE; i++)
  {
    scanf(" %c", &ch);

    if (ch == '\n')
      break;

    switch (ch)
    {
    case '0':
    {
      push(0);
      break;
    }
    case '1':
    {
      push(1);
      break;
    }
    case '2':
    {
      push(2);
      break;
    }
    }
  }

  printf("Value of expression: %d", value);
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

void push(int c)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = c;
}

int pop(void)
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