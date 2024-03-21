#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node* next;
  struct node* prev;
}SList;

SList* Create_list();
SList* InsertAtBeginning(SList* head,int datain);
void InsertAtEnd(SList* head,int datain);
void DisplayList(SList* head);

int main()
{
  SList* myList = NULL;
  int e;
  myList = Create_list();
  if(myList != NULL)
  {
    DisplayList(myList);
  }
  else
  {
    printf("Error, Can't Allocate");
  }
  printf("Add Element to beginning: ");
  scanf("%d",&e);
  myList = InsertAtBeginning(myList,e);
if(myList != NULL)
  {
    DisplayList(myList);
  }
  else
  {
    printf("Error, Can't Allocate");
  }
  return 0;
}

SList* Create_list()
{
  int i,n;
  SList* head = NULL;
  printf("Please Enter number of nodes: ");
  scanf("%d",&n);
  if (n<=0)
  {
    printf("INVALID INPUT");
  }
  else
  {
    int data;
    printf("Enter the 1st element: ");
    scanf("%d",&data);
    head = InsertAtBeginning(head,data);
    for(i=1;i<n;i++)
    {
      printf("Enter Next Data Element: ");
      scanf("%d",&data);
      InsertAtEnd(head,data);
    }
  }
  return head;
}

SList* InsertAtBeginning(SList* head, int datain)
{
  SList *temp = (SList*)malloc(sizeof(SList));
  if (temp == NULL)
  {
    return head;
  }
  else
  {
    temp -> data = datain;
    temp -> next = head;
    temp -> prev = NULL;
    head = temp;
    return head;
  }
}

void InsertAtEnd(SList* head, int datain)
{
  if (head == NULL)
  {
    printf("List is empty");
      return;
  }
  else
  {
    SList *temp = (SList*)malloc(sizeof(SList));
    temp -> data = datain;
    SList* ptr = head;
    while(ptr->next != NULL)
    {
      ptr = ptr->next;
    }
      ptr -> next = temp;
      temp -> next = NULL;
      temp -> prev = ptr;
  }
}

void DisplayList(SList* head)
{
  SList *temp = head;
  int i = 1;
  while(temp != NULL)
  { 
    printf("Node No.%d :%d\n",i,temp->data);
   // printf("node address:%x\n",&(temp->data));
   // printf("next address:%x\n",temp->next);
   // printf("prev address:%x\n",temp->prev);
    i++;
    temp = temp->next;
  }
  
}