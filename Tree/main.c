
#include "tree.h"
//int main(){
//    printf("salut\n");
//    struct NodeTree* N = createEmptyTree();
//}

int main(){
    //-----------BATTERIE DE TESTS ABR-----------//
    printf("-----------BATTERIE DE TESTS-----------");
    printf("\n");
    printf("\n");

    //Création arbre vide :
    printf("1.Test création d'un arbre vide : ");
    struct NodeTree* tree = createEmptyTree();
    if(isEmptyTree(tree)) {
        printf("ça fonctionne! :)\n");
    } else {
        printf("!!Erreur!! :(\n");
    }
    printf("\n");

    //Ajout feuilles :
    printf("2.Test ajout d'une racine : ");
    struct NodeTree* emptyLeaf = createEmptyTree();
    tree = bin(emptyLeaf, 1, emptyLeaf);
    if(isEmptyTree(tree)) {
        printf("!!Erreur!! :(\n");
    } else {
        printf("ça fonctionne! :)\n");
    }
    printf("\n");

    //Ajout noeuds :
    printf("3.Test ajout de feuilles non vides : ");
    struct NodeTree* left1 = bin(emptyLeaf,2,emptyLeaf);
    struct NodeTree* right1 = bin(emptyLeaf,3,emptyLeaf);
    tree->left = left1;
    tree->right = right1;
    if(isEmptyTree(left(tree)) && isEmptyTree(right(tree))) {
        printf("!!Erreur!! :(\n");
    } else {
        printf("ça fonctionne! :)\n");
    }
    printf("\n");

    //Supression de l'arbre :
    //deleteTree(tree);


    struct NodeTree* left2 = bin(emptyLeaf,4,emptyLeaf);
    struct NodeTree* right2 = bin(emptyLeaf,5,emptyLeaf);
    left1->left = left2;
    left1->right = right2;

    //Affichage preorder :
    printf("4.Preorder est censé afficher : 1 - 2 - 4 - 5 - 3\n");
    printf("     Affiche : ");
    preorder(tree);
    printf("\n\n");

    //Affichage postorder :
    printf("5.Preorder est censé afficher : 4 - 5 - 2 - 3 - 1\n");
    printf("     Affiche : ");
    postorder(tree);
    printf("\n\n");

    //Affichage inorder :
    printf("6.Inorder est censé afficher : 4 - 2 - 5 - 1 - 3\n");
    printf("     Affiche : ");
    inorder(tree);
    printf("\n\n");

    //Affichage BFS (largeur) :
    printf("7.Largeur est censé afficher : 1 - 2 - 3 - 4 - 5\n");
    printf("     Affiche : ");
    BFS(tree);
    printf("\n\n");

    //Affichage du nombre total de noeuds
    int nbrNodes = numberNodes(tree);
    printf("8.Le nombre que NumberNodes doit afficher : 5\n");
    printf("     Affiche : %d", nbrNodes);
    if(nbrNodes == 5) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de la hauteur
    struct NodeTree* left3 = bin(emptyLeaf,6,emptyLeaf);

    left2->right = left3;
    int ht = height(tree);
    printf("9.Le nombre que height doit afficher : 4\n");
    printf("     Affiche : %d", ht);
    if(ht == 4) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage du nombre de feuilles
    int nbrLeaves = numberLeaves(tree);
    printf("10.Le nombre que numberLeaves doit afficher : 3\n");
    printf("     Affiche : %d", nbrLeaves);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage du nombre de noeuds internes
    int nbrIntNodes=numberInternalNodes(tree);
    printf("11.Le nombre que numberInternalNodes doit afficher : 3\n");
    printf("     Affiche : %d", nbrIntNodes);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de répétitions dans l'arbre
    struct NodeTree* left4 = bin(emptyLeaf,6,emptyLeaf);
    right1->left = left4;
    left1->value = 6;
    int nbrRepet = numberRepetitions(tree, 6);
    printf("12.Le numbre que numberRepetitions de 6 doit afficher est : 3\n");
    printf("     Affiche : %d", nbrRepet);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Verification de l'appartenance à un arbre (sans répétition)
    left3->value=9;
    printf("13.Le résultat que belongs doit afficher pour 9 est : true.\n");
    if(belongs(tree, 9)) {
        printf("     Affiche : true, c'est bon ! :)");
    } else {
        printf("     Affiche : false, c'est faux...:(");
    }
    printf("\n\n");

    printf("14.Le résultat que belongs doit afficher pour 48 est : false.\n");
    if(belongs(tree, 48)) {
        printf("     Affiche : true, c'est faux... :(");
    } else {
        printf("     Affiche : false, c'est bon! :)");
    }
    printf("\n\n");

    //Chemin jusqu'a 9
    printf("15. Voyons maintenant le chemin jusqu'a 9 !\n");
    printf("Le programme est censé afficher : 1-6-4-9\n");
    printf("     Affiche : ");
    pathTo(tree, 9);
    printf("\n\n");

    //Somme de la valeur de chaques noeuds
    int sum = sumValues(tree);
    printf("16.La somme des valeurs de l'arbre est censée être : 34\n");
    printf("     Affiche : %d", sum);
    if(sum == 34) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de l'index du dernier niveau
    int indexLastLvl = lastFullLevel(tree);
    printf("17.Le dernier niveau plein est censé être : 2\n");
    printf("     Affiche : %d", indexLastLvl);
    if(indexLastLvl == 2) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage des descendants de 12
    left1->value=12;
    printf("18.Descendants est censé afficher : 12 - 4 - 9 - 5\n");
    printf("     Affiche : ");
    descendants(tree, 12);
    printf("\n\n");

    //Création d'un arbre en mirroir du premier
    struct NodeTree* tree2 = mirror(tree);
    printf("19.Un nouvel arbre en mirroir du premier a été créé\n");
    printf("   >Postorder du nouvel arbre est censé afficher : 6 - 3 - 5 - 9 - 4 - 12 - 1\n");
    printf("     Affiche : ");
    postorder(tree2);
    printf("\n");
    printf("   >Inorder du nouvel arbre est censé afficher : 3 - 6 - 1 - 5 - 12 - 9 - 4\n");
    printf("     Affiche : ");
    inorder(tree2);
    printf("\n");
    printf("   >Ces conditions sont suffisantes pour savoir que l'arbre a bien été retourné!");
    printf("\n\n");

    //Vérification que deux arbres sont égaux
    struct NodeTree* eTree = createEmptyTree();
    struct NodeTree* eTree2 = createEmptyTree();
    printf("20.Test de l'égalité entre deux arbres\n");
    printf("    >Les deux arbres sont vides, le résultat doit être : true\n");
    if(equals(eTree, eTree2)){
        printf("        Affiche: true, c'est bon :)\n");
    } else {
        printf("        Affiche: false, c'est faux :(\n");
    }
    printf("    >Le second arbre est vide, le résultat doit être : false\n");
    if(!equals(tree, eTree)){
        printf("        Affiche: false, c'est bon :)\n");
    } else {
        printf("        Affiche: true, c'est faux :(\n");
    }
    printf("    >Les deux arbres ne sont pas vides, le résultat doit être : false\n");
    eTree2 = bin(eTree,1,eTree);
    if(!equals(tree, eTree2)){
        printf("        Affiche: false, c'est bon :)\n");
    } else {
        printf("        Affiche: true, c'est faux :(\n");
    }
    printf("    >Les deux arbres ne sont pas vides, le résultat doit être : true\n");
    if(equals(tree, tree)){
        printf("        Affiche: true, c'est bon :)\n");
    } else {
        printf("        Affiche: false, c'est faux :(\n");
    }
    //--------------------------------------------------------------
    //                     BATTERIE TEST A.B.R.
    //--------------------------------------------------------------

    struct NodeTree* test1 = bin(createEmptyTree(),4,createEmptyTree());
    struct NodeTree* test3 = bin(createEmptyTree(),6,createEmptyTree());
    struct NodeTree* test2 = bin(test1,5,test3);
    struct NodeTree* test6 = bin(createEmptyTree(),12,createEmptyTree());
    struct NodeTree* test7 = bin(createEmptyTree(),16,createEmptyTree());
    struct NodeTree* test5 = bin(test6,14,test7);
    struct NodeTree* test4 = bin(test2,10,test5);

    printf("21.Test de BST\n");
    printf("    >L'arbre est bien un A.B.R. donc la fonction doit retourné : true\n");
    if (isBST(test4)==true){
        printf("        Affiche: true, c'est bon :)\n");
    }
    else{
        printf("        Affiche: false, c'est faux :(\n");
    }

    printf("22.Test de findMin\n");
    printf("    >Le minimum doit etre : 4\n");
    printf("     Affiche : ");
    printf("%d", root(findMin(test4)));
    printf("\n");

    printf("23.Test de findMax\n");
    printf("    >Le maximum doit etre : 16\n");
    printf("     Affiche : ");
    printf("%d", root(findMax(test4)));
    printf("\n");

    printf("24.Test de find\n");
    printf("    >Le chiffre doit etre : 5\n");
    printf("     Affiche : ");
    printf("%d", root(find(test4,5)));
    printf("\n");
}

