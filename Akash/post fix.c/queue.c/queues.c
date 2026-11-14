#include <stdio.h>
#define MAX 5   // Size of Circular Queue

// Circular Queue ADT Structure
struct CircularQueue {
    int arr[MAX];
    int front;
    int rear;
};

// Initialize Queue
void initQueue(struct CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if Queue is Empty
int isEmpty(struct CircularQueue *q) {
    return (q->front == -1);
}

// Check if Queue is Full
int isFull(struct CircularQueue *q) {
    return ((q->rear + 1) % MAX == q->front);
}

// Enqueue Operation
void enqueue(struct CircularQueue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    if (isEmpty(q)) {  // First Element
        q->front = q->rear = 0;
    }
    else {
        q->rear = (q->rear + 1) % MAX;
    }

    q->arr[q->rear] = value;
    printf("%d inserted into queue.\n", value);
}

// Dequeue Operation
int dequeue(struct CircularQueue *q) {
    int value;

    if (isEmpty(q)) {
        printf("Queue Underflow! Queue is empty.\n");
        return -1;
    }

    value = q->arr[q->front];

    // If only one element is present
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    }
    else {
        q->front = (q->front + 1) % MAX;
    }

    printf("%d removed from queue.\n", value);
    return value;
}

// Peek Operation
int peek(struct CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->arr[q->front];
}

// Display Queue Elements
void display(struct CircularQueue *q) {
    int i;

    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements are: ");

    i = q->front;
    while (1) {
        printf("%d ", q->arr[i]);
        if (i == q->rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main Function
int main() {
    struct CircularQueue q;
    int choice, value;

    initQueue(&q);

    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(&q, value);
                break;

            case 2:
                dequeue(&q);
                break;

            case 3:
                printf("Front element is: %d\n", peek(&q));
                break;

            case 4:
                display(&q);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
