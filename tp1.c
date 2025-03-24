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
    if (debut = NULL)
}