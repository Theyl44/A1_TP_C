#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char** argv) {
    char* word;
    int voy=0;
    if(argc!=2)
    {
        printf("Mauvaise utilisation du programme\n");
        return EXIT_FAILURE;
    }
    word = argv[1];
    for(int i =0;i<strlen(word);i++)
    {
        if(word[i] =='a' || word[i]=='e' ||word[i] =='i' ||word[i] =='o' ||word[i] =='u' ||word[i] =='y')
        {
            voy++;
        }
    }
    printf("Le nombre de voyelle de %s est de %d",word,voy);
    return EXIT_SUCCESS;
}