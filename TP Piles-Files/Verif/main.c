#include <stdio.h>
#include <stdbool.h>
#include <stdio.h>
#include "list.h"
//#include "stackList.h"
//#include "stackArray.h"
//#include "queueArray.h"
//#include "queueList.h"



//-----------------------------------------------------------
//-----------------------------------------------------------
// -------- TESTS LIST ! ------------------------------------
/*
bool egales(struct List* l1, int tab[],int size){

	if(l1->size != size){
		return false;
	}
	bool resp = true;
	bool valid;
	for(int i=0;i<size;i++){
		resp = resp && (tab[i] == getItem(l1,i,&valid));
	}
	return resp;
}

void testsList(){

	bool valid;

	//	struct List* createList();
    printf("0-------createList-------\n");
    struct List* l1;
    l1 = createList();
	if(l1->size == 0) {
		printf("test size ok :D\n");
	}
	else{
		printf("test size not ok :(\n");
	}
	if(l1->head == NULL) {
		printf("test head ok :D\n");
	}
	else{
		printf("test head not ok :(\n");
	}
	deleteList(l1);
	//--------------------------------------

	//	bool isEmpty(struct List* l);
	printf("1-------isEmpty-------\n");
	struct List* l01 = createList();
	if(isEmpty(l01)){
		printf("test empty liste vide ok :D\n");
	}
	else{
		printf("test empty liste vide not ok :(\n");
	}

	addItem(l01,41,0,&valid);
	addItem(l01,11,1,&valid);

	if(!isEmpty(l01)){
		printf("test empty liste non vide ok :D\n");
	}
	else{
		printf("test empty liste non vide not ok :(\n");
	}
	deleteList(l01);
	//--------------------------------------

    //    void addItem(struct List* l, int value, unsigned int position, bool* valid);
	printf("2-------addItem-------\n");
	struct List* l2 = createList();
	addItem(l2,23,1,&valid);
	if(valid==false) {
        printf("test addItem liste vide dehors ok :D\n");
    }
    else{
        printf("test addItem liste vide dehors not ok :(\n");
    }
    addItem(l2,23,0,&valid);

	if(valid==true) {
		if((getItem(l2,0,&valid)==23) && (l2->size==1)){
			printf("test addItem liste vide premier ok :D\n");
		}
		else{
			printf("test addItem liste vide premier not ok :(\n");
		}
    }
    else{
        printf("test addItem liste vide premier not ok :(\n");
    }
    addItem(l2,25,0,&valid);
    addItem(l2,27,0,&valid);
    addItem(l2,29,3,&valid);
    int T22[4] = {27,25,23,29};
	if(valid==true) {
		if(egales(l2,T22,4)){
			printf("test addItem liste dernier ok :D\n");
		}
		else{
			printf("test addItem liste dernier not ok :(\n");
		}
    }
    else{
        printf("test addItem liste dernier not ok :(\n");
    }

    addItem(l2,31,2,&valid);
    int T23[5] = {27,25,31,23,29};

	if(valid==true) {
		if(egales(l2,T23,5)){
			printf("test addItem liste milieu ok :D\n");
		}
		else{
			printf("test addItem liste milieu not ok :(\n");
		}
    }
    else{
        printf("test addItem liste milieu not ok :(\n");
    }

    addItem(l2,31,55,&valid);
	if(valid==false) {
		if(egales(l2,T23,5)){
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
	//--------------------------------------

	//    void deleteItem(struct List* l, unsigned int position, bool* valid);
	printf("3-------deleteItem-------\n");
	struct List* l3 = createList();
	deleteItem(l3,0,&valid);
	if(valid==false) {
        printf("test deleteItem liste vide ok :D\n");
    }
    else{
        printf("test deleteItem liste vide not ok :(\n");
    }

    addItem(l3,52,0,&valid);
    deleteItem(l3,0,&valid);
	if(valid==true) {
		if(isEmpty(l3)){
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
	addItem(l3,23,0,&valid);
	addItem(l3,25,1,&valid);
	addItem(l3,27,2,&valid);
	addItem(l3,29,3,&valid);
    deleteItem(l3,3,&valid);
	if(valid==true) {
		if(egales(l3,T31,3)){
			printf("test deleteItem liste dernier ok :D\n");
		}
		else{
			printf("test deleteItem liste dernier not ok :(\n");
		}
    }
    else{
        printf("test deleteItem liste dernier not ok :(\n");
    }

	int T322[3] = {25,27};
    deleteItem(l3,0,&valid);
	if(valid==true) {
		if(egales(l3,T322,2)){
			printf("test deleteItem liste premier ok :D\n");
		}
		else{
			printf("test deleteItem liste premier not ok :(\n");
		}
    }
    else{
        printf("test deleteItem liste premier not ok :(\n");
    }
    int T3222[6] = {23,25,27,31,33,35};
    struct List* l3111 = createList();
    addItem(l3111,23,0,&valid);
	addItem(l3111,25,1,&valid);
	addItem(l3111,27,2,&valid);
	addItem(l3111,29,3,&valid);
	addItem(l3111,31,4,&valid);
	addItem(l3111,33,5,&valid);
	addItem(l3111,35,6,&valid);
    deleteItem(l3111,3,&valid);
	if(valid==true) {
		if(egales(l3111,T3222,6)){
			printf("test deleteItem liste milieu ok :D\n");
		}
		else{
			printf("test deleteItem liste milieu not ok :(\n");
		}
    }
    else{
        printf("test deleteItem liste milieu not ok :(\n");
    }
	deleteItem(l3111,34,&valid);
	if(valid==false) {
		if(egales(l3111,T3222,6)){
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
	deleteList(l3111);
	//--------------------------------------

    //    void deleteList(struct List* l);
	printf("4-------deleteList-------\n");
    printf("executer: valgrind --tool=memcheck <nom_programme> :D\n");
    printf("TOUTES les listes utilises dans ces tests seront effacees avec cette fonction!\n");
    //--------------------------------------

    //    struct List* createListfromTab(int T[], unsigned int size, bool* valid);
	printf("5-------createListfromTab-------\n");
    struct List* l5 = NULL;
    int T5[0];
    l5 = createListfromTab(T5,0,&valid);
    if((valid == true) && (egales(l5,T5,0))) {
        printf("test createListfromTab tab vide ok :D\n");
    }
    else{
        printf("test createListfromTab tab vide not ok :(\n");
    }
    struct List* l51 = NULL;
    int T51[1] = {3412};
    l51 = createListfromTab(T51,1,&valid);
    if((valid == true) && (egales(l51,T51,1))) {
        printf("test createListfromTab tab un element ok :D\n");
    }
    else{
        printf("test createListfromTab tab un element not ok :(\n");
    }

    int T511[7] = {23,25,27,29,31,33,35};
    int T522[7] = {35,33,31,29,27,25,23};
    struct List* l5111;
    l5111 = createListfromTab(T511,7,&valid);

    if((valid == true) && (egales(l5111,T511,7) || egales(l5111,T522,7))) {
        printf("test createListfromTab tab general ok :D\n");
    }
    else{
        printf("test createListfromTab tab general not ok :(\n");
    }

    deleteList(l5);
    deleteList(l51);
    deleteList(l5111);
    //--------------------------------------

    //    void displayList(struct List* l);
	printf("6-------displayList-------\n");
	struct List* l60 = createList();
	printf("test displayList liste vide\n Si votre sorti est: NULL\n #elems: 0\n dans la prochaine ligne alors c'est bon :D\n");
    displayList(l60);
    int T6[5] = {2,10,50,99,114};
    struct List* l6 = createListfromTab(T6,5,&valid);
    printf("test displayList liste non vide\n Si votre sorti est: 2->10->50->99->114->NULL\n #elems: 5\n dans la prochaine ligne alors c'est bon :D\n");
    displayList(l6);
    deleteList(l6);
	deleteList(l60);
    //--------------------------------------

    //    unsigned int getNbItems(struct List* l);
	printf("7-------getNbItems-------\n");
	struct List* l7 = createList();
	int n = getNbItems(l7);
	if(n==0) {
        printf("test #items liste vide ok :D\n");
    }
    else{
        printf("test #items liste vide not ok :(\n");
    }
    int T7[5] = {2,10,50,99,114};
	struct List* l71;
    l71 = createListfromTab(T7,5,&valid);
    n = getNbItems(l71);
    if(n==5) {
        printf("test #items liste non vide ok :D\n");
    }
    else{
        printf("test #items liste non vide not ok :(\n");
    }
    deleteList(l7);
	deleteList(l71);
    //--------------------------------------

    //    int getItem(struct List* l, unsigned int position, bool* valid);
	printf("8-------getItem-------\n");
	struct List* l80 = createList();
	n = getItem(l80,3,&valid);
	if(valid == false) {
        printf("test getItem liste vide ok :D\n");
    }
    else{
        printf("test getItem liste vide not ok :(\n");
    }
    int T8[5] = {2,10,50,99,114};
	struct List* l8;
    l8 = createListfromTab(T8,5,&valid);
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
	deleteList(l80);
	//--------------------------------------
}
*/
//-----------------------------------------------------------
//-----------------------------------------------------------


