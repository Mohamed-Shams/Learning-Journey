#include <stdio.h>
#include <stdlib.h>

int count = 0;
typedef struct node
{
  int data;
  struct node *next;
} node_t;
node_t *top = NULL;

int is_stack_empty(void);
int stack_count(void);
int top_element(void);
void print_elements_of_stack(void);
int pop(void);
void push(int value);

int main()
{
  int choice, popped_value, pushed_value;
  while (1)
  {

    printf("enter your choice :\n");
    printf("1 to push elements to stack \t 2 to pop element of stack \t 3 to  print element of stack \t 4 to print top value \t 5 to print number of stack \t 6 to exit\n ");
    scanf("%i", &choice);
    printf("\n \n");
    switch (choice)
    {
    case 1:
      printf("enter value of pushed\n");
      scanf("%i", &pushed_value);
      push(pushed_value);
      break;

    case 2:

      if (is_stack_empty() == 1)
      {
        printf("stack is empty\n");
      }
      else
      {

        popped_value = pop();
        printf("popped value is %i\n", popped_value);
      }
      break;
    case 3:
      if (is_stack_empty() == 1)
      {

        printf("stack is empty\n");
      }

      else
      {

        print_elements_of_stack();
      }
      break;
    case 4:

      if (is_stack_empty() == 1)
      {
        printf("stack is empty\n");
      }
      else
      {

        printf("value of top is %i\n", top_element());
      }
      break;
    case 5:
      if (is_stack_empty() == 1)
      {
        printf("stack is empty\n");
      }
      else
      {
        printf("number of stack elements is %i\n", stack_count());
      }

      break;
    case 6:
      exit(0);

    default:
      printf("wrong input\n");
    }
    printf("\n");
  }
  return 0;
}

int is_stack_empty(void)
{
  int x;
  if (top == NULL)
  {
    x = 1;
  }
  else
  {
    x = 0;
  }
  return x;
}

void push(int value)
{
  node_t *temp;
  if (top == NULL)
  {
    top = (node_t *)malloc(sizeof(node_t));
    top->next = NULL;
    top->data = value;
  }
  else
  {

    temp = (node_t *)malloc(sizeof(node_t));
    temp->next = top;
    temp->data = value;
    top = temp;
  }
  count++;
}

int pop(void)
{
  int x;
  node_t *top1 = top;
  top1 = top1->next;
  x = top->data;
  free(top);
  count--;
  return x;
}

void print_elements_of_stack(void)
{
  node_t *top1 = top;
  while (top1 != NULL)
  {
    printf("%i\n", top1->data);
    top1 = top1->next;
  }
}

int top_element(void)
{
  return top->data;
}

int stack_count(void)
{
  return count;
}
