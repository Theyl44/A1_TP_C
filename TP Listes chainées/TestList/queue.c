#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "queue.h"

struct Queue* emptyQueue(){
    struct Queue* S1=(struct Queue*)malloc(sizeof(struct Queue));
    S1->size=0;
    S1->front=0;
    S1->rear=0;
    return S1;
}

void enqueue(struct Queue* s, int item, bool* valid){
    if(s->size > MAX_SIZE){
        *valid = false;
    }
    if(s->size ==0){
        s->size++;
        s->elems[(s->size-1)%MAX_SIZE]=item;
    }
    else {
        s->size++;
        s->rear++;
        s->elems[(s->size - 1) % MAX_SIZE] = item;
    }
}

int dequeue(struct Queue* s, bool* valid){
    if(s->size==0){
        *valid = false;
    }
    else{

        int val = s->elems[s->front];
        s->elems[s->front]=0;
        s->front++;
        s->size++;
        return val;
    }
}

int pop(struct Queue* s, bool* valid){
    return s->elems[s->front];
}

int QueueSize(struct Queue* s){
    return s->size;
}

bool isQueueEmpty(struct Queue* s){

}

void printQueue(struct Queue* s){
    for(int i=0;i<s->size;i++){
        printf("%d\n",s->elems[s->front+i]);
    }
    printf("#elems %d",s->size);
}
