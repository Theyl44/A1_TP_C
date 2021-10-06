//
// Created by Théo on 24/04/2019.
//

#ifndef COMPILATION_STACK_H
#define COMPILATION_STACK_H
struct Stack {
    struct List* liste;
} ;
struct Stack* emptyStack();//crée une pile vide

void push(struct Stack* s,int item,bool* valid);//ajoute un element item en haut de la pile s

int top(struct Stack* s, bool* valid);//consulte un element en haut de la pile s sans le retirer

int pop( struct Stack* s,bool* valid);//retire et renvoie  un element en haut de la pile s

int stackSize(struct Stack* s);//renvoie le nombre d'element de la  pile

bool isStackEmpty(struct Stack* s);//rencoie true si la pile s est vide, false sinon

void printStack(struct Stack* s);//afifiche la pile s

#endif //COMPILATION_STACK_H