//-----------------------------------------------------------
//-----------------------------------------------------------
// -------- TESTS STACK LIST ! ------------------------------
/*
bool egalesStackList(struct List* l, struct Stack* s){

	if(l->size != s->liste->size){
		return false;
	}
	bool resp = true;
	bool valid;
	for(int i=0;i<l->size;i++){
		resp = resp && (pop(s,&valid) == getItem(l,i,&valid));
	}
	return resp;
}

void testsStackList(){

	bool valid;

	// struct Stack* emptyStack();
    printf("0-------emptyStack-------\n");
    struct Stack* s0;
    s0 = emptyStack();
	if((s0->liste->size == 0) && (stackSize(s0)==0)){
		printf("test create vide ok :D\n");
	}
	else{
		printf("test create vide not ok :(\n");
	}
	//--------------------------------------

	//	bool isStackEmpty(struct Stack* s);
	printf("1-------isStackEmpty-------\n");
	struct Stack* s1 = emptyStack();
	if(isStackEmpty(s1)){
		printf("test empty stack vide ok :D\n");
	}
	else{
		printf("test empty stack vide not ok :(\n");
	}
	push(s1,1,&valid);
	push(s1,2,&valid);
	if(!isStackEmpty(s1)){
		printf("test empty stack non vide ok :D\n");
	}
	else{
		printf("test empty stack non vide not ok :(\n");
	}
	//--------------------------------------

	// void push(struct Stack* s, int item, bool* valid);
	printf("2-------push-------\n");
	struct Stack* s2 = emptyStack();
	push(s2,1,&valid);
	if(valid==true) {
		if((s2->liste->head->value == 1) && (s2->liste->size == 1)) {
			printf("test push stack vide ok :D\n");
		}
		else{
			printf("test push stack vide not ok :(\n");
		}
    }
    else{
        printf("test push stack vide not ok :(\n");
    }
	push(s2,2,&valid);
	if(valid==true) {
		if((s2->liste->head->value == 2) && (s2->liste->head->next->value == 1) && (s2->liste->size == 2)){
			printf("test push stack non vide ok :D\n");
		}
		else{
			printf("test push stack non vide not ok :(\n");
		}
    }
    else{
        printf("test push stack non vide not ok :(\n");
    }
	//--------------------------------------

	// 	int pop(struct Stack* s, bool* valid);
	printf("3-------pop-------\n");
	struct Stack* s3 = emptyStack();
	int a3 = pop(s3,&valid);
	if(valid==false) {
        printf("test pop stack vide ok :D\n");
    }
    else{
        printf("test pop stack vide not ok :(\n");
    }
    push(s3,1,&valid);
	a3 = pop(s3,&valid);
	if(valid==true) {
		if(isStackEmpty(s3) && (s3->liste->size == 0) && (a3 == 1)){
			printf("test pop stack un element ok :D\n");
		}
		else{
			printf("test pop stack un element not ok :(\n");
		}
    }
    else{
        printf("test pop stack un element not ok :(\n");
    }
	push(s3,1,&valid);
	push(s3,2,&valid);
	push(s3,3,&valid);
	push(s3,4,&valid);
	push(s3,5,&valid);
	push(s3,6,&valid);
	a3 = pop(s3,&valid);
	struct List* l3 = createList();
	bool validL;
	addItem(l3,1,0,&validL);
	addItem(l3,2,0,&validL);
	addItem(l3,3,0,&validL);
	addItem(l3,4,0,&validL);
	addItem(l3,5,0,&validL);
	if(valid==true) {
		if(egalesStackList(l3,s3) && (a3 == 6)){
			printf("test pop stack plusieurs ok :D\n");
		}
		else{
			printf("test pop stack plusieurs not ok :(\n");
		}
    }
    else{
        printf("test pop stack plusieurs not ok :(\n");
    }
	//--------------------------------------

    // 	void printStack(struct Stack* s);
	printf("4-------printStack-------\n");
	struct Stack* s4 = emptyStack();
	printf("test printStack stack vide\n Si votre sorti est:\n #elems: 0\n dans la prochaine ligne alors c'est bon :D\n");
    printStack(s4);
	push(s4,1,&valid);
	push(s4,2,&valid);
	push(s4,3,&valid);
	push(s4,4,&valid);
	push(s4,5,&valid);
    printf("test printStack stack non vide\n Si votre sorti est:\n5 --> top\n4 \n3 \n2 \n1 \n#elems: 5\n dans la prochaine ligne alors c'est bon :D\n");
    printStack(s4);
    //--------------------------------------

    // 	int stackSize(struct Stack* s);
	printf("5-------stackSize-------\n");
	struct Stack* s5 = emptyStack();
	int n = stackSize(s5);
	if(n==0) {
        printf("test #items stack vide ok :D\n");
    }
    else{
        printf("test #items stack vide not ok :(\n");
    }
	push(s5,1,&valid);
	push(s5,2,&valid);
	push(s5,3,&valid);
	push(s5,4,&valid);
	push(s5,5,&valid);
	n = stackSize(s5);
    if(n==5) {
        printf("test #items stack non vide ok :D\n");
    }
    else{
        printf("test #items stack non vide not ok :(\n");
    }
    //--------------------------------------

    //	int top(struct Stack* s, bool* valid);
	printf("6-------top-------\n");
	struct Stack* s6 = emptyStack();
	int a6 = top(s6,&valid);
	if(valid==false) {
		printf("test top stack vide ok :D\n");
	}
	else{
		printf("test top stack vide not ok :(\n");
	}
	push(s6,1,&valid);
	a6 = top(s6,&valid);
	if(valid==true) {
		if((a6==1) && (stackSize(s6)==1)){
			printf("test top stack un element ok :D\n");
		}
		else{
			printf("test top stack un element not ok :(\n");
		}
	}
	else{
		printf("test top stack un element not ok :(\n");
	}
	push(s6,2,&valid);
	push(s6,3,&valid);
	push(s6,4,&valid);
	push(s6,5,&valid);
	push(s6,6,&valid);
	a6 = top(s6,&valid);
	if(valid==true) {
		if((a6==6) && (stackSize(s6)==6)){
			printf("test top stack plusieurs ok :D\n");
		}
		else{
			printf("test top stack plusieurs not ok :(\n");
		}
	}
	else{
		printf("test top stack plusieurs not ok :(\n");
	}
	//--------------------------------------
}
*/
//-----------------------------------------------------------
//-----------------------------------------------------------




