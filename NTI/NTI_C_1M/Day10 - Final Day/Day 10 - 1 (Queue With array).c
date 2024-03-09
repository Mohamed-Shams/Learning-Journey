#include <stdio.h>
#include <stdlib.h>

struct q {
    int rear;
    int front;
    int c;
    int *arr;
};

// Create Queue
struct q* create_queue(int size) {
    struct q* q1 = (struct q*)malloc(sizeof(struct q));
    q1->rear = -1;
    q1->front = -1;
    q1->c = size;
    q1->arr = (int*)malloc(sizeof(int) * size);
    return q1;
}
//isEmpty
int isEmpty(struct q *q1)
{
  if((q1->rear == -1)&&(q1->front == -1))
  {
    return 1; //empty
  }
  else
  {
    return 0; //Not empty
  }
}
//isFULL
int isFull(struct q *q1)
{
  if(q1->rear == (q1->c)-1)
  {
    return 1; //full
  }
  else
  {
    return 0; //Not full
  }
}
//enQueue
void enQueue(struct q *q1, int data)
{
  (q1->rear)++;
  q1->arr[q1->rear] = data;
}

//deQueue
int deQueue(struct q *q1)
{
  (q1->front)++;
  int last = q1->arr[q1->front];
  free((void*)(q1->arr[q1->front]));
  return last;
}

//Peek
int peek(struct q *q1)
{
  return q1->arr[q1->front];
}

int main() {
    struct q *q1 = create_queue(15);
    if(isEmpty(q1) == 1)
    {
      printf("HHH");
    }
    else
    {
      printf("LLL");
    }
    return 0;
}
