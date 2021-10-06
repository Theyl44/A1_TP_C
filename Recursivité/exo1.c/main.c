#include <stdio.h>
#include <stdlib.h>
int function(int number);
int main(int argc ,char** argv) {
    int number;
    int result;
    if(argc!=2)
    {
        printf("wrong utilisation of the programme\n");
        return EXIT_FAILURE;
    }
    number = atoi(argv[1]);
    result = function(number);
    printf("the somme of %d is %d \n",number,result);
    return EXIT_SUCCESS;
}
int function (int number)
{
    if(number >1 )
    {
        number = number+function(number-1);
    }
    if(number==1)
    {
        return 1;
    }
    return number;
}