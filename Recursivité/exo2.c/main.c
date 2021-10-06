#include <stdio.h>
#include <stdlib.h>
int function (int number);
int main(int argc, char** argv) {
    int number;
    int result;
    if(argc!=2) {
        printf("wrong utilisation of the prog\n");
        return EXIT_FAILURE;
    }
    number = atoi(argv[1]);
    result = function(number);
    printf("that's your number %d\nand that the result of the function %d",number,result);
    return EXIT_SUCCESS;
}
int function (int number) {
    if(number > 0)
    {
        number = 1 + function(number/10);
    }
    else
        return number;
}
