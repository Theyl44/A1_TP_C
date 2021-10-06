#include <stdio.h>
#include <stdlib.h>
int function (int number, int power);
int main(int argc,char**argv){
    int number;
    int power;
    int result;
    if(argc!=3)
    {
        printf("wrong utilisation of the prog\n");
        return EXIT_FAILURE;
    }
    number = atoi(argv[1]);
    power = atoi(argv[2]);
    result = function (number,power);
    printf("%d^%d = %d",number,power,result);
    return EXIT_SUCCESS;
}
int function(int number, int power)
{
    if(power == 0)
    {
        return 1;
    }
    if(power > 0){
        number  = number * function (number,power-1);
    }
    return  number;
}