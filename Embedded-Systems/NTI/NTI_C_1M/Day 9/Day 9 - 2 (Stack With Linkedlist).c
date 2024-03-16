/*This code is implemented by: @mahmoud-abo-abdoo*/
#include <stdio.h>
#include <stdlib.h>

int count = 0;

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top = NULL;

int is_stack_empty(void);
int stack_count(void);
int top_element(void);
void print_elements_of_stack(void);
int pop(void);
void push(int value);

int main() {
    int choice, popped_value, pushed_value;
    while (1) {
        printf("Enter your choice:\n");
        printf("1 to push elements to stack\t2 to pop element of stack\t3 to print element of stack\n");
        printf("4 to print top value\t5 to print number of stack\t6 to exit\n");
        scanf("%i", &choice);
        printf("\n");
        
        switch (choice) {
        case 1:
            printf("Enter value to push:\n");
            scanf("%i", &pushed_value);
            push(pushed_value);
            break;

        case 2:
            if (is_stack_empty()) {
                printf("Stack is empty\n");
            } else {
                popped_value = pop();
                printf("Popped value is %i\n", popped_value);
            }
            break;

        case 3:
            if (is_stack_empty()) {
                printf("Stack is empty\n");
            } else {
                print_elements_of_stack();
            }
            break;

        case 4:
            if (is_stack_empty()) {
                printf("Stack is empty\n");
            } else {
                printf("Value of top is %i\n", top_element());
            }
            break;

        case 5:
            if (is_stack_empty()) {
                printf("Stack is empty\n");
            } else {
                printf("Number of stack elements is %i\n", stack_count());
            }
            break;

        case 6:
            exit(0);

        default:
            printf("Wrong input\n");
        }
        printf("\n");
    }
    return 0;
}

int is_stack_empty(void) {
    return top == NULL;
}

void push(int value) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->next = top;
    temp->data = value;
    top = temp;
    count++;
}

int pop(void) {
    int x;
    Node* temp = top;
    top = top->next;
    x = temp->data;
    free(temp);
    count--;
    return x;
}

void print_elements_of_stack(void) {
    Node* temp = top;
    while (temp != NULL) {
        printf("%i\n", temp->data);
        temp = temp->next;
    }
}

int top_element(void) {
    return top->data;
}

int stack_count(void) {
    return count;
}