//-----------------------------------------------------------
//-----------------------------------------------------------
//---------TESTS STACK ARRAY ! ------------------------------
/*
bool egalesStackArray(struct List* l, struct Stack* s){

	if(l->size != s->size){
		return false;
	}
	bool resp = true;
	bool valid;
	for(int i=0;i<l->size;i++){
		resp = resp && (s->elems[i] == getItem(l,i,&valid));
	}
	return resp;
}

void testsStackArray(){

	bool valid;

	// struct Stack* emptyStack();
	printf("0-------emptyStack-------\n");
	struct Stack* s0;
	s0 = emptyStack();
	if((s0->size == 0) && (stackSize(s0)==0)){
		printf("test create vide ok :D\n");
	}
	else{
		printf("test create vide not ok :(\n");
	}
	//--------------------------------------

	//	bool isStackEmpty(struct Stack* s);
	printf("1-------isStackEmpty-------\n");
	struct Stack* s1 = emptyStack();
	if(isStackEmpty(s1)){
		printf("test empty stack vide ok :D\n");
	}
	else{
		printf("test empty stack vide not ok :(\n");
	}
	push(s1,1,&valid);
	push(s1,2,&valid);
	if(!isStackEmpty(s1)){
		printf("test empty stack non vide ok :D\n");
	}
	else{
		printf("test empty stack non vide not ok :(\n");
	}
	//--------------------------------------

	// void push(struct Stack* s, int item, bool* valid);
	printf("2-------push-------\n");
	struct Stack* s2 = emptyStack();
	push(s2,1,&valid);
	if(valid==true) {
		if((s2->elems[0] == 1) && (s2->size == 1)) {
			printf("test push stack vide ok :D\n");
		}
		else{
			printf("test push stack vide not ok :(\n");
		}
	}
	else{
		printf("test push stack vide not ok :(\n");
	}
	push(s2,2,&valid);
	if(valid==true) {
		if((s2->elems[1] == 2) && (s2->elems[0] == 1) && (s2->size == 2)){
			printf("test push stack non vide ok :D\n");
		}
		else{
			printf("test push stack non vide not ok :(\n");
		}
	}
	else{
		printf("test push stack non vide not ok :(\n");
	}
	for(int i=3;i<=MAX_SIZE+1;i++){
		push(s2,i,&valid);
	}
	if(valid==false) {
		if((s2->elems[s2->size-1] == MAX_SIZE) && (s2->size == MAX_SIZE)){
			printf("test push stack MAX_SIZE ok :D\n");
		}
		else{
			printf("test push stack MAX_SIZE not ok :(\n");
		}
	}
	else{
		printf("test push stack MAX_SIZE not ok :(\n");
	}
	//--------------------------------------

	// 	int pop(struct Stack* s, bool* valid);
	printf("3-------pop-------\n");
	struct Stack* s3 = emptyStack();
	int a3 = pop(s3,&valid);
	if(valid==false) {
		printf("test pop stack vide ok :D\n");
	}
	else{
		printf("test pop stack vide not ok :(\n");
	}
	push(s3,1,&valid);
	a3 = pop(s3,&valid);
	if(valid==true) {
		if(isStackEmpty(s3) && (s3->size == 0) && (a3 == 1)){
			printf("test pop stack un element ok :D\n");
		}
		else{
			printf("test pop stack un element not ok :(\n");
		}
	}
	else{
		printf("test pop stack un element not ok :(\n");
	}
	push(s3,1,&valid);
	push(s3,2,&valid);
	push(s3,3,&valid);
	push(s3,4,&valid);
	push(s3,5,&valid);
	push(s3,6,&valid);
	a3 = pop(s3,&valid);
	struct List* l3 = createList();
	bool validL;
	addItem(l3,5,0,&validL);
	addItem(l3,4,0,&validL);
	addItem(l3,3,0,&validL);
	addItem(l3,2,0,&validL);
	addItem(l3,1,0,&validL);
	if(valid==true) {
		if(egalesStackArray(l3,s3) && (a3 == 6)){
			printf("test pop stack plusieurs ok :D\n");
		}
		else{
			printf("test pop stack plusieurs not ok :(\n");
		}
	}
	else{
		printf("test pop stack plusieurs not ok :(\n");
	}
	//--------------------------------------

	// 	void printStack(struct Stack* s);
	printf("4-------printStack-------\n");
	struct Stack* s4 = emptyStack();
	printf("test printStack stack vide\n Si votre sorti est: \n #elems: 0\n dans la prochaine ligne alors c'est bon :D\n");
	printStack(s4);
	push(s4,1,&valid);
	push(s4,2,&valid);
	push(s4,3,&valid);
	push(s4,4,&valid);
	push(s4,5,&valid);
	printf("test printStack stack non vide\n Si votre sorti est:\n5 --> top\n4 \n3 \n2 \n1 \n#elems: 5\n dans la prochaine ligne alors c'est bon :D\n");
	printStack(s4);
	//--------------------------------------

	// 	int stackSize(struct Stack* s);
	printf("5-------stackSize-------\n");
	struct Stack* s5 = emptyStack();
	int n = stackSize(s5);
	if(n==0) {
		printf("test #items stack vide ok :D\n");
	}
	else{
		printf("test #items stack vide not ok :(\n");
	}
	push(s5,1,&valid);
	push(s5,2,&valid);
	push(s5,3,&valid);
	push(s5,4,&valid);
	push(s5,5,&valid);
	n = stackSize(s5);
	if(n==5) {
		printf("test #items stack non vide ok :D\n");
	}
	else{
		printf("test #items stack non vide not ok :(\n");
	}
	//--------------------------------------

	//	int top(struct Stack* s, bool* valid);
	printf("6-------top-------\n");
	struct Stack* s6 = emptyStack();
	int a6 = top(s6,&valid);
	if(valid==false) {
		printf("test top stack vide ok :D\n");
	}
	else{
		printf("test top stack vide not ok :(\n");
	}
	push(s6,1,&valid);
	a6 = top(s6,&valid);
	if(valid==true) {
		if((a6==1) && (stackSize(s6)==1)){
			printf("test top stack un element ok :D\n");
		}
		else{
			printf("test top stack un element not ok :(\n");
		}
	}
	else{
		printf("test top stack un element not ok :(\n");
	}
	push(s6,2,&valid);
	push(s6,3,&valid);
	push(s6,4,&valid);
	push(s6,5,&valid);
	push(s6,6,&valid);
	a6 = top(s6,&valid);
	if(valid==true) {
		if((a6==6) && (stackSize(s6)==6)){
			printf("test top stack plusieurs ok :D\n");
		}
		else{
			printf("test top stack plusieurs not ok :(\n");
		}
	}
	else{
		printf("test top stack plusieurs not ok :(\n");
	}
	//--------------------------------------
}
*/
//-----------------------------------------------------------
//-----------------------------------------------------------




