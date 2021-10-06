#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "stackArray.h"
int main() {
    bool valid;
    struct Stack* S1 = emptyStack();
    push(S1,0,&valid);
    push(S1,1,&valid);
    int prout = top(S1,&valid);
    push(S1,2,&valid);
    prout = top(S1,&valid);

    return EXIT_SUCCESS;
}