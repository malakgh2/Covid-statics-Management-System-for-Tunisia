#include<stdio.h>
#include<malloc.h>
#include "ELTPRIM.h"
//#include"ELTSDD.h"
#include<stdlib.h>
#include<string.h>
#include<time.h>

ELEMENT elementCreer_date()
{
    DATE d=(DATE)malloc(sizeof(date));
    d->j=0;// On peut initialiser e à '\0' mais ce n'est pas important
	d->m=0;
	d->a=0;
	return d;

}


void elementLire_donnee(ELEMENT * e)
{
	do{
        printf("saisir le nombre de cas positifs \n");
        scanf("%d",&(*e)->cas_positif);
        if((*e)->cas_positif<0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->cas_positif<0);

	do{
        printf("saisir les guerisons \n");
        scanf("%d",&(*e)->guerison);
        if((*e)->cas_positif<0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->cas_positif<0);

    do{
        printf("saisir le nombre de  decees \n");
        scanf("%d",&(*e)->decees);
        if((*e)->decees<0)
            printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->decees<0);

	do{
        printf("saisir le nombre de vaccinees   \n");
        scanf("%d",&(*e)->nb_vaccinees);
        if((*e)->nb_vaccinees<0)
                printf("le nombre doit etre superieur ou egale a 0 \n");
    }while((*e)->nb_vaccinees<0);
}




int verifdate(int jour, int mois, int annee)
{
    int B= ((annee%4 == 0) && (annee%100 !=0) || (annee%400==0));
    int K1= ((mois==1 || mois==3 || mois==5 || mois==7 ||  mois==8 || mois==10 || mois==12) && (jour>=1 && jour<=31));
    int K2=((mois==4 || mois==6 || mois==9 || mois==11) && (jour>=1 && jour<=30));
    int K3= ((mois==2 && B) && (jour>=1 && jour<=29));
    int K4= (mois==2 && jour>=1 && jour<=28);

    if ((K1 || K2 || K3 || K4)&&(annee>=2021))
        return 0;
    else
        return 1;
}


void elementLire_date(DATE *d)
{
    int test=0;

    do{
        printf("Saisir le jour de votre date \n");
        scanf("%d",&(*d)->j);
        printf("Saisir le mois de votre date \n");
        scanf("%d",&(*d)->m);
        printf("Saisir l'annee de votre date \n");
        scanf("%d",&(*d)->a);
        if(verifdate((*d)->j,(*d)->m,(*d)->a)==1)
            printf("votre date est invalide !! veuillez ressayer \n");
    }while(verifdate((*d)->j,(*d)->m,(*d)->a)==1);

}



ELEMENT elementCreer()
{
	ELEMENT e=(ELEMENT)malloc(sizeof(covid)); // Allocation dynamique (réservation) d'un octet dans la mémoire pour un caractère (ELEMENT)
    e->cas_positif=0;
    e->guerison=0;
    e->decees=0;
    e->nb_vaccinees=0;
    e->date_ent=(DATE)malloc(sizeof(date));
    e->date_ent->j=0;// On peut initialiser e à '\0' mais ce n'est pas important
	e->date_ent->m=0;
	e->date_ent->a=0;
	return e;
}


void elementDetruire(ELEMENT e)
{
	free(e);
}

void elementLire(ELEMENT * e)
{
	printf("DOnner le jour de votre date \n");
	scanf("%d",&(*e)->date_ent->j);
	printf("Donner le mois de votre date \n");
	scanf("%d",&(*e)->date_ent->m);
	printf("Donner l'annee de votre date \n");
	scanf("%d",&(*e)->date_ent->a);
	printf("Donner le nombre de cas positfifs \n");
	scanf("%d",&(*e)->cas_positif);
	printf("Donner le nombre de guerisons \n");
	scanf("%d",&(*e)->guerison);
	printf("Donner le nombre de  decees \n");
	scanf("%d",&(*e)->decees);
	printf("saisir le nombre de vaccinees   \n");
    scanf("%d",&(*e)->nb_vaccinees);
}

void elementAfficher(ELEMENT e)
{
	printf(" date: %d/%d/%d \t cas positfifs: %d \t guerisons: %d \t decees: %d \t le nombres de vaccinees: %d   \n",e->date_ent->j,e->date_ent->m,e->date_ent->a,e->cas_positif,e->guerison,e->decees,e->nb_vaccinees);

}

void elementAffecter(ELEMENT * e1, ELEMENT e2) // On va affecter l'adresse e2 dans e1
{
	*e1 = e2; // Ici, on affecte les adresses des deux élements en question
}

void elementCopier(ELEMENT * e1, ELEMENT e2)  // Ici, on affecte les contenus, celui de e2 dans e1
{
	memcpy(*e1,e2,sizeof(covid));
}
int elementComparer_date(DATE d1,DATE d2)
{
    return((d1->j==d2->j)&&(d1->m==d2->m)&&(d1->a==d2->a));
}

int elementComparer(ELEMENT e1,ELEMENT e2)
{
    return ((e1->nb_vaccinees==e2->nb_vaccinees) && (e1->decees==e2->decees) && (e1->cas_positif==e2->cas_positif) &&(e1->guerison==e2->guerison));
}



int elementComparer_nb_vaccinees(ELEMENT e1, ELEMENT e2)
{
    if(e1->nb_vaccinees==e2->nb_vaccinees)
        return 1;
    else
        return 0;
}

int elementComparer_decees(ELEMENT e1, ELEMENT e2)
{
    if(e1->decees==e2->decees)
        return 1;
    else
        return 0;
}

int elementComparer_guerison(ELEMENT e1, ELEMENT e2)
{
    if(e1->guerison==e2->guerison)
        return 1;
    else
        return 0;
}

int elementComparer_cas_positif(ELEMENT e1, ELEMENT e2)
{
    if(e1->cas_positif==e2->cas_positif)
        return 1;
    else
        return 0;
}
