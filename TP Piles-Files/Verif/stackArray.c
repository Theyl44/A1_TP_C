#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "stackArray.h"

struct Stack* emptyStack(){
    struct Stack* ptr;
    ptr = (struct Stack*)malloc(sizeof(struct Stack));
    ptr -> size = 0;
    return ptr;
}

void push(struct Stack* s,int item,bool* valid){
    s->size++;
    if(s->size > MAX_SIZE){
        *valid=false;
    }
    s->elems[s->size-1]=item;
    *valid = true;
}

int top(struct Stack* s, bool* valid){
    if(s->size==0){
        *valid= false;
        return EXIT_FAILURE;
    }
    return s->elems[s->size];
}

int pop( struct Stack* s,bool* valid){
    int value = top(s,valid);
    if(s->size==0){
        *valid=false;
        return EXIT_FAILURE;
    }
    *valid = true;
    s->elems[s->size -1]=0;
    s->size--;
    return value;
}

int stackSize(struct Stack* s){
    return s->size;
}

bool isStackEmpty(struct Stack* s){
    return stackSize(s)==0;
}

void printStack(struct Stack* s){
    for(int i=0;i<s->size-1;i++){
        printf("%d ->",s->elems[i]);
    }
    printf("#elems =  %d\n",s->size);
}