//-----------------------------------------------------------
//-----------------------------------------------------------
// -------- TESTS QUEUE LIST ! ------------------------------
/*
bool egalesQueueList(struct List* l, struct Queue* q){

	if(l->size != q->liste->size){
		return false;
	}
	bool resp = true;
	bool valid;
	for(int i=l->size-1;i>=0;i--){
		resp = resp && (dequeue(q,&valid) == getItem(l,i,&valid));
	}
	return resp;
}

void testsQueueList(){

	bool valid;

	// struct Queue* emptyQueue();
    printf("0-------emptyQueue-------\n");
    struct Queue* s0;
    s0 = emptyQueue();
	if((s0->liste->size == 0) && (queueSize(s0)==0)){
		printf("test create vide ok :D\n");
	}
	else{
		printf("test create vide not ok :(\n");
	}
	//--------------------------------------

	//	bool isQueueEmpty(struct Queue* q);
	printf("1-------isQueueEmpty-------\n");
	struct Queue* s1 = emptyQueue();
	if(isQueueEmpty(s1)){
		printf("test empty queue vide ok :D\n");
	}
	else{
		printf("test empty queue vide not ok :(\n");
	}
	enqueue(s1,1,&valid);
	enqueue(s1,2,&valid);
	if(!isQueueEmpty(s1)){
		printf("test empty queue non vide ok :D\n");
	}
	else{
		printf("test empty queue non vide not ok :(\n");
	}
	//--------------------------------------

	// void enqueue(struct Queue* q,int item, bool* valid);
	printf("2-------enqueue-------\n");
	struct Queue* s2 = emptyQueue();
	enqueue(s2,1,&valid);
	if(valid==true) {
		if((s2->liste->head->value == 1) && (s2->liste->size == 1)) {
			printf("test enqueue queue vide ok :D\n");
		}
		else{
			printf("test enqueue queue vide not ok :(\n");
		}
    }
    else{
        printf("test enqueue queue vide not ok :(\n");
    }
	enqueue(s2,2,&valid);
	if(valid==true) {
		if((s2->liste->head->value == 2) && (s2->liste->head->next->value == 1) && (s2->liste->size == 2)){
			printf("test enqueue queue non vide ok :D\n");
		}
		else{
			printf("test enqueue queue non vide not ok :(\n");
		}
    }
    else{
        printf("test enqueue queue non vide not ok :(\n");
    }
	//--------------------------------------

	// 	int dequeue(struct Queue* q,bool* valid);
	printf("3-------dequeue-------\n");
	struct Queue* s3 = emptyQueue();
	int a3 = dequeue(s3,&valid);
	if(valid==false) {
        printf("test dequeue queue vide ok :D\n");
    }
    else{
        printf("test dequeue queue vide not ok :(\n");
    }
    enqueue(s3,1,&valid);
	a3 = dequeue(s3,&valid);
	if(valid==true) {
		if(isQueueEmpty(s3) && (s3->liste->size == 0) && (a3 == 1)){
			printf("test dequeue queue un element ok :D\n");
		}
		else{
			printf("test dequeue queue un element not ok :(\n");
		}
    }
    else{
        printf("test dequeue queue un element not ok :(\n");
    }
	enqueue(s3,1,&valid);
	enqueue(s3,2,&valid);
	enqueue(s3,3,&valid);
	enqueue(s3,4,&valid);
	enqueue(s3,5,&valid);
	enqueue(s3,6,&valid);
	a3 = dequeue(s3,&valid);
	struct List* l3 = createList();
	bool validL;
	addItem(l3,2,0,&validL);
	addItem(l3,3,0,&validL);
	addItem(l3,4,0,&validL);
	addItem(l3,5,0,&validL);
	addItem(l3,6,0,&validL);
	if(valid==true) {
		if((head(s3,&valid) == 2) && egalesQueueList(l3,s3) && (a3 == 1)){
			printf("test dequeue queue plusieurs ok :D\n");
		}
		else{
			printf("test dequeue queue plusieurs not ok :(\n");
		}
    }
    else{
        printf("test dequeue queue plusieurs not ok :(\n");
    }
	//--------------------------------------

    // 	void printQueue(struct Queue* q);
	printf("4-------printQueue-------\n");
	struct Queue* s4 = emptyQueue();
	printf("test printQueue queue vide\n Si votre sorti est: \n #elems: 0\n dans la prochaine ligne alors c'est bon :D\n");
    printQueue(s4);
	enqueue(s4,1,&valid);
	printf("test printQueue queue un element\n Si votre sorti est: \n rear --> 1 <-- front \n #elems: 1\n dans la prochaine ligne alors c'est bon :D\n");
	printQueue(s4);
	enqueue(s4,2,&valid);
	enqueue(s4,3,&valid);
	enqueue(s4,4,&valid);
	enqueue(s4,5,&valid);
    printf("test printQueue queue plusieurs\n Si votre sorti est:\n rear--> 5 4 3 2 1 <-- front \n#elems: 5\n dans la prochaine ligne alors c'est bon :D\n");
	printQueue(s4);
    //--------------------------------------

    // 	int queueSize(struct Queue* q);
	printf("5-------queueSize-------\n");
	struct Queue* s5 = emptyQueue();
	int n = queueSize(s5);
	if(n==0) {
        printf("test #items queue vide ok :D\n");
    }
    else{
        printf("test #items queue vide not ok :(\n");
    }
	enqueue(s5,1,&valid);
	enqueue(s5,2,&valid);
	enqueue(s5,3,&valid);
	enqueue(s5,4,&valid);
	enqueue(s5,5,&valid);
	n = queueSize(s5);
    if(n==5) {
        printf("test #items queue non vide ok :D\n");
    }
    else{
        printf("test #items queue non vide not ok :(\n");
    }
    //--------------------------------------

    //	int head(struct Queue* q, bool* valid);
	printf("6-------head-------\n");
	struct Queue* s6 = emptyQueue();
	int a6 = head(s6,&valid);
	if(valid==false) {
		printf("test head queue vide ok :D\n");
	}
	else{
		printf("test head queue vide not ok :(\n");
	}
	enqueue(s6,1,&valid);
	a6 = head(s6,&valid);
	if(valid==true) {
		if((a6==1) && (queueSize(s6)==1)){
			printf("test head queue un element ok :D\n");
		}
		else{
			printf("test head queue un element not ok :(\n");
		}
	}
	else{
		printf("test head queue un element not ok :(\n");
	}
	enqueue(s6,2,&valid);
	enqueue(s6,3,&valid);
	enqueue(s6,4,&valid);
	enqueue(s6,5,&valid);
	enqueue(s6,6,&valid);
	a6 = head(s6,&valid);
	if(valid==true) {
		if((a6==1) && (queueSize(s6)==6)){
			printf("test head queue plusieurs ok :D\n");
		}
		else{
			printf("test head queue plusieurs not ok :(\n");
		}
	}
	else{
		printf("test head queue plusieurs not ok :(\n");
	}
	//--------------------------------------
}
*/
//-----------------------------------------------------------
//-----------------------------------------------------------





