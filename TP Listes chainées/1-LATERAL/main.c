#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Cell{
    int value;
    struct Cell* next;
};
struct Cell* createCell(int val)
{
    struct Cell* new;
    new = (struct Cell*)malloc(sizeof(struct Cell));
    new->value=val;
    new->next=NULL;
    return new;
}
void displayList(struct Cell* head)
{
    struct Cell* tmp;
    printf("votre liste est : \n");
    if(head==NULL)
    {
        printf("NULL");//
    }
    else
    {
        while(head !=NULL)
        {
            printf("%d ", head->value);
            head = head->next;
        }
    }
    printf("\n");
}
struct Cell* addItem(struct Cell* head,int value,unsigned int position,bool* valid)
{
    struct Cell* ptr=head; //pointer of position
    struct Cell* tmp;
    struct Cell* newCell;
    if(position == 0) {
        if((newCell = createCell(value))==NULL)
        {
            *valid=false;
            return head;
        }
        if(ptr==NULL)
        {
            head = newCell;
        }
        else{
            tmp=head;
            head=newCell;
            head->next=tmp;
        }
    }
    else{
        while((position > 1) &&  ptr !=NULL)
        {
            ptr = ptr->next;
            position--;
        }
        if(ptr==NULL){//posiition n'est pas dans le tableau
            *valid=false;
            return head;
        }
        if((newCell=createCell(value))==NULL){
            *valid=false;
            return head;
        }
        tmp = ptr->next;
        ptr->next=newCell;
        ptr = ptr->next;
        ptr->next=tmp;
    }
    *valid= true;
    return head;
}
struct Cell* deleteItem(struct Cell* head, unsigned int position, bool* valid)
{
    struct Cell* ptr=head;
    struct Cell* tmp;
    if(position == 0) {
        if (ptr == NULL) {//si on delete qqlc de vide
            *valid = false;
            return head;
        }
        else{//delete la premiere case
            ptr = (ptr->next);
            free(head);
            head=ptr;
        }
    }
    else {
        while ((position > 1) && ptr != NULL) {
            ptr = ptr->next;
            position--;
        }
        if(ptr==NULL){//si on delete trop loin
            *valid=false;
            return head;
        }
        if ((ptr->next)->next == NULL) {//si on delete a la fin
            tmp = ptr;
            free(ptr->next);
            tmp->next=NULL;

        }
        else{//le cas génerale
            tmp = ptr;
            tmp=(tmp->next)->next;
            free(ptr->next);
            ptr->next=tmp;

        }
    }
    *valid = true;
    return head;
}
unsigned int getNbItems(struct Cell* head)
{
    unsigned int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
    return count;
}
void deleteList(struct Cell* head)
{
    int nbItems = getNbItems(head);
    bool* booleen;
    while(nbItems != 0)
    {
        nbItems--;
        head = deleteItem(head, 0,&booleen);
    }
}
struct Cell* createListfromTab(int T[], unsigned int size, bool* valid)
{
    bool verif;
    struct Cell* newCell=NULL;
    for(int i=0;i<size;i++)
    {
        newCell=addItem(newCell,T[i],i,&verif);
    }
    *valid = true;
    return newCell;
}
int getItem(struct Cell* head, unsigned int position,bool* valid){
    *valid=false;
    if (position>=getNbItems(head)) {
        printf("Position demander invalid\n");
        return 0;
    }
    else {
        for (int i = 0; i < position; ++i) {
            head = head->next;
        }
        int resultat = head->value;
        *valid=true;
        return resultat;
    }
}

bool egales(struct Cell* l1, struct Cell* l2){

    if((l1==NULL) && (l2==NULL)){
        return true;
    }
    if((l1!=NULL) && (l2!=NULL)){
        return (l1->value == l2->value) && egales(l1->next, l2->next);
    }
    else{
        return false;
    }
}

struct Cell* listTab(int T[], unsigned int size){
    struct Cell* head = createCell(T[0]);
    struct Cell* ptr;
    struct Cell* iter = head;
    for(int i=1;i < size;i++){
        ptr = createCell(T[i]);
        iter->next = ptr;
        iter = ptr;
    }
    return head;
}

