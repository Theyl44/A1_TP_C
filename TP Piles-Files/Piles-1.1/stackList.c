#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "stackList.h"

struct Stack* emptyStack(){
    struct Stack* ptr;
    ptr = (struct Stack*)malloc(sizeof(struct Stack));
    ptr -> liste = createList();
    return ptr;
}

bool isStackEmpty(struct Stack* s){
    struct List* ptr = s->liste;
    return isEmpty(ptr);
}

void push(struct Stack* s,int item, bool* valid){
    addItem(s->liste,item,0,valid);
}

int top(struct Stack* s, bool* valid){
    int item = getItem(s->liste,0,valid);
    return item;
}

int pop( struct Stack* s,bool* valid){
    int value = top(s, valid);
    deleteItem(s -> liste, 0, valid);
    *valid = isStackEmpty(s);
    return value;
}

int stackSize(struct Stack* s){
    return s->liste->size;
}

void printStack (struct Stack* s) {
    bool valid;
    for (int i=0; i<stackSize(s);i++) {
        printf("%d\n",getItem(s->liste, i, &valid));
    }
    printf("#elem = %d",stackSize(s));
}

