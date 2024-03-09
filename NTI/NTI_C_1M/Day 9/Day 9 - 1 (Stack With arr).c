#include <stdio.h>
#include <stdlib.h>

struct s {
    int top;
    int c;
    int *arr;
};

// Create Stack
struct s* create_stack(int size) {
    struct s* s1 = (struct s*)malloc(sizeof(struct s));
    s1->top = -1;
    s1->c = size;
    s1->arr = (int*)malloc(sizeof(int) * size);
    return s1;
}
//isEmpty
int isEmpty(struct s *s1)
{
  if(s1->top == -1)
  {
    return 1; //empty
  }
  else
  {
    return 0; //Not empty
  }
}
//isFULL
int isFull(struct s *s1)
{
  if(s1->top == (s1->c)-1)
  {
    return 1; //full
  }
  else
  {
    return 0; //Not full
  }
}
//Push
void push(struct s *s1, int data)
{
    if(isFull(s1)==1)
  {
    printf("Overflow");
    exit(0);
  }
  else
  {
    (s1->top)++;
    s1->arr[s1->top] = data;
  }

}
//Pop
int pop(struct s *s1)
{
  int last = s1->arr[s1->top];
  free((void*)(s1->arr[s1->top]));
  (s1->top)--;
  return last;
}
//Peek
int peek(struct s *s1)
{
  return s1->arr[s1->top];
}

int main() {
    struct s *s1 = create_stack(15);
    if(isEmpty(s1) == 1)
    {
      printf("HHH");
    }
    else
    {
      printf("LLL");
    }
    return 0;
}
