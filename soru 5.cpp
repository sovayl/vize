#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int front, rear;
} Queue;

Queue createQueue() {
    Queue q;
    q.front = -1;
    q.rear = -1;
    return q;
}

int isFull(Queue q) {
    return (q.rear == MAX_SIZE - 1);
}

int isEmpty(Queue q) {
    return (q.front == -1 || q.front > q.rear);
}

void enqueue(Queue* q, char item) {
    if (isFull(*q)) {
        printf("Queue is full.\n");
        return;
    }
    q->data[++q->rear] = item;
    if (q->front == -1) q->front = 0;
}

char dequeue(Queue* q) {
    if (isEmpty(*q)) {
        printf("Queue is empty.\n");
        return '\0';
    }
    char item = q->data[q->front++];
    if (q->front > q->rear) q->front = q->rear = -1;
    return item;
}

void removeDuplicates(Queue* q) {
    char prev = '\0';
    while (!isEmpty(*q)) {
        char current = dequeue(q);
        if (current != prev) {
            enqueue(q, current);
            prev = current;
        }
        else {
            prev = '\0';
        }
    }
}

int main() {
    char str[MAX_SIZE];
    Queue q = createQueue();
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        enqueue(&q, str[i]);
    }
    removeDuplicates(&q);
    printf("Result: ");
    while (!isEmpty(q)) {
        printf("%c", dequeue(&q));
    }
    printf("\n");
    return 0;
}
