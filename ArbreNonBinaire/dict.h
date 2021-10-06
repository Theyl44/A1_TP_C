//
// Created by Théo on 22/05/2019.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#ifndef ARBRENONBINAIRE_DICT_H
#define ARBRENONBINAIRE_DICT_H

#define charToIndex(c) ((int)(c-'a'))
#define MAX_LENGTH 26

struct NodeDictionary{
    char letter;
    bool isWord;
    struct NodeDictionary* sons[26];
};

struct NodeDictionary* createNodeDictionary(char letter);

void insert (struct NodeDictionary* D, char* word);

bool search(struct NodeDictionary* D, char* word);

void deleteDictionary(struct NodeDictionary* D);

void displayDictionary(struct NodeDictionary* D,char* wordAccum,int level);

void insertDictionary(struct NodeDictionary* D,FILE *p1);

void displayMatch(struct NodeDictionary* D, char* wordPart);


#endif //ARBRENONBINAIRE_DICT_H
