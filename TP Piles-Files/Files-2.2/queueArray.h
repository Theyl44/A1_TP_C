//
// Created by Théo on 15/05/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifndef FILES2_2_QUEUEARRAY_H
#define FILES2_2_QUEUEARRAY_H
#define MAX_SIZE 30
struct Queue {
    int size;
    int front;
    int rear;
    int elems[MAX_SIZE];
};
void enqueue (struct Queue* q, int item, bool* valid);
bool isQueueEmpty(struct Queue* q);
int head (struct Queue* q, bool* valid);
int dequeue (struct Queue* q, bool* valid);
int queueSize (struct Queue* q);
void printQueue (struct Queue* q);

#endif //FILES2_2_QUEUEARRAY_H
