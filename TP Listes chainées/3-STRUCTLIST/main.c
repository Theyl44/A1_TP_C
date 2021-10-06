#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Cell {
    int value ;
    struct Cell* next ;
    struct Cell* previous;
};
struct List {
    int size;
    struct Cell* head ;
    struct Cell* tail;
};
int main() {
}