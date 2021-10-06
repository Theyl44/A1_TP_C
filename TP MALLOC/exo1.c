//
// Created by Théo on 06/03/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Maj(char* chaine,char* copie);
void Min(char* chaine,char* copie);

int exo1(int argc, char** argv) {
    char* copie1, *copie2;
    char* chaine;
    if(argc!=2)
    {
        printf("Erreur d'utilisation du programme");
        return EXIT_FAILURE;
    }
    chaine = argv[1];
    copie1 = malloc((strlen(argv[1])+1)*sizeof(char));
    Maj(chaine,copie1);
    copie2 = malloc((strlen(argv[1])+1)*sizeof(char));
    Min(chaine,copie2);
    printf("%s\n%s\n%s\n",chaine,copie1,copie2);
    free(copie1);
    free(copie2);
    return EXIT_SUCCESS;
}

void Maj(char* chaine,char* copie)
{
    for(int i=0;i<strlen(chaine);i++)
    {
        if(chaine[i]>='A' && chaine[i]<='Z')
        {
            copie[i]=chaine[i]+32;
        }
        else
            copie[i]=chaine[i];
    }
    copie[strlen(chaine)]='\0';
}
void Min(char* chaine,char* copie)
{
    for(int i=0;i<strlen(chaine);i++)
    {
        if(chaine[i]>='a' && chaine[i]<='z')
        {
            copie[i]=chaine[i]-32;
        }
        else
            copie[i]=chaine[i];
    }
    copie[strlen(chaine)]='\0';
}

