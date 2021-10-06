#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int exo6(int argc, char** argv)
{
    char* phraseF;
    int lenght=strlen(argv[1]);//la longueur de la phrase
    char* phrase;
    phrase = argv[1];
    printf("%s\n",phrase);
    if(argc!=2)
    {
        printf("mauvaise utilisation d prog\n");
        return EXIT_FAILURE;
    }
    phraseF = (char*)malloc((strlen(argv[1])+1)*sizeof(char));
    for(int i=0;i<lenght;i++)
    {
        if(i==0)
        {
            phraseF[i]=phrase[i] - 32;
        }
        else{
            if(phrase[i-1]==' ')
            {
                phraseF[i]=phrase[i] - 32;
            }
            else{
                phraseF[i]=phrase[i];
            }
        }
    }
    phraseF[lenght]='\0';
    printf("%s",phraseF);
    return EXIT_SUCCESS;
}