//-----------------------------------------------------------
//-----------------------------------------------------------
//---------TESTS QUEUE ARRAY ! ------------------------------
/*
bool egalesQueueArray(struct List* l, struct Queue* q){

	if(l->size != q->size){
		return false;
	}
	bool resp = true;
	bool valid;
	for(int i=0;i<l->size;i++){
		resp = resp && (dequeue(q,&valid) == getItem(l,i,&valid));
	}
	return resp;
}

void testsQueueArray(){

	bool valid;

	// struct Queue* emptyQueue();
	printf("0-------emptyQueue-------\n");
	struct Queue* s0;
	s0 = emptyQueue();
	if((s0->size == 0) && (queueSize(s0)==0)){
		printf("test create vide ok :D\n");
	}
	else{
		printf("test create vide not ok :(\n");
	}
	//--------------------------------------

	//	bool isQueueEmpty(struct Queue* q);
	printf("1-------isQueueEmpty-------\n");
	struct Queue* s1 = emptyQueue();
	if(isQueueEmpty(s1)){
		printf("test empty queue vide ok :D\n");
	}
	else{
		printf("test empty queue vide not ok :(\n");
	}
	enqueue(s1,1,&valid);
	enqueue(s1,2,&valid);
	if(!isQueueEmpty(s1)){
		printf("test empty queue non vide ok :D\n");
	}
	else{
		printf("test empty queue non vide not ok :(\n");
	}
	//--------------------------------------

	// void enqueue(struct Queue* q,int item, bool* valid);
	printf("2-------enqueue-------\n");
	struct Queue* s2 = emptyQueue();
	enqueue(s2,1,&valid);
	if(valid==true) {
		if((s2->elems[s2->rear] == 1) && (s2->elems[s2->front] == 1) && (s2->size == 1)) {
			printf("test enqueue queue vide ok :D\n");
		}
		else{
			printf("test enqueue queue vide not ok :(\n");
		}
	}
	else{
		printf("test enqueue queue vide not ok :(\n");
	}
	enqueue(s2,2,&valid);
	if(valid==true) {
		if((s2->elems[s2->rear] == 2) && (s2->elems[s2->front] == 1) && (s2->size == 2)){
			printf("test enqueue queue non vide ok :D\n");
		}
		else{
			printf("test enqueue queue non vide not ok :(\n");
		}
	}
	else{
		printf("test enqueue queue non vide not ok :(\n");
	}
	for(int i=3;i<=MAX_SIZE+1;i++){
		enqueue(s2,i,&valid);
	}
	if(valid==false) {
		if((s2->elems[s2->rear] == MAX_SIZE) && (s2->elems[s2->front] == 1) && (s2->size == MAX_SIZE)){
			printf("test enqueue queue MAX_SIZE ok :D\n");
		}
		else{
			printf("test enqueue queue MAX_SIZE not ok :(\n");
		}
	}
	else{
		printf("test enqueue queue MAX_SIZE not ok :(\n");
	}
	struct Queue* s21 = emptyQueue();
	for(int i=1;i<=2*MAX_SIZE/3;i++){
		enqueue(s21,i,&valid);
	}
	for(int i=1;i<=MAX_SIZE/3;i++){
		dequeue(s21,&valid);
	}
	for(int i=1;i<=2*MAX_SIZE/3;i++){
		enqueue(s21,i,&valid);
	}
	if((s21->elems[s21->rear] == 2*MAX_SIZE/3) && (s21->elems[s21->front] == (MAX_SIZE/3+1)) && (queueSize(s21)==MAX_SIZE)){
		printf("test enqueue circulaire rear ok :D\n");
	}
	else{
		printf("test enqueue circulaire rear not ok :(\n");
	}
	//--------------------------------------

	// 	int dequeue(struct Queue* q,bool* valid);
	printf("3-------dequeue-------\n");
	struct Queue* s3 = emptyQueue();
	int a3 = dequeue(s3,&valid);
	if(valid==false) {
		printf("test dequeue queue vide ok :D\n");
	}
	else{
		printf("test dequeue queue vide not ok :(\n");
	}
	enqueue(s3,1,&valid);
	a3 = dequeue(s3,&valid);
	if(valid==true) {
		if(isQueueEmpty(s3) && (s3->size == 0) && (a3 == 1)){
			printf("test dequeue queue un element ok :D\n");
		}
		else{
			printf("test dequeue queue un element not ok :(\n");
		}
	}
	else{
		printf("test dequeue queue un element not ok :(\n");
	}
	enqueue(s3,1,&valid);
	enqueue(s3,2,&valid);
	enqueue(s3,3,&valid);
	enqueue(s3,4,&valid);
	enqueue(s3,5,&valid);
	enqueue(s3,6,&valid);
	a3 = dequeue(s3,&valid);
	struct List* l3 = createList();
	bool validL;
	addItem(l3,6,0,&validL);
	addItem(l3,5,0,&validL);
	addItem(l3,4,0,&validL);
	addItem(l3,3,0,&validL);
	addItem(l3,2,0,&validL);
	if(valid==true) {
		if((head(s3,&valid) == 2 && egalesQueueArray(l3,s3) && (a3 == 1))){
			printf("test dequeue queue plusieurs ok :D\n");
		}
		else{
			printf("test dequeue queue plusieurs not ok :(\n");
		}
	}
	else{
		printf("test dequeue queue plusieurs not ok :(\n");
	}
	struct Queue* s31 = emptyQueue();
	for(int i=1;i<=2*MAX_SIZE/3;i++){
		enqueue(s31,i,&valid);
	}
	for(int i=1;i<=MAX_SIZE/3;i++){
		dequeue(s31,&valid);
	}
	for(int i=1;i<=2*MAX_SIZE/3;i++){
		enqueue(s31,i,&valid);
	}
	for(int i=1;i<MAX_SIZE-1;i++){
		dequeue(s31,&valid);
	}
	if((s31->elems[s31->rear] == 2*MAX_SIZE/3) && (s31->elems[s31->front] == 2*MAX_SIZE/3-1	) && (queueSize(s31)==2)){
		printf("test dequeue circulaire front ok :D\n");
	}
	else{
		printf("test dequeue circulaire front not ok :(\n");
	}
	//--------------------------------------

	//	void printQueue(struct Queue* q);
	printf("4-------printQueue-------\n");
	struct Queue* s4 = emptyQueue();
	printf("test printQueue queue vide\n Si votre sorti est: \n #elems: 0\n dans la prochaine ligne alors c'est bon :D\n");
	printQueue(s4);
	enqueue(s4,1,&valid);
	printf("test printQueue queue un element\n Si votre sorti est: \n rear --> 1 <-- front \n #elems: 1\n dans la prochaine ligne alors c'est bon :D\n");
	printQueue(s4);
	enqueue(s4,2,&valid);
	enqueue(s4,3,&valid);
	enqueue(s4,4,&valid);
	enqueue(s4,5,&valid);
	printf("test printQueue queue plusieurs\n Si votre sorti est:\n rear--> 5 4 3 2 1 <-- front \n#elems: 5\n dans la prochaine ligne alors c'est bon :D\n");
	printQueue(s4);
	//--------------------------------------

	//	int queueSize(struct Queue* q);
	printf("5-------queueSize-------\n");
	struct Queue* s5 = emptyQueue();
	int n = queueSize(s5);
	if(n==0) {
		printf("test #items queue vide ok :D\n");
	}
	else{
		printf("test #items queue vide not ok :(\n");
	}
	enqueue(s5,1,&valid);
	enqueue(s5,2,&valid);
	enqueue(s5,3,&valid);
	enqueue(s5,4,&valid);
	enqueue(s5,5,&valid);
	n = queueSize(s5);
	if(n==5) {
		printf("test #items queue non vide ok :D\n");
	}
	else{
		printf("test #items queue non vide not ok :(\n");
	}
	//--------------------------------------

	//	int head(struct Queue* q, bool* valid);
	printf("6-------head-------\n");
	struct Queue* s6 = emptyQueue();
	int a6 = head(s6,&valid);
	if(valid==false) {
		printf("test head queue vide ok :D\n");
	}
	else{
		printf("test head queue vide not ok :(\n");
	}
	enqueue(s6,1,&valid);
	a6 = head(s6,&valid);
	if(valid==true) {
		if((a6==1) && (queueSize(s6)==1)){
			printf("test head queue un element ok :D\n");
		}
		else{
			printf("test head queue un element not ok :(\n");
		}
	}
	else{
		printf("test head queue un element not ok :(\n");
	}
	enqueue(s6,2,&valid);
	enqueue(s6,3,&valid);
	enqueue(s6,4,&valid);
	enqueue(s6,5,&valid);
	enqueue(s6,6,&valid);
	a6 = head(s6,&valid);
	if(valid==true) {
		if((a6==1) && (queueSize(s6)==6)){
			printf("test head queue plusieurs ok :D\n");
		}
		else{
			printf("test head queue plusieurs not ok :(\n");
		}
	}
	else{
		printf("test head queue plusieurs not ok :(\n");
	}
	//--------------------------------------
}
*/
//-----------------------------------------------------------
//-----------------------------------------------------------



    int main (int argc, char** argv) {
        //testsList();
        //testsStackList();
         //testsStackArray();
        //testsQueueList();
        //	testsQueueArray();

        return 0;
    }