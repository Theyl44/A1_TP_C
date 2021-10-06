//
// Created by Théo on 25/04/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#ifndef FILES2_11_QUEUE_H
#define FILES2_11_QUEUE_H

struct Queue {
    struct List* liste;
};

struct Queue* emptyQueue();

void enqueue(struct Queue* s, int item, bool* valid);

int dequeue(struct Queue* s, bool* valid);

int pop(struct Queue* s, bool* valid);

int queueSize(struct Queue* s);

bool isQueueEmpty(struct Queue* s);

void printQueue(struct Queue* s);

int top(struct Queue* s, bool* valid);

#endif //FILES2_11_QUEUE_H
