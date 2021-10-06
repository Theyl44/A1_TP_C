
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "queueArray.h"
struct Queue* emptyQueue() {
    struct Queue* ptr;
    ptr = (struct Queue*)malloc(sizeof(struct Queue));
    ptr -> size = 0;
    ptr -> rear = 0;
    ptr -> front = 0;
    return ptr;
}

void enqueue (struct Queue* q, int item, bool* valid) {
    if(q -> size == MAX_SIZE ){
        *valid = false;
    }
    else if (q -> front == 29){
        q -> front = 0;
        q->elems[q->rear] = item;
        q->size = q->size + 1;
        q->rear = q->rear + 1;
        *valid = true;
    }
    else {
        q->elems[q->rear] = item;
        q->size = q->size + 1;
        q->rear = q->rear + 1;
        *valid = true;
    }
}

bool isQueueEmpty(struct Queue* q) {
    bool valid;
    if (q->size == 0) {
        valid = true;
    }
    else {
        valid = false;
    }
    return valid;
}

int head (struct Queue* q, bool* valid) {
    if (q->size == 0) {
        *valid = false;
        return 0;
    }
    *valid = true;
    return q -> elems[q -> front];
}

int dequeue (struct Queue* q, bool* valid) {
    if (q->size == 0) {
        *valid = false;
        return 0;
    }
    *valid = true;
    q -> size --;
    q -> front ++;
    return q->front;
}

int queueSize (struct Queue* q) {
    return q -> size;
}


void printQueue (struct Queue* q) {
    printf("rear -> ");
    for (int i = q -> rear -1; i >= q -> front; i--){
        printf("%d -> ", q ->elems[i]);
    }
    printf("front\n");
}

