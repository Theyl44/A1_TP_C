#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "dict.h"

int main() {
/*  //RECHERCHE D'UN MOT DANS LE DOC
    struct NodeDictionary* D = createNodeDictionary('a');
    char wordAccum[MAX_LENGTH];
    FILE *p1;
    p1 = fopen("words_alpha.txt","r");
    insertDictionary(D,p1);

     char wordPart[46] = "zwitter";
     displayMatch(D, wordPart);
*/

   //ENTRER LE DICTIONNAIRE DANS LE NODEDICTIONARY
    struct NodeDictionary* D = createNodeDictionary('%');
    char wordAccum[MAX_LENGTH];
    FILE *p1;
    p1 = fopen("words_alpha.txt","r");
    insertDictionary(D,p1);
    displayDictionary(D,wordAccum,0);



 //AFFICHER LE DICTIONNAIRE DU FICHIER TXT
 /*
    FILE* file = fopen("words_alpha.txt", "r");
    if (file != NULL) {

        char c;
        char* word;
        int i = 0;
        while ((c = fgetc(file)) != EOF) {
            printf("%c", c);
        }

        fclose(file);
    }

    else {
        printf("Erreur d'ouverture du fichier.\n");
    }
*/
}