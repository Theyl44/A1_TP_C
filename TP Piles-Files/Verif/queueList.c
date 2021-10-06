//
// Created by Théo on 25/04/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "list.h"
#include "queueList.h"


struct Queue* emptyQueue(){
    struct Queue* S1=(struct Queue*)malloc(sizeof(struct Queue));
    S1->liste = createList();
    return S1;
}

void enqueue(struct Queue* s, int item, bool* valid){
    addItem(s->liste,item,0,valid);
}

int dequeue(struct Queue* s, bool* valid){
    int val = top(s,valid);
    deleteItem(s->liste,0,valid);
    return val;
}

int queueSize(struct Queue* s){
    return s->liste->size;
}

bool isQueueEmpty(struct Queue* s){
    return queueSize(s)==0;
}

void printQueue(struct Queue* s){
    bool valid;
    for(int i =0 ;i < s->liste->size;i++){
        printf("%d\n",getItem(s->liste,i,&valid));
    }
    printf("#elems %d\n",s->liste->size);
}

