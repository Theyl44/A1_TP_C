#include "list.h"

struct Cell* createCell(int val){ // renvoyer un pointeur d'une cellule avec la premiere case = value et next= NULL;
    struct Cell* ptr; //
    ptr= (struct Cell*)malloc(sizeof(struct Cell));
    if (ptr == NULL) { // si le malloc ne fonctionne pas
        return NULL;
    }
    else {
        ptr->value = val;
        ptr->next = NULL; // le pointeur vers la 2ème chaine renvoit null car on en veut qu'une pour l'instant
        return ptr; // adresse de la première chaine du tab
    }
}

struct List* createList(){
    struct List *l=(struct List*)malloc(sizeof(struct List));
    l-> head=NULL;
    l-> size=0;
    return l;
}
struct List*  addItem(struct List* l, int value, unsigned int position, bool* valid){
    struct Cell* ptrCell;
    struct Cell* tmp_ptr;
    struct Cell* newCell_ptr;
    if (position == 0){
        if (l==NULL){ //si List* n'existe pas
            *valid=false;
            return l;
        }
        if (l->head ==NULL) {// si liste existe mais pas encore struct cell
            newCell_ptr=createCell(value);
            l->head=newCell_ptr;
            l->size= l->size+1;
            *valid=true;
            return l ;
        }//cas général avec liste remplie Xeurs element
        tmp_ptr = l->head;
        l->head = createCell(value);
        if (l->head == NULL){//si create cell s'est mal passé
            *valid=false;
            return l;
        }
        else {
            l->head->next = tmp_ptr;
            l->size = (l->size) + 1;
        }
    }
    else {
        ptrCell= l->head;
        while ((position > 1) && ptrCell != NULL) {
            ptrCell = ptrCell->next;
            position--;
        }
        if (ptrCell == NULL) {//on essaye d'ajouter une chaine trop loin ou autre
            *valid = false;
            return l;
        }
        newCell_ptr=createCell(value);
        if (newCell_ptr == NULL) {
            *valid = false;
            return l;
        }
        tmp_ptr = ptrCell->next;
        ptrCell->next = newCell_ptr;
        ptrCell = ptrCell->next;
        ptrCell->next = tmp_ptr;
        l->size = (l->size)+1;
    }
    *valid = true;
}

bool isEmpty(struct List* l){
    return (l->size==0);
}

void deleteItem(struct List* l, unsigned int position, bool* valid) {
    struct Cell *ptrCell = l->head;
    struct Cell *ptrSuiv;
    if (position == 0) {
        if (ptrCell != NULL) {// si la chaine existe
            ptrSuiv = ptrCell->next; // va sur la chaine 2
            free(ptrCell); // libère la chaine 1
            l->head = ptrSuiv; // déplace le head vers la chaine 2
            *valid = true;
            l->size = (l->size) - 1;
            return;
        } else {
            *valid = false; // on veut suppr qqch qui existe pas
            return;
        }
    } else {
        while ((position > 1) && ptrCell != NULL) {
            ptrCell = ptrCell->next;
            position--;
        }
        if (ptrCell == NULL) {
            *valid = false; // on essaye de suppr qqch qui existe pas ATTENTION NE MARCHE PAS!!!!
            return;
        } else { // cas général
            ptrSuiv = ptrCell->next;
            ptrCell->next = ptrSuiv->next;
            free(ptrSuiv);
            *valid = true;
            l->size = (l->size) - 1;
            return;
        }
    }
}
void deleteList(struct List* l){
    bool validO= true;
    int i=l->size;
    struct Cell* verif= l->head;
    i--; // pour passer taille a numerotation dans la chaine
    while (i >= 0){
        deleteItem(l, 0,&validO);
        i--;
    }
    free(l);
    l=NULL;
}

struct List* createListfromTab(int T[],unsigned int size, bool* valid){
    int taille= (int)size; // attention au cast psk size est un unsigned int et addItem prend un int
    struct List* l= createList();
    if (l== NULL){
        *valid= false;
        return l;
    }
    else{
        if (size != 0){
            for (int i=taille-1; i>=0; i--){
                addItem(l,T[i],0,valid); // seulement la dernière affectation sert
            }
        }
        *valid = true;
        return l;
    }
}

unsigned int getNbItems(struct List* l){
    return l->size;
}

int getItem(struct List* list, unsigned int position, bool* valid){
    struct Cell* ptr = list->head;
    while( ptr != NULL && position != 0){
        ptr= ptr-> next;
        position--;
    }
    if (ptr== NULL){
        *valid = false;
        return EXIT_FAILURE;
    }
    else {
        *valid = true;
        return (ptr-> value);
    }
}

void displayList(struct List* l){
    int size= getNbItems(l);
    struct Cell* ptr= l->head;
    int i;
    if (l->head != NULL){
        printf("\t\tLa pile est composée de: \n\n");
        for (i = 0; i < size; i++) {
            if (i==size-1){
                printf("%d ->Bas de la pile\n",ptr->value);
            }
            else if(i==0){
                printf("%d ->Haut de la pile\n^\n",ptr->value);
            }
            else{
                printf("%d\n^\n",ptr->value);
            }
            ptr = ptr->next;
        }
    }
    else {
        printf ("\t\tLa liste est vide\n");
    }
}