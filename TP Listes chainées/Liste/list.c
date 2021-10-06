#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Cell{
    int value;
    struct Cell* next;
};

struct List{
    int size;
    struct Cell* head;
};

struct Cell* createCell(int val){
    struct Cell* new;
    new = (struct Cell*)malloc(sizeof(struct Cell));
    new->value=val;
    new->next=NULL;
    return new;
}

struct List* createList(){
    struct List* new;
    new = (struct List*)malloc(sizeof(struct List));
    new->size=0;
    new->head=NULL;
    return new;
}

bool isEmpty(struct List* l){
    if(l->size==0){
        return true;
    }
    else
        return false;
}

struct List* addItem(struct List* l, int value, unsigned int position, bool* valid){
    struct Cell* ptr = l -> head;
    struct Cell* tmp_ptr;
    struct Cell* new_ptr;
    if (position == 0){
        if ((new_ptr = createCell(value))== NULL) {
            *valid= false;
            return l;
        }
        if (ptr == NULL) {
            l -> head = new_ptr;
        } else {
            tmp_ptr = l -> head;
            l -> head = new_ptr;
            l->head -> next = tmp_ptr;
        }
    } else {
        while ((position > 1) && ptr != NULL) {
            ptr = ptr->next;
            position--;
        }
        if (ptr == NULL) {
            *valid = false;
            return l;
        }
        if ((new_ptr = createCell(value))== NULL) {
            *valid = false;
            return l;
        }
        tmp_ptr = ptr->next;
        ptr->next = new_ptr;
        ptr = ptr->next;
        ptr->next = tmp_ptr;
    }
    l->size++;
    *valid = true;
    return l;
}
void deleteItem(struct List* l, unsigned int position, bool* valid) {
        struct Cell* pointer = l->head;
        struct Cell* tmp_pointer;
        if(pointer == NULL || position > l->size) {
            *valid=false;
        } else if(position == 0) {
            l->head = l->head->next;
            free(pointer);
            l->size--;
            *valid=true;
        } else {
            while(position > 1 && pointer->next != NULL) {
                pointer = pointer->next;
                position--;
            }
            if(pointer->next==NULL){
                *valid = false;
            }
            else {
                tmp_pointer = pointer->next;

                pointer->next = tmp_pointer->next;
                free(tmp_pointer);
                l->size--;
                *valid = true;
            }
        }
    }
void deleteList(struct List* l){
    bool valid;
    while(l->head!=NULL){
        deleteItem(l,0,&valid);
    }
}
struct List* createListfromTab(int T[], unsigned int size, bool* valid){
    struct List* new = createList();
    for(int i=0; i<size; i++){
        addItem(new,T[i],i,valid);
    }
    return new;
}

void displayList(struct List* l){
    struct Cell* ptr=l->head;
    for(int i =0;i<l->size;i++){
        printf("%d \n",ptr->value);
        ptr=ptr->next;
    }
    printf("#elems %d\n",l->size);
}
unsigned int getNbItems(struct List* l){
    if(l!=NULL){
        return l->size;
    }
}

int getItem(struct List* l, unsigned int position, bool* valid){
    if(l->size==0){
        *valid = false;
        return -1;
    }
    struct Cell* pointer=l->head;
    while(position > 1 && pointer->next != NULL) {
        pointer = pointer->next;
        position--;
    }
    if(pointer->next==NULL){
        *valid = false;
        return -1;//dans tout les cas il y a *valid = false donc on s'en fou du return
    }
    else{
        *valid = true;
        return pointer->value;
    }
}

int main(){
    bool valid;
    struct List* L1 = createList();
    addItem(L1,2,0,&valid);
    addItem(L1,2,0,&valid);
    addItem(L1,1,0,&valid);
    int truc = getItem(L1,2,&valid);
    return EXIT_SUCCESS;
}
