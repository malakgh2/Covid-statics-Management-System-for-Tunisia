#include<stdio.h>
#include<malloc.h>
#include "LSTPRIM.h"


int estVide(LISTE L)
{
    return (L->lg == 0);
}


int listeTaille(LISTE L)
{
    return (L->lg);
}


ELEMENT recuperer(LISTE L, int pos)
{
/* s'il ya une erreur on affiche un message et on
retourne un element vide */
    ELEMENT elt= elementCreer();
    int i;
    NOEUD p;
    if (estVide(L))
        printf ("\nListe vide");
    else {
        if ((pos < 1) || (pos > L->lg))
        printf ("\nPosition invalide");
        else {
            p= L->tete;
            for (i=1; i<pos; i++)
            p = p->suivant;
            elementAffecter(&elt,p->info);
            }
    }
    return(elt);
}

LISTE listeCreer(void)
{
    LISTE L;
    L=(LISTE)malloc(sizeof(laStruct));
    if (! L)
        printf("\nProblème de mémoire");
    else {
        L->lg = 0;
        L->tete = NULL; /* initialiser la tête */
    }
    return(L);
}


void listeDetruire(LISTE L)
{
    int i;
    NOEUD p, q;
    q= L->tete;
    for(i = 1;i <= L->lg; i++)
    {
        p=q;
        q=q->suivant;
        noeudDetruire(p);
    }
    free(L);
}


void listeAfficher_gouv(LISTE L)
{
    int i=1;
    NOEUD p;
    p= L->tete;
    for(i = 1;i <= L->lg; i++) {
        if(i==1)
            printf(" ARIANNA :\n");
        if(i==2)
            printf("BEJA :\n");
        if(i==3)
            printf("BEN AROUS :\n");
        if(i==4)
            printf("BIZERTE :\n");
        if(i==5)
            printf("GABES :\n");
        if(i==6)
            printf("GAFSA :\n");
        if(i==7)
            printf("JENDOUBA :\n");
        if(i==8)
            printf("KAIROUAN :\n");
        if(i==9)
            printf("KASSERINE :\n");
        if(i==10)
            printf("KEBILI :\n");
        if(i==11)
            printf("MANOUBA :\n");
        if(i==12)
            printf("KEF :\n");
        if(i==13)
            printf("MAHDIA :\n");
        if(i==14)
            printf("MEDENINE :\n");
        if(i==15)
            printf("MONASTIR :\n");
        if(i==16)
            printf("NABEUL :\n");
        if(i==17)
            printf("SFAX :\n");
        if(i==18)
            printf(" SIDI BOUZID :\n");
        if(i==19)
            printf("SILIANA :\n");
        if(i==20)
            printf("SOUSSE :\n");
        if(i==21)
            printf("TATAOUINE :\n");
        if(i==22)
            printf("TOZEUR :\n");
        if(i==23)
            printf("TUNIS :\n");
        if(i==24)
            printf("ZAGHOUAN :\n");
        elementAfficher(p->info);
        printf("\n\n");
        p= p->suivant;
    }
}

void listeAfficher(LISTE L)
{
    int i=1;
    NOEUD p;
    p= L->tete;
    for(i = 1;i <= L->lg; i++) {
        elementAfficher(p->info);
        printf("\n");
        p= p->suivant;
    }
}


LISTE listeCopier(LISTE L)
{
    LISTE LR = listeCreer();
    int i;
    ELEMENT elt;
    for(i = 1;i <= L->lg; i++) {
        elt=elementCreer();
        elementCopier(&elt, recuperer(L,i));
        inserer(LR,elt, i);
    }
    return LR;
}

int listeComparer (LISTE L1,LISTE L2)
{
    int test= 1;
    int i=1;
    if (listeTaille(L1) != listeTaille(L2))
        test= 0;
    while ((i<=listeTaille(L1)) && (test)) {
        if (elementComparer(recuperer(L1,i),recuperer(L2,i))!=0)
            test=0;
        i++;
    }
    return test;
}



int estSaturee(LISTE L)
{
    NOEUD temp;
    int saturee = 1; /* on suppose mémoire saturée */
    temp = (NOEUD) malloc ( sizeof ( structNoeud ) );
    if(temp != NULL) {
        saturee = 0; /* mémoire non saturée */
        free(temp);
    }
    return saturee;
}



NOEUD noeudCreer(ELEMENT e)
{
    NOEUD n;
    n =(NOEUD)malloc(sizeof(structNoeud));
    if(!n)
        printf ("\nPlus d'espace");
    else
    {
        elementAffecter(&n->info, e);
        n->suivant = NULL;
        n->precedent = NULL;
    }
    return n;
}


void noeudDetruire(NOEUD n)
{
    elementDetruire(n->info);
    free(n);
}





int inserer (LISTE L, ELEMENT e, int pos)
{
    int succee=1;
    int i;
    NOEUD n, p, q; /* c’est des pointeurs sur des neouds c’est équivalent à: structNoeud * n */
    if (estSaturee(L)){
        printf ("\nListe saturée");
        succee=0;
    }
    else{
        if ((pos < 1) || (pos > L->lg + 1)){
            printf ("\nPosition invalide");
            succee=0;
            }
        else{
            n=noeudCreer (e);
            if (L->lg == 0) /* la liste est vide */{
                L->tete = n;
                L->queuee = n;
            }
            else{
                if (pos == 1) /*insertion en tête de liste*/
                {
                    L->tete->precedent = n;
                    n->suivant=L->tete;
                    L->tete = n;
                }
                else{
                    if (pos == (L->lg +1)) /* ajout à la fin */{
                        L->queuee->suivant = n;
                        n->precedent = L->queuee;
                        L->queuee = n;
                    }
                    else{
                        q= L->tete;
                        for (i=1; i<pos; i++)
                        {
                            p = q;
                            q = q->suivant;
                        }
                        /* q désigne l’élément de rang pos et p son prédécesseur*/
                        p->suivant=n;
                        n->precedent =p;
                        n->suivant=q;
                        q->precedent =n;
                    }
                }
            }
            (L->lg)++;
        }
    }
    return succee;
}

int supprimer (LISTE L, int pos )
{
    int i;
    int succee=1;
    NOEUD p, q;
    if (estVide(L)){
        printf ("\nListe vide");
        succee=0;
    }
    else{
        if ((pos < 1) || (pos > L->lg)){
            printf ("\nPosition invalide");
            succee=0;
        }
        else{
            if (L->lg ==1) /* un seul element donc pos == 1*/{
                q=L->tete;
                L->tete = NULL;
                L->queuee = NULL;
            }
            else{
                if (pos == 1) /*suppression en tête de liste*/{
                    q=L->tete;
                    L->tete=L->tete->suivant;
                    L->tete->precedent = NULL;
                }
                else{
                    if (pos == L->lg){
                        q=L->queuee;
                        L->queuee = L->queuee->precedent;
                        L->queuee->suivant = NULL;
                    }
                    else{
                        q= L->tete;
                        for (i=1; i<pos; i++)
                        {
                            p = q;
                            q = q->suivant;
                        }
                        q->suivant->precedent = p;
                        p->suivant=q->suivant;
                    }
                }
            }
            noeudDetruire(q);
            (L->lg)--;
        }
    }
    return succee;
}
