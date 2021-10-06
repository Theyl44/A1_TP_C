#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>//

#ifndef LISTEHAINEEV2_LIST_H
#define LISTEHAINEEV2_LIST_H
struct Cell {
    int value;
    struct Cell* next;
};

struct List{
    struct Cell*head;
    struct Cell*tail;
    int size;
};

struct Cell* createCell(int val);
struct List* createList();
bool isEmpty(struct List* l);
struct List* addItem(struct List* l, int value, unsigned int position, bool* valid);
void deleteItem(struct List* l, unsigned int position, bool* valid);
struct List* createListfromTab(int T[], unsigned int size, bool* valid);
void displayList(struct List* l, bool* valid);
unsigned int getNbItems(struct List* l);
int getItem(struct List* l, unsigned int position, bool* valid);

#endif //LISTEHAINEEV2_LIST_H
