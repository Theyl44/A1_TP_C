#include "dict.h"
#include  <string.h>

struct NodeDictionary* createNodeDictionary(char letter){
    struct NodeDictionary* new = (struct NodeDictionary*)malloc(sizeof(struct NodeDictionary));
    if(new!=NULL) {
        new->letter = letter;
        new->isWord = false;
        for (int i = 0; i < 26; i++) {
            new->sons[i] = NULL;
        }
    }
    return new;
}
void insert (struct NodeDictionary* D, char* word){
    int letter;
    for(int i = 0; i < strlen(word); i++){

        if(D->sons[charToIndex(word[i])] == NULL){
            D->sons[charToIndex(word[i])]=createNodeDictionary(word[i]);
        }
            D=D->sons[charToIndex(word[i])];
    }
    D->isWord = true;
}

bool search(struct NodeDictionary* D, char* word){
    for(int i =0;i<strlen(word);i++){
        if(D->sons[charToIndex(word[i])]==NULL){
            return false;
        }
        D=D->sons[charToIndex(word[i])];
    }
    return true;
}

void deleteDictionary(struct NodeDictionary* D){
    if(D!=NULL){
        for(int i =0;i<26;i++){
            if(D->sons[i]!=NULL){
                deleteDictionary(D->sons[i]);
            }
        }
        free(D);
    }
}
void displayDictionary(struct NodeDictionary* D,char* wordAccum, int level){
    if(D->isWord){
        for(int j=0; j<level;j++){
            printf("%c",wordAccum[j]);
        }
        printf("\n");
    }

    for(int i =0; i<26;i++){
        if(D->sons[i]!=NULL) {
            wordAccum[level] = D->sons[i]->letter;
            displayDictionary(D->sons[i], wordAccum, level + 1);
        }
    }
}

void displayMatch(struct NodeDictionary* D, char* wordPart) {
    for (int i = 0; i < strlen(wordPart) ; i++) {
        D = D->sons[charToIndex(wordPart[i])];
    }
    displayDictionary(D, wordPart, strlen(wordPart));
}

void insertDictionary(struct NodeDictionary* D,FILE *p1){
    if (p1 == NULL) {
        printf("\nya un problème\n");
    }

    char word[50];
    while(!feof(p1)){
        fscanf(p1,"%s",word);
        insert(D,word);
    }
    fclose(p1);

}


