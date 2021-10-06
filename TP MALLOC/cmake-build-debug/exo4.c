#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int exo4(int argc,char** argv)
{
    char* phrase;
    int nbr=0;
    int cases = 0;
    int w;
    for(int i=1;i<argc;i++)//compter le nbr de caractere dans la phrase
    {
        nbr = nbr +strlen(argv[i]);
    }
    nbr = nbr + argc-1;// pour les espaces et le \0 a la fin
    phrase = (char*)malloc(nbr*sizeof(char));
    for(int i=1;i<argc;i++)
    {
        w = 0;
        for(int j=cases;j<cases+strlen(argv[i]);j++)
        {
            phrase[j]=argv[i][w];
            w++;
        }
        cases= cases+strlen(argv[i]);
        phrase[cases]=' ';
        cases++;
    }
    phrase[nbr]='\0';
    printf("\tvotre phrase est : \n%s",phrase);
    free(phrase);
    return EXIT_SUCCESS;
}
