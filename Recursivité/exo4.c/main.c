#include <stdio.h>
#include <stdlib.h>
int function (int number);
int main(int argc,char** argv)
{
    int number;
    int result;
    if(argc!=2)
    {
        printf("wrong utilisation of the prog\n");
        return EXIT_FAILURE;
    }
    number = atoi(argv[1]);
    printf("%d is primer number ? ",number)
    result  = function (number);
    if(result == 0)
        printf("true\n");
    else
        printf("false\n")
        return EXIT_SUCCESS;
}
int function (int number){
    if(number > 1)
    {
    }
}