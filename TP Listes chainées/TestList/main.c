#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "list.h"
#include "queue.h"

int main() {
    bool valid;
    struct Queue* Q1 = emptyQueue();
    pop(Q1,&valid);
    return 0;
}