#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
  char c;
  printf("Enter an RPN expression: ");

  while ((c = getchar()) != '\n')
  {
    switch (c)
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
    case '3':
    {
      push(3);
      break;
    }
    case '4':
    {
      push(4);
      break;
    }
    case '5':
    {
      push(5);
      break;
    }
    case '6':
    {
      push(6);
      break;
    }
    case '7':
    {
      push(7);
      break;
    }
    case '8':
    {
      push(8);
      break;
    }
    case '9':
    {
      push(9);
      break;
    }
    case '+':
    {
      int operand_1 = pop();
      int operand_2 = pop();

      push(operand_1 + operand_2);
      break;
    }
    case '-':
    {
      int operand_1 = pop();
      int operand_2 = pop();

      push(operand_2 - operand_1);
      break;
    }
    case '*':
    {
      int operand_1 = pop();
      int operand_2 = pop();

      push(operand_1 * operand_2);
      break;
    }
    case '/':
    {
      int operand_1 = pop();
      int operand_2 = pop();

      push(operand_2 / operand_1);
      break;
    }
    }
  }

  printf("Value of expression: %d", pop());

  return 0;
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

void push(int i)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
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