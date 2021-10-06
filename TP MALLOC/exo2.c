//
// Created by Théo on 06/03/2019.
//

#include <stdio.h>
#include <stdlib.h>
void function(int*pair,int*impair,int*word,int argc);

int exo2(int argc,char** argv) {
    int* word;
    int* pair;
    int* impair;
    int Cpair=0;
    int Cimpair=0;
    word = (int*)malloc((argc-1)*sizeof(int));
    for(int i=0;i<argc-1;i++)
    {
        word[i]=atoi(argv[i+1]);
        if(word[i]%2==0) {
            Cpair ++;
        } else
            Cimpair++;
    }

    pair = (int*)malloc(Cpair*sizeof(int));
    impair = (int*)malloc(Cimpair*sizeof(int));
    function(pair,impair,word,argc);
    printf("votre chaine de base est :\n");
    for(int j=0;j<argc-1;j++)
    {
        printf("%d ",word[j]);
    }
    printf("\nvotre chaine Pair est :\n");
    for(int j=0;j<Cpair;j++)
    {
        printf("%d ",pair[j]);
    }
    printf("\nvotre chaine Impair est :\n");
    for(int j=0;j<Cimpair;j++)
    {
        printf("%d ",impair[j]);
    }
    free(word);
    free(pair);
    free(impair);
    return EXIT_SUCCESS;
}
void function(int* pair,int* impair,int* word,int argc)
{
    int un=0;
    int deux=0;
    for(int i=0;i<argc-1;i++)
    {
        if(word[i]%2==0)
        {
            pair[un]=word[i];
            un++;
        }
        else
        {
            impair[deux]=word[i];
            deux++;
        }
    }
}