/*
int main() {
    //-----------BATTERIE DE TESTS-----------//
    printf("-----------BATTERIE DE TESTS TREE AB----------");
    printf("\n");
    printf("\n");

    //Création arbre vide :
    printf("1.Test création d'un arbre vide : ");
    struct NodeTree* tree = createEmptyTree();
    if(isEmptyTree(tree)) {
        printf("ça fonctionne! :)\n");
    } else {
        printf("!!Erreur!! :(\n");
    }
    printf("\n");

    //Ajout feuilles :
    printf("2.Test ajout d'une racine : ");
    struct NodeTree* emptyLeaf = createEmptyTree();
    tree = bin(emptyLeaf, 1, emptyLeaf);
    if(isEmptyTree(tree)) {
        printf("!!Erreur!! :(\n");
    } else {
        printf("ça fonctionne! :)\n");
    }
    printf("\n");

    //Ajout noeuds :
    printf("3.Test ajout de feuilles non vides : ");
    struct NodeTree* left1 = bin(emptyLeaf,2,emptyLeaf);
    struct NodeTree* right1 = bin(emptyLeaf,3,emptyLeaf);
    tree->left = left1;
    tree->right = right1;
    if(isEmptyTree(left(tree)) && isEmptyTree(right(tree))) {
        printf("!!Erreur!! :(\n");
    } else {
        printf("ça fonctionne! :)\n");
    }
    printf("\n");

    //Supression de l'arbre :
    //deleteTree(tree);


    struct NodeTree* left2 = bin(emptyLeaf,4,emptyLeaf);
    struct NodeTree* right2 = bin(emptyLeaf,5,emptyLeaf);
    left1->left = left2;
    left1->right = right2;

    //Affichage preorder :
    printf("4.Preorder est censé afficher : 1 - 2 - 4 - 5 - 3\n");
    printf("     Affiche : ");
    preorder(tree);
    printf("\n\n");

    //Affichage postorder :
    printf("5.Preorder est censé afficher : 4 - 5 - 2 - 3 - 1\n");
    printf("     Affiche : ");
    postorder(tree);
    printf("\n\n");

    //Affichage inorder :
    printf("6.Inorder est censé afficher : 4 - 2 - 5 - 1 - 3\n");
    printf("     Affiche : ");
    inorder(tree);
    printf("\n\n");

    //Affichage BFS (largeur) :
    printf("7.Largeur est censé afficher : 1 - 2 - 3 - 4 - 5\n");
    printf("     Affiche : ");
    BFS(tree);
    printf("\n\n");

    //Affichage du nombre total de noeuds
    int nbrNodes = numberNodes(tree);
    printf("8.Le nombre que NumberNodes doit afficher : 5\n");
    printf("     Affiche : %d", nbrNodes);
    if(nbrNodes == 5) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de la hauteur
    struct NodeTree* left3 = bin(emptyLeaf,6,emptyLeaf);

    left2->right = left3;
    int ht = height(tree);
    printf("9.Le nombre que height doit afficher : 4\n");
    printf("     Affiche : %d", ht);
    if(ht == 4) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage du nombre de feuilles
    int nbrLeaves = numberLeaves(tree);
    printf("10.Le nombre que numberLeaves doit afficher : 3\n");
    printf("     Affiche : %d", nbrLeaves);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage du nombre de noeuds internes
    int nbrIntNodes=numberInternalNodes(tree);
    printf("11.Le nombre que numberInternalNodes doit afficher : 3\n");
    printf("     Affiche : %d", nbrIntNodes);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de répétitions dans l'arbre
    struct NodeTree* left4 = bin(emptyLeaf,6,emptyLeaf);
    right1->left = left4;
    left1->value = 6;
    int nbrRepet = numberRepetitions(tree, 6);
    printf("12.Le numbre que numberRepetitions de 6 doit afficher est : 3\n");
    printf("     Affiche : %d", nbrRepet);
    if(nbrLeaves == 3) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Verification de l'appartenance à un arbre (sans répétition)
    left3->value=9;
    printf("13.Le résultat que belongs doit afficher pour 9 est : true.\n");
    if(belongs(tree, 9)) {
        printf("     Affiche : true, c'est bon ! :)");
    } else {
        printf("     Affiche : false, c'est faux...:(");
    }
    printf("\n\n");

    printf("14.Le résultat que belongs doit afficher pour 48 est : false.\n");
    if(belongs(tree, 48)) {
        printf("     Affiche : true, c'est faux... :(");
    } else {
        printf("     Affiche : false, c'est bon! :)");
    }
    printf("\n\n");

    //Chemin jusqu'a 9
    printf("15. Voyons maintenant le chemin jusqu'a 9 !\n");
    printf("Le programme est censé afficher : 1-6-4-9\n");
    printf("     Affiche : ");
    pathTo(tree, 9);
    printf("\n\n");

    //Somme de la valeur de chaques noeuds
    int sum = sumValues(tree);
    printf("16.La somme des valeurs de l'arbre est censée être : 34\n");
    printf("     Affiche : %d", sum);
    if(sum == 34) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage de l'index du dernier niveau
    int indexLastLvl = lastFullLevel(tree);
    printf("17.Le dernier niveau plein est censé être : 2\n");
    printf("     Affiche : %d", indexLastLvl);
    if(indexLastLvl == 2) {
        printf(", c'est le bon résultat! :)");
    } else {
        printf(", ce n'est pas le bon résultat! :(");
    }
    printf("\n\n");

    //Affichage des descendants de 12
    left1->value=12;
    printf("18.Descendants est censé afficher : 12 - 4 - 9 - 5\n");
    printf("     Affiche : ");
    descendants(tree, 12);
    printf("\n\n");

    //Création d'un arbre en mirroir du premier
    struct NodeTree* tree2 = mirror(tree);
    printf("19.Un nouvel arbre en mirroir du premier a été créé\n");
    printf("   >Postorder du nouvel arbre est censé afficher : 6 - 3 - 5 - 9 - 4 - 12 - 1\n");
    printf("     Affiche : ");
    postorder(tree2);
    printf("\n");
    printf("   >Inorder du nouvel arbre est censé afficher : 3 - 6 - 1 - 5 - 12 - 9 - 4\n");
    printf("     Affiche : ");
    inorder(tree2);
    printf("\n");
    printf("   >Ces conditions sont suffisantes pour savoir que l'arbre a bien été retourné!");
    printf("\n\n");

    //Vérification que deux arbres sont égaux
    struct NodeTree* eTree = createEmptyTree();
    struct NodeTree* eTree2 = createEmptyTree();
    printf("20.Test de l'égalité entre deux arbres\n");
    printf("    >Les deux arbres sont vides, le résultat doit être : true\n");
    if(equals(eTree, eTree2)){
        printf("        Affiche: true, c'est bon :)\n");
    } else {
        printf("        Affiche: false, c'est faux :(\n");
    }
    printf("    >Le second arbre est vide, le résultat doit être : false\n");
    if(!equals(tree, eTree)){
        printf("        Affiche: false, c'est bon :)\n");
    } else {
        printf("        Affiche: true, c'est faux :(\n");
    }
    printf("    >Les deux arbres ne sont pas vides, le résultat doit être : false\n");
    eTree2 = bin(eTree,1,eTree);
    if(!equals(tree, eTree2)){
        printf("        Affiche: false, c'est bon :)\n");
    } else {
        printf("        Affiche: true, c'est faux :(\n");
    }
    printf("    >Les deux arbres ne sont pas vides, le résultat doit être : true\n");
    if(equals(tree, tree)){
        printf("        Affiche: true, c'est bon :)\n");
    } else {
        printf("        Affiche: false, c'est faux :(\n");
    }
}
*/