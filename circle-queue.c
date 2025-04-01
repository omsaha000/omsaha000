#include <stdio.h>
#define SIZE 5

typedef struct {
    int items[SIZE];
    int front, rear;
} CircularQueue;

void initializeQueue(CircularQueue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(CircularQueue q) {
    return (q.front == (q.rear + 1) % SIZE);
}

int isEmpty(CircularQueue q) {
    return (q.front == -1);
}

void enqueue(CircularQueue *q, int value) {
    if (isFull(*q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(*q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % SIZE;
    q->items[q->rear] = value;
    printf("Inserted %d\n", value);
}

int dequeue(CircularQueue *q) {
    if (isEmpty(*q)) {
        printf("Queue is empty\n");
        return -1;
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % SIZE;
    }
    return value;
}

void display(CircularQueue q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    int i = q.front;
    while (1) {
        printf("%d ", q.items[i]);
        if (i == q.rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(q);

    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));

    display(q);

    enqueue(&q, 60);
    enqueue(&q, 70);

    display(q);

    return 0;
}