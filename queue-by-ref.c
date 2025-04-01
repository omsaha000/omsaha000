//Write a code in C to implement Queue in C using call by reference

#include <stdio.h>
#define MAX 10

int front = -1;
int rear = -1;
int queue[MAX];

void enqueue(int *rear, int *front, int value) {
    if (*rear == MAX - 1) {
        printf("Queue is Full\n");
        return;
    }
    if (*front == -1) {
        *front = 0;
    }
    *rear = *rear + 1;
    queue[*rear] = value;
    printf("%d enqueued successfully\n", value);
}

void dequeue(int *front, int *rear) {
    if (*front == -1) {
        printf("Queue is Empty\n");
        *front = -1;
        *rear = -1;
        return;
    }
    printf("%d dequeued successfully\n", queue[*front]);
    *front = *front + 1;
}

void display(int front, int rear) {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&rear, &front, value);
                break;
            case 2:
                dequeue(&front, &rear);
                break;
            case 3:
                display(front, rear);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}