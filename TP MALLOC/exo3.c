//
// Created by Théo on 06/03/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void split(char *phrase, char **words, int nbr);

void read(char **words, int nbr);

int exo3(int argc, char **argv) {
    int count = 0;

    char *phrase;
    int LongueurPhrase = strlen(argv[1]);
    char **words;
    phrase = argv[1];
    if (argc != 2) {
        printf("mauvaise utilisation du prog\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < LongueurPhrase; i++) {
        if (phrase[i] == ' ') {
            count++;
        }
    }
    count++;
    words = (char **) malloc(count * sizeof(char *));
    split(phrase, words, count);
    read(words, count);
    for(int i=0;i<count;i++)
    {
        free(words[i]);
    }
    free(words);
    return EXIT_SUCCESS;
}

void split(char *phrase, char **words, int nbr) {
    int debut = 0;
    int fin = 0;
    int longueur = strlen(phrase);

    int w=0;
    int z=0;
        for (int j = debut; j < longueur+1; j++) {
            if (phrase[j] == ' '||phrase[j]=='\0') {
                fin = j;
                words[w] = (char *) malloc((fin - debut + 1) * sizeof(char));
                for (int i = debut; i < fin; i++) {
                    words[w][z] = phrase[i];
                    z++;
                }
                words[w][z] = '\0';

                debut = fin + 1;
                w++;
                z=0;
            }
        }

}

void read(char **words, int nbr) {
    for (int i = 0; i < nbr; i++) {
        printf("le mot %d est : %s\n", i + 1, words[i]);
    }
}