void tests(){

    bool valid;

    //    struct Cell* createCell(int val);
    printf("1-------createCell-------\n");
    struct Cell* l1;
    l1 = createCell(40);
    if(l1->value == 40) {
        printf("test valeur ok :D\n");
    }
    else{
        printf("test valeur not ok :(\n");
    }
    if(l1->next == NULL) {
        printf("test next ok :D\n");
    }
    else{
        printf("test next not ok :(\n");
    }
    deleteList(l1);
    //--------------------------------------

    //    struct Cell* addItem(struct Cell* head, int value, unsigned int position, bool* valid);
    printf("2-------addItem-------\n");
    struct Cell* l2 = NULL;
    l2 = addItem(l2,23,1,&valid);
    if(valid==false) {
        printf("test addItem liste vide dehors ok :D\n");
    }
    else{
        printf("test addItem liste vide dehors not ok :(\n");
    }
    l2 = addItem(l2,23,0,&valid);
    int T21[1] = {23};
    struct Cell* l21 = listTab(T21,1);
    if(valid==true) {
        if(egales(l2,l21)){
            printf("test addItem liste vide premier ok :D\n");
        }
        else{
            printf("test addItem liste vide premier not ok :(\n");
        }
    }
    else{
        printf("test addItem liste vide premier not ok :(\n");
    }
    l2 = addItem(l2,25,0,&valid);
    l2 = addItem(l2,27,0,&valid);
    l2 = addItem(l2,29,3,&valid);
    int T22[4] = {27,25,23,29};
    struct Cell* l22 = listTab(T22,4);
    if(valid==true) {
        if(egales(l2,l22)){
            printf("test addItem liste dernier ok :D\n");
        }
        else{
            printf("test addItem liste dernier not ok :(\n");
        }
    }
    else{
        printf("test addItem liste dernier not ok :(\n");
    }

    l2 = addItem(l2,31,2,&valid);
    int T23[5] = {27,25,31,23,29};
    struct Cell* l23 = listTab(T23,5);
    if(valid==true) {
        if(egales(l2,l23)){
            printf("test addItem liste milieu ok :D\n");
        }
        else{
            printf("test addItem liste milieu not ok :(\n");
        }
    }
    else{
        printf("test addItem liste milieu not ok :(\n");
    }

    l2 = addItem(l2,31,55,&valid);
    if(valid==false) {
        if(egales(l2,l23)){
            printf("test addItem liste non vide dehors ok :D\n");
        }
        else{
            printf("test addItem liste non vide dehors not ok :(\n");
        }
    }
    else{
        printf("test addItem liste non vide dehors not ok :(\n");
    }
    deleteList(l2);
    deleteList(l21);
    deleteList(l22);
    deleteList(l23);
    //--------------------------------------

    //    struct Cell* deleteItem(struct Cell* head, unsigned int position, bool* valid);
    printf("3-------deleteItem-------\n");
    struct Cell* l3 = NULL;
    l3 = deleteItem(l3,0,&valid);
    if(valid==false) {
        printf("test deleteItem liste vide ok :D\n");
    }
    else{
        printf("test deleteItem liste vide not ok :(\n");
    }

    l3 = createCell(52);
    l3 = deleteItem(l3,0,&valid);
    if(valid==true) {
        if(egales(l3,NULL)){
            printf("test deleteItem liste un element ok :D\n");
        }
        else{
            printf("test deleteItem liste un element not ok :(\n");
        }
    }
    else{
        printf("test deleteItem liste un element not ok :(\n");
    }
    int T31[4] = {23,25,27,29};
    struct Cell* l31 = listTab(T31,4);
    struct Cell* l32 = listTab(T31,3);
    l31 = deleteItem(l31,3,&valid);
    if(valid==true) {
        if(egales(l31,l32)){
            printf("test deleteItem liste dernier ok :D\n");
        }
        else{
            printf("test deleteItem liste dernier not ok :(\n");
        }
    }
    else{
        printf("test deleteItem liste dernier not ok :(\n");
    }
    int T32[4] = {23,25,27,29};
    int T322[3] = {25,27,29};
    struct Cell* l311 = listTab(T32,4);
    struct Cell* l322 = listTab(T322,3);
    l311 = deleteItem(l311,0,&valid);
    if(valid==true) {
        if(egales(l311,l322)){
            printf("test deleteItem liste premier ok :D\n");
        }
        else{
            printf("test deleteItem liste premier not ok :(\n");
        }
    }
    else{
        printf("test deleteItem liste premier not ok :(\n");
    }
    int T321[7] = {23,25,27,29,31,33,35};
    int T3222[6] = {23,25,27,31,33,35};
    struct Cell* l3111 = listTab(T321,7);
    struct Cell* l3222 = listTab(T3222,6);
    l3111 = deleteItem(l3111,3,&valid);
    if(valid==true) {
        if(egales(l3111,l3222)){
            printf("test deleteItem liste milieu ok :D\n");
        }
        else{
            printf("test deleteItem liste milieu not ok :(\n");
        }
    }
    else{
        printf("test deleteItem liste milieu not ok :(\n");
    }
    l3111 = deleteItem(l3111,34,&valid);
    if(valid==false) {
        if(egales(l3111,l3222)){
            printf("test deleteItem liste dehors ok :D\n");
        }
        else{
            printf("test deleteItem liste dehors not ok :(\n");
        }
    }
    else{
        printf("test deleteItem liste dehors not ok :(\n");
    }

    deleteList(l3);
    deleteList(l31);
    deleteList(l32);
    deleteList(l311);
    deleteList(l322);
    deleteList(l3111);
    deleteList(l3222);
    //--------------------------------------

    //    void deleteList(struct Cell* head);
    printf("4-------deleteList-------\n");
    printf("executer: valgrind --tool=memcheck <nom_programme> :D\n");
    printf("TOUTES les listes utilises dans ces tests seront effacées avec cette fonction!\n");

    //--------------------------------------

    //    struct Cell* createListfromTab(int T[], unsigned int size, bool* valid);
    printf("5-------createListfromTab-------\n");
    struct Cell* l5 = NULL;
    int T5[0];
    l5 = createListfromTab(T5,0,&valid);
    if((valid == true) && (l5==NULL)) {
        printf("test createListfromTab tab vide ok :D\n");
    }
    else{
        printf("test createListfromTab tab vide not ok :(\n");
    }
    struct Cell* l51 = NULL;
    int T51[1] = {3412};
    l51 = createListfromTab(T51,1,&valid);
    struct Cell* l52 = listTab(T51,1);
    if((valid == true) && (egales(l51,l52))) {
        printf("test createListfromTab tab un element ok :D\n");
    }
    else{
        printf("test createListfromTab tab un element not ok :(\n");
    }


    int T511[7] = {23,25,27,29,31,33,35};
    int T522[7] = {35,33,31,29,27,25,23};
    struct Cell* l511 = listTab(T511,7);
    struct Cell* l522 = listTab(T522,7);
    struct Cell* l5111;
    l5111 = createListfromTab(T511,7,&valid);

    if((valid == true) && (egales(l5111,l511) || egales(l5111,l522))) {
        printf("test createListfromTab tab general ok :D\n");
    }
    else{
        printf("test createListfromTab tab general not ok :(\n");
    }

    deleteList(l5);
    deleteList(l51);
    deleteList(l52);
    deleteList(l5111);
    deleteList(l511);
    deleteList(l522);
    //--------------------------------------

    //    void displayList(struct Cell* head);
    printf("6-------displayList-------\n");
    struct Cell* l60 = NULL;
    printf("test displayList liste vide\n Si votre sorti est: NULL\n dans la prochaine ligne alors c'est bon :D\n");
    displayList(l60);
    int T6[5] = {2,10,50,99,114};
    struct Cell* l6 = listTab(T6,5);
    printf("test displayList liste non vide\n Si votre sorti est: 2->10->50->99->114->NULL\n dans la prochaine ligne alors c'est bon :D\n");
    displayList(l6);
    deleteList(l6);

    //--------------------------------------

    //    unsigned int getNbItems(struct Cell* head);
    printf("7-------getNbItems-------\n");
    struct Cell* l7 = NULL;
    int n = getNbItems(l7);
    if(n==0) {
        printf("test #items liste vide ok :D\n");
    }
    else{
        printf("test #items liste vide not ok :(\n");
    }
    int T7[5] = {2,10,50,99,114};
    l7 = listTab(T7,5);
    n = getNbItems(l7);
    if(n==5) {
        printf("test #items liste non vide ok :D\n");
    }
    else{
        printf("test #items liste non vide not ok :(\n");
    }
    deleteList(l7);
    //--------------------------------------

    //    int getItem(struct Cell* head, unsigned int position, bool* valid);
    printf("8-------getItem-------\n");
    struct Cell* l8 = NULL;
    n = getItem(l8,3,&valid);
    if(valid == false) {
        printf("test getItem liste vide ok :D\n");
    }
    else{
        printf("test getItem liste vide not ok :(\n");
    }
    int T8[5] = {2,10,50,99,114};
    l8 = listTab(T8,5);
    n = getItem(l8,0,&valid);
    if(valid==true) {
        if(n==2){
            printf("test getItem premier liste non vide ok :D\n");
        }
        else{
            printf("test getItem premier liste non vide not ok :(\n");
        }
    }
    else{
        printf("test getItem premier liste non vide not ok :(\n");
    }
    n = getItem(l8,2,&valid);
    if(valid==true) {
        if(n==50){
            printf("test getItem milieu liste non vide ok :D\n");
        }
        else{
            printf("test getItem milieu liste non vide not ok :(\n");
        }
    }
    else{
        printf("test getItem milieu liste non vide not ok :(\n");
    }
    n = getItem(l8,4,&valid);
    if(valid==true) {
        if(n==114){
            printf("test getItem dernier liste non vide ok :D\n");
        }
        else{
            printf("test getItem dernier liste non vide not ok :(\n");
        }
    }
    else{
        printf("test getItem dernier liste non vide not ok :(\n");
    }
    n = getItem(l8,5,&valid);
    if(valid==false) {
        printf("test getItem dehors liste non vide ok :D\n");
    }
    else{
        printf("test getItem dehors liste non vide not ok :(\n");
    }
    deleteList(l8);
    //--------------------------------------

    return;
}

int main() {
    tests();
    return 0;
}


