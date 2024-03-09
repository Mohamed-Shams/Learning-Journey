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

// isEmpty
int isEmpty(struct q *q1) {
    return (q1->rear == -1 && q1->front == -1);
}

// isFull
int isFull(struct q *q1) {
    return (q1->rear == q1->c - 1);
}

// enQueue
void enQueue(struct q *q1, int data) {
    if (isFull(q1) == 1) {
        printf("Overflow");
        exit(0);
    } else {
        if (isEmpty(q1) == 1) {
            q1->front = 0; // Update front pointer when inserting the first element
        }
        (q1->rear)++;
        q1->arr[q1->rear] = data;
    }
}

// deQueue
int deQueue(struct q *q1) {
    if (isEmpty(q1) == 1) {
        printf("Error: Underflow\n");
        exit(0);
    } else {
        int last = q1->arr[q1->front];
        if (q1->front == q1->rear) {
            // Reset pointers when dequeuing the last element
            q1->front = -1;
            q1->rear = -1;
        } else {
            (q1->front)++;
        }
        return last;
    }
}

// Peek
int peek(struct q *q1) {
    return q1->arr[q1->front];
}

int main() {
    struct q *q1 = create_queue(6);
    if (isEmpty(q1) == 1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    enQueue(q1, 5);
    enQueue(q1, 6);
    enQueue(q1, 8);

    if (isFull(q1) == 1) {
        printf("Queue is full.\n");
    } else {
        printf("Queue is not full.\n");
    }

    printf("Dequeued: %d\n", deQueue(q1));
    printf("Dequeued: %d\n", deQueue(q1));
    printf("Dequeued: %d\n", deQueue(q1));
    printf("Dequeued: %d\n", deQueue(q1));

    if (isEmpty(q1) == 1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }

    return 0;
}
