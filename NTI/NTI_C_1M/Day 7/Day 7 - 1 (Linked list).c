#include<stdio.h>
#include<stdlib.h>

struct list* Create_list();

struct list{
  int data;
  struct list* next;
};

int main()
{
  struct list* myList = NULL;

  myList = Create_list();
  if(myList != NULL)
  {
    printf("%d",myList->data);
  }
  else
  {
    printf("Error, Can't Allocate");
  }

  return 0;
}

struct list* Create_list()
{
  struct list* head = NULL;
  head = (struct list*) malloc(sizeof(struct list));

  int datain;
  if(head == NULL)
  {
    return NULL;
  }
  else
  {
    printf("Enter Data No. 1: ");
    scanf("%d",&datain);
    head->data = datain;
    head->next = NULL;
    return head;
  }

}