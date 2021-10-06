#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Cell {
    int value ;
    struct Cell* next ;
    struct Cell* previous;
};
struct Cell* createCell(int val){
    struct Cell* newCell;
    newCell = (struct Cell*)malloc(sizeof(struct Cell));
    newCell->previous=NULL;
    newCell->value=val;
    newCell->next=NULL;
    return newCell;
}
void displayList(struct Cell* head)
{
    struct Cell* tmp;
    printf("votre liste est : \n");
    if(head==NULL)
    {
        printf("NULL");//
    }
    else
    {
        while(head !=NULL)
        {
            printf("%d ", head->value);
            head = head->next;
        }
    }
    printf("\n");
}
struct Cell* addItem(struct Cell* head, int value, unsigned int position, bool* valid) {
    struct Cell *ptr = head; //pointer of position
    struct Cell *tmp;
    struct Cell *newCell = createCell(value);
    if (position == 0) {
        if (newCell  == NULL) {
            *valid = false;
            return head;
        }
        if (ptr == NULL) {
            head = newCell;
        } else {
            tmp = head;
            head = newCell;
            head->next = tmp;
        }
    }
    else{
        while((position > 1) &&  ptr !=NULL)
        {
            ptr = ptr->next;
            position--;
        }
        if(ptr==NULL){
            *valid=false;
            return head;
        }
        if((newCell=createCell(value))==NULL){
            *valid=false;
            return head;
        }
        tmp = ptr->next;
        ptr->next=newCell;
        ptr = ptr->next;
        ptr->next=tmp;
    }
    *valid= true;
    return head;
}

int main() {
    struct Cell* newCell;
    bool boolean;
    newCell = createCell(5);
    displayList(newCell);
    newCell = addItem(newCell,2,1,&boolean);
    displayList(newCell);
    return EXIT_SUCCESS;
}