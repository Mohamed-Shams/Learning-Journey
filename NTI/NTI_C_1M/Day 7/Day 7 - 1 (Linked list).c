#include<stdio.h>
#include<stdlib.h>


typedef struct node{
  int data;
  struct list* next;
}SList;

SList* Create_list();

int main()
{
  SList* myList = NULL;

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

SList* Create_list()
{
  SList* head = NULL;
  head = (SList*) malloc(sizeof(SList));

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