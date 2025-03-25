#include <stdio.h>
#include <sdlib.h>
typedef struct Noeud {
    int val;
    struct Noeud *suivant;
} Noeud;
Noeud *creer (int valeur){
    Noeud *nv=(Noeud*)malloc (sizeof(Noeud));
    nv -> val = valeur;
    nv -> suivant = NULL ;
    return nv ;
}
void Afficher(Noeud * debut ){
    Noeud * i = debut;
    while (i!=NULL){
        printf( " la valeur est: %d\n",i-> valeur);
        i=i->suivant;
    }
}
Noeud *ajoutD(Noeud*debut, int valeur){
    Noeud *nv=(Noeud *)malloc(sizeof(Noeud));
    nv->val=valeur;
    nv->suivant =NULL;
    if(debut == NULL)
        debut=nv;
        nv->suivant= debut;
        debut=nv;
        return debut;
}
Noeud *ajoutF(Noeud *debut , int valeur){
    Noeud *nv=(Noeud *)malloc(sizeof(Noeud));
    nv-> val = vakeur;
    nv ->suivant = NULL;
    if (debut == NULL){
        debut=nv;
    }
    Noeud* i=debut;
    while (i->suivant!=NULL)
    {
        i=i->suivant;
    }
    i->suivant=nv;
    return debut;
}
void recherche (Noeud *debut,int valeur){
    int trouve;
    Noeud *i=debut;
    while(i!= NULL){
        if(i->val==valeur){
            trouve=1;
            break;
        }
        else 
        trouve = 0;
        i=i->suivant;
    }
    if(trouve==1)
    printf("la valeur existe \n");
    else
    printf("la valeur n'existe pas ");
}
int taille (Noeud * debut){
    int taille =0;
    Noeud *i=debut;
    while(i!= NULL){
        taille++;
        i=i->suivant;
    }
    return taille ;
}
void * Insertion (Noeud * debut , int pos , int val ){
    Noeud* nv = (Noeud*)malloc (sizeof (Noeud));
    nv-> valeur = val;
    nv -> suivant= NULL ;
    int size = taille(debut);
    if (pos<1 || pos> size+1){
        printf("La position est incorrecte \n");
    }
    else if (pos ==1) {
       nv->suivant= debut;
       debut= nv;
    }
    else{
        i=debut ;
        for(int i=1;i<pos-1 ; i++){
            i=i -> suivant ;
        }
        nv ->suivant = i -> suivant ;
    }
    return debut ;
}
Noeud supressionD(Noeud * debut ){
    Noeud * tmp = debut ;
    if (debut== NULL ){
        printf(" la liste est vide ");
    }
    else {
        debut = debut ->suivant;
        free (tmp);
    }
    return debut ;
}
Noeud suppressionF (Noeud * debut ){
    if ( debut == NULL )
    printf("la liste est vide ");
    Noeud * i = debut ;
    if ( i->suivant= NULL ){
        free ( i);
        printf( " l'element est supprimer ");
    }
    while (i->suivant->suivant!=NULL){
        i=i->suivant;
    }
    free(i->suivant);
    i->suivant= NULL ;
    return debut ;
}
Noeud supressionPOS (Noeud * debut , int pos ){
    Noeud * i= debut;
    Noeud * tmp = debut ;
    int i ;
    if ( debut == NULL ){ 
        printf( "la liste est vide "):
        return NULL ;
    }
    int size= taille( debut );
    if ( pos<1 || pos> size){
        printf("la position est invalide ");
        return debut ;
    }
    if (pos==1){
        i=i->suivant;
        free (i);
        return debut ;
    }
    for (i=1;i,pos-1;i++){
        i=i->suivant;
    }
    tmp = i -> suivant;
    i->suivant= tmp->suivant;
    free( tmp);
    return debut ;
}
Noeud ModifierD(Noeud * debut ,int valeur){
    if(debut== NULL )
    return NULL ;
    debut-> val = valeur ;
    return debut ;

}
Noeud * modifierF(Noeud* debut , int valeur ){
    if (debut == NULL){
        printf("la liste est vide ");
        return NULL ;
    }
    Noeud * i=debut;
    while(i->suivant != NULL)
    i=i -> suivant;
    i-> val = valeur ;
    return debut ;
}
Noeud * modifierPOS (Noeud * debut , int pos , int valeur ){
    int i ;
    if ( debut ==NULL ){
        printf("la liste est vide ");
        return NULL ;
    }
    int size = taille ( debut );
    if ( pos <1 || pos > size ){ 
        printf(" la position est invalide ");
        return debut ;
    }
    Noeud * i = debut ;
    for ( i=1;i<pos ;i++){
        i=i -> suivant;
    }
    i ->val = valeur ;
    return debut ;
}
int main ()
{
Noeud *debut = NULL; 
Noeud *P = cree(10); 
Noeud *D = cree(20); 
Noeud *T = cree(30); 
printf("adreese du noeud debut : %p\n", debut);
printf("adreese du noeud P : %p\n", P);
printf("adreese du noeud D : %p\n", D);
printf("adreese du noeud T : %p\n", T);
debut = P; 
P->suivant = D; 
D->suivant = T; 
T->suivant = NULL; 
printf("----------------------\n");
printf("adreese du noeud %p\n", debut);
printf("adreese du noeud P suivant %p\n", P->suivant);
printf("adreese du noeud D suivant %p\n", D->suivant);
printf("adreese du noeud T suivant %p\n", T->suivant);
printf("---------------Affichage----------------------\n");
affiche(debut); 
printf("---------------Ajout au debut----------------------\n");
debut = ajouterD(debut, 100); 
affiche(debut);
printf("---------------Affichage ajout à la Fin----------------------\n");
debut = ajouterF(debut, 200); 
affiche(debut); 
printf("---------------Recherche----------------------\n");
rechercher(debut, 20); 
printf("---------------Taille de la liste----------------------\n");
printf("la taille est %d\n", taille(debut));
printf("---------------Insertion à une position----------------------\n");
debut = insertion(debut, 3, 555); 
affiche(debut); 
printf("---------------Suppression au debut----------------------\n");
debut = suppressionD(debut);
affiche(debut); 
printf("---------------Suppression à la fin----------------------\n");
debut = suppressionF(debut); 
affiche(debut); 
printf("---------------Suppression à une position----------------------\n");
debut = suppressionPOS(debut, 4); 
affiche(debut); 
printf("---------------Modifier au debut----------------------\n");
debut = modifierD(debut, 2024); 
affiche(debut); 
printf("---------------Modifier à la fin----------------------\n");
debut = modifierF(debut, 2025); 
affiche(debut); 
printf("---------------Modifier à une position----------------------\n");
debut = modifierPOS(debut, 1, 2000); 
position donnée
affiche(debut); 
return 0; 
}