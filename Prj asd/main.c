#include <stdio.h>
#include <stdlib.h>
#include"LSTPRIM.h"
#include"ELTPRIM.h"
#include<string.h>

void permutation(ELEMENT e1,ELEMENT e2)
{
    ELEMENT aux=elementCreer();
    elementCopier(&aux,e1);
    elementCopier(&e1,e2);
    elementCopier(&e2,aux);
}

void tri_guerison(LISTE L)
{
int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->guerison<e2->guerison)
        {
            permutation(e1,e2);
        }
   }
}

}

void Tri_positif(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->cas_positif<e2->cas_positif)
        {
            permutation(e1,e2);
        }
   }
}

}
void tri_dec(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->decees<e2->decees)
        {
            permutation(e1,e2);
        }
   }
}

}
void tri_vacc(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->nb_vaccinees<e2->nb_vaccinees)
        {
            permutation(e1,e2);
        }
   }
}

}
// TRi Croissant :
void tri_guer2(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->guerison>e2->guerison)
        {
            permutation(e1,e2);
        }
   }
}

}

void tri_positif2(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->cas_positif>e2->cas_positif)
        {
            permutation(e1,e2);
        }
   }
}

}
void TriDec2(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->decees>e2->decees)
        {
            permutation(e1,e2);
        }
   }
}

}
void TriVacc2(LISTE L)
{
    int i,j;
ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
for(i=1;i<=listeTaille(L);i++)
{
    e1=recuperer(L,i);
    for(j=i+1;j<=listeTaille(L);j++)
    {
        e2=recuperer(L,j);
        if(e1->nb_vaccinees>e2->nb_vaccinees)
        {
            permutation(e1,e2);
        }
   }
}
}

void Tri_cas_positif_dec(ELEMENT e1,ELEMENT e2)
{
    if(e1->cas_positif < e2->cas_positif)
        {
            permutation(e1,e2);
        }
}
void Tri_cas_positif_croi(ELEMENT e1,ELEMENT e2)
{
    if(e1->cas_positif > e2->cas_positif)
        {
            permutation(e1,e2);
        }
}

void Tri_NB_Vaccinee_dec(ELEMENT e1,ELEMENT e2)
{
    if(e1->nb_vaccinees<e2->nb_vaccinees)
        {
            permutation(e1,e2);
        }
}
void Tri_NB_Vaccinee_croi(ELEMENT e1,ELEMENT e2)
{
    if(e1->nb_vaccinees>e2->nb_vaccinees)
        {
            permutation(e1,e2);
        }
}

void Tri_Decee_dec(ELEMENT e1,ELEMENT e2)
{
    if(e1->decees<e2->decees)
        {
            permutation(e1,e2);
        }
}
void Tri_Decee_croi(ELEMENT e1,ELEMENT e2)
{
    if(e1->decees>e2->decees)
        {
        permutation(e1,e2);
        }
}
void Tri_Guerison_dec(ELEMENT e1,ELEMENT e2)
{
    if(e1->guerison<e2->guerison)
        {
            permutation(e1,e2);
        }
}
void Tri_Guerison_croi(ELEMENT e1,ELEMENT e2)
{
    if(e1->guerison>e2->guerison)
        {
            permutation(e1,e2);
        }
}
void Tri(LISTE tab[])
{
    int cle1,cle2,cle3,cle4,ordre;
printf("choisir l'ordre des cles de tri  \n");
printf("les cles sont ''1 - Caspositifs'' ou ''2 - guerisons'' ou ''3 - decees'' ou ''4 - Nbvaccinees'' ");
printf("\n\n");
do{
    printf("choisir le 1ere  cle de tri:\t");
    scanf("%i",&cle1);
    printf("%i",cle1);
    printf("\n");
    if((cle1!=1)&&(cle1!=2)&&(cle1!=3)&&(cle1!=4))
        printf("ce clee est invalide !! veuillez ressayer \n");
}while((cle1!=1)&&(cle1!=2)&&(cle1!=3)&&(cle1!=4));

do
{
do
{
printf("choisir le 2eme cle de tri  :\t");
scanf("%i",&cle2);
printf("\n");

if(((cle2!=1)&&(cle2!=2)&&(cle2!=3)&&(cle2!=4)))
{
    printf("ce clee est invalide !! \n");
}
}while(((cle2!=1)&&(cle2!=2)&&(cle2!=3)&&(cle2!=4)));
if(cle2==cle1)
{
    printf("ce clee est deja saisie !! \n");
}
}while(cle2==cle1);

do
{
 do
 {
    printf("choisir le 3eme cle de tri  :\t");
    scanf("%i",&cle3);
    printf("\n");
    if((cle3!=1)&&(cle3!=2)&&(cle3!=3)&&(cle3!=4))
    {
        printf("ce clee est invalide !! \n");
    }
 }while((cle3!=1)&&(cle3!=2)&&(cle3!=3)&&(cle3!=4));
  if((cle3==cle1)||(cle3==cle2))
  {
      printf("ce clee est deja saisie !!\n");
  }
}while((cle3==cle1)||(cle3==cle2));
do
{
do
{
    printf("choisir le 4eme cle de tri  :\t");
    scanf("%i",&cle4);
    printf("\n\n");
    if((cle4!=1)&&(cle4!=2)&&(cle4!=3)&&(cle4!=4))
    {
        printf("ce clee est invalide !! \n");
    }
}while((cle4!=1)&&(cle4!=2)&&(cle4!=3)&&(cle4!=4));
if((cle4==cle1)||(cle4==cle2)||(cle4==cle3))
  {
      printf("ce clee deja saisie\n");
  }
}while((cle4==cle1)||(cle4==cle2)||(cle4==cle3));
do
{
    printf("choisir l'ordre de tri '1 - croissant'  ou   '-1 - decroissant' : \t ");
    scanf("%i",&ordre);

    printf("\n\n");
    if((ordre!=1)&&(ordre!=-1))
        printf("Votre choix est invalide !! \n");
}while((ordre!=1)&&(ordre!=-1));




   LISTE li=listeCreer(); // liste intermediaire
   LISTE li2=listeCreer();// 2eme liste intermediaire

    int nb=0;
    DATE da=elementCreer_date();
    elementLire_date(&da);
  int x,k,stop;
  stop=0;  // remplissage de liste inter a partie du tableaux de liste
  for( x=0;x<=23;x++)
    {
        for(k=1;k<=listeTaille(tab[x]);k++)
        {
            ELEMENT en=elementCreer();
            en=recuperer(tab[x],k);
         if(elementComparer_date(da,en->date_ent))
         {   nb++;
             inserer(li,en,nb);

             stop=1;
         }

        }

    }
li2=listeCopier(li);
    if(stop==0)
    {
        printf(" cette date n'est pas enregistrer ! \n");
    }
    else
    {



      printf("les informations concernant le %d/%d/%d :\n\n",da->j,da->m,da->a);

listeAfficher_gouv(li);


printf("\n\n");
printf("apres le tri :\n");
printf("\n\n");

ELEMENT e1=elementCreer();
ELEMENT e2=elementCreer();
if(cle1==1){

for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    e2=recuperer(li,g+1);

if(!(elementComparer_cas_positif(e1,e2)))
{
    if(ordre==-1)
{Tri_positif(li);}
else{tri_positif2(li);}

}
}
}
else if(cle1==2){

for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    e2=recuperer(li,g+1);

if(!(elementComparer_guerison(e1,e2)))
{
    if(ordre==-1)
{tri_guerison(li);}
else{tri_guer2(li);}
}
}
}


else if(cle1==3){

for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    e2=recuperer(li,g+1);

if(!(elementComparer_decees(e1,e2)))
{  if(ordre==-1)
{tri_dec(li);}
else{TriDec2(li);}
}
}
}
else
    if(cle1==4){

for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    e2=recuperer(li,g+1);

if(!(elementComparer_nb_vaccinees(e1,e2)))
{ if(ordre==-1)
{tri_vacc(li);}
else{TriVacc2(li);}
}
}
}



if(cle1==1){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);

    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);

if((elementComparer_cas_positif(e1,e2))){
                            if(cle2==2){
                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                            {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==3){
                                        if(!(elementComparer_decees(e1,e2)))
                                        { if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                        }
                                        }
        if(cle3==3){
            if((elementComparer_decees(e1,e2))){
                                    if(cle4==4){
                                    if(!(elementComparer_nb_vaccinees(e1,e2)))
                                    {if(ordre==-1)
                                    {Tri_NB_Vaccinee_dec(e1,e2);}
                                   else{Tri_NB_Vaccinee_croi(e1,e2);}
                                         }
                                        }
                                        }
}
}
}
}}}}


 if(cle1==1){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_cas_positif(e1,e2))){
                            if(cle2==2){

                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                            {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==4){

                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        { if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
if(cle3==4){
            if((elementComparer_nb_vaccinees(e1,e2))){
                                        if(cle4==3){

                                        if(!(elementComparer_decees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                         }
                                        }
                                        }
}
}
}
}}}
}
 if(cle1==1){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);


if((elementComparer_cas_positif(e1,e2))){
                            if(cle2==3){
                            if(!(elementComparer_decees(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Decee_dec(e1,e2);}
                            else{Tri_Decee_croi(e1,e2);}
                            }
                            }
            if(cle2==3){

            if((elementComparer_decees(e1,e2))){
                                        if(cle3==2){

                                        if(!(elementComparer_guerison(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Guerison_dec(e1,e2);}
                                        else{Tri_Guerison_croi(e1,e2);}
                                        }

                                        }
if(cle3==2){

            if((elementComparer_guerison(e1,e2))){
                                        if(cle4==4){

                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }


                                        }
                                        }
}
}
}
}}}
}
if(cle1==2){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
  for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_guerison(e1,e2))){
                            if(cle2==1){
                            if(!(elementComparer_cas_positif(e1,e2)))
                            { if(ordre==-1)
                                {Tri_cas_positif_dec(e1,e2);}
                            else{Tri_cas_positif_croi(e1,e2);}
                            }
                            }
            if(cle2==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle3==3){
                                        if(!(elementComparer_decees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                        }
                                        }
if(cle3==3){
            if((elementComparer_decees(e1,e2))){
                                        if(cle4==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}

 if(cle1==2){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_guerison(e1,e2))){
                            if(cle2==1){
                            if(!(elementComparer_cas_positif(e1,e2)))
                            { if(ordre==-1)
                                {Tri_cas_positif_dec(e1,e2);}
                            else{Tri_cas_positif_croi(e1,e2);}
                            }
                            }
            if(cle2==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle3==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
if(cle3==4){
            if((elementComparer_nb_vaccinees(e1,e2))){
                                        if(cle4==3){
                                        if(!(elementComparer_decees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
 if(cle1==2){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_guerison(e1,e2))){
                            if(cle2==3){
                            if(!(elementComparer_decees(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Decee_dec(e1,e2);}
                            else{Tri_Decee_croi(e1,e2);}
                            }
                            }
            if(cle2==3){
            if((elementComparer_decees(e1,e2))){
                                        if(cle3==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
if(cle3==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle4==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==3){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_decees(e1,e2))){
                            if(cle2==2){
                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
if(cle3==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle4==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==3){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_decees(e1,e2))){
                            if(cle2==2){
                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
if(cle3==4){
            if((elementComparer_nb_vaccinees(e1,e2))){
                                        if(cle4==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==3){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_decees(e1,e2))){
                            if(cle2==1){
                            if(!(elementComparer_cas_positif(e1,e2)))
                            { if(ordre==-1)
                                {Tri_cas_positif_dec(e1,e2);}
                            else{Tri_cas_positif_croi(e1,e2);}
                            }
                            }
            if(cle2==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle3==2){
                                        if(!(elementComparer_guerison(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Guerison_dec(e1,e2);}
                                        else{Tri_Guerison_croi(e1,e2);}
                                        }
                                        }
if(cle3==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle4==4){
                                        if(!(elementComparer_nb_vaccinees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_NB_Vaccinee_dec(e1,e2);}
                                        else{Tri_NB_Vaccinee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==4){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_nb_vaccinees(e1,e2))){
                            if(cle2==2){
                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
if(cle3==1){
            if((elementComparer_cas_positif(e1,e2))){
                                        if(cle4==3){
                                        if(!(elementComparer_decees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==4){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_nb_vaccinees(e1,e2))){
                            if(cle2==2){
                            if(!(elementComparer_guerison(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Guerison_dec(e1,e2);}
                            else{Tri_Guerison_croi(e1,e2);}
                            }
                            }
            if(cle2==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle3==3){
                                        if(!(elementComparer_decees(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Decee_dec(e1,e2);}
                                        else{Tri_Decee_croi(e1,e2);}
                                        }
                                        }
if(cle3==3){
            if((elementComparer_decees(e1,e2))){
                                        if(cle4==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}
if(cle1==4){
for(int g=1;g<=listeTaille(li)-1;g++)
{
    e1=recuperer(li,g);
    for(int j=g+1;j<=listeTaille(li);j++)
    {
    e2=recuperer(li,j);
if((elementComparer_nb_vaccinees(e1,e2))){
                            if(strcmp(cle2,"DECEES")==0){
                            if(!(elementComparer_decees(e1,e2)))
                            { if(ordre==-1)
                                {Tri_Decee_dec(e1,e2);}
                            else{Tri_Decee_croi(e1,e2);}
                            }
                            }
            if(strcmp(cle2,"DECEES")==0){
            if((elementComparer_decees(e1,e2))){
                                        if(cle3==2){
                                        if(!(elementComparer_guerison(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_Guerison_dec(e1,e2);}
                                        else{Tri_Guerison_croi(e1,e2);}
                                        }
                                        }
if(cle3==2){
            if((elementComparer_guerison(e1,e2))){
                                        if(cle4==1){
                                        if(!(elementComparer_cas_positif(e1,e2)))
                                        {if(ordre==-1)
                                        {Tri_cas_positif_dec(e1,e2);}
                                        else{Tri_cas_positif_croi(e1,e2);}
                                        }
                                        }
                                        }
}
}
}
}}}
}

        printf("\n\n");



           for(int a=1;a<=listeTaille(li);a++)
           {

               ELEMENT e1=elementCreer();
               e1=recuperer(li,a);


          for(int k=1;k<=listeTaille(li);k++)
               {
                  ELEMENT ek=elementCreer();
                    ek=recuperer(li2,k);
                    if(elementComparer(e1,ek))
                    {
                        if(k==1)

                          {
                            printf(" ARIANNA :\n");
                          }
                        if(k==2)
                        {
                            printf("BEJA :\n");
                        }
                        if(k==3)
                        {
                            printf("BEN AROUS :\n");
                        }
                        if(k==4)
                        {
                            printf("BIZERTE :\n");
                        }
                        if(k==5)
                        {
                            printf("GABES :\n");
                        }
                        if(k==6)
                        {
                            printf("GAFSA :\n");
                        }
                        if(k==7)
                        {
                            printf("JENDOUBA :\n");
                        }
                        if(k==8)
                        {
                            printf("KAIROUAN :\n");
                        }
                        if(k==9)
                        {
                            printf("KASSERINE :\n");
                        }
                        if(k==10)
                        {
                            printf("KEBILI :\n");
                        }
                        if(k==11)
                        {
                            printf("MANOUBA :\n");
                        }
                        if(k==12)
                        {
                            printf("KEF :\n");
                        }
                        if(k==13)
                        {
                            printf("MAHDIA :\n");
                        }
                        if(k==14)
                        {
                            printf("MEDENINE :\n");
                        }
                        if(k==15)
                        {
                            printf("MONASTIR :\n");
                        }
                        if(k==16)
                        {
                            printf("NABEUL :\n");
                        }
                        if(k==17)
                        {
                            printf("SFAX :\n");
                        }
                        if(k==18)
                        {
                            printf(" SIDI BOUZID :\n");
                        }
                        if(k==19)
                        {
                            printf("SILIANA :\n");
                        }
                        if(k==20)
                        {
                            printf("SOUSSE :\n");
                        }
                        if(k==21)
                        {
                            printf("TATAOUINE :\n");
                        }
                        if(k==22)
                        {
                            printf("TOZEUR :\n");
                        }
                        if(k==23)
                        {
                            printf("TUNIS :\n");
                        }
                        if(k==24)
                        {
                            printf("ZAGHOUAN :\n");
                        }
                       elementAfficher(e1);
                        printf("\n");
                    }

               }



           }

    }




        printf("\n");
        Menu(tab);
}




void saisir (LISTE tab[])
{
   int p,z,k;
DATE da;






                   printf("saisir votre infotmation :\n");

                     da=elementCreer_date();

                        elementLire_date(&da);






        for(p=0;p<=23;p++)
   {
        ELEMENT ei=elementCreer();
             ei->date_ent->j=da->j;
             ei->date_ent->m=da->m;
             ei->date_ent->a=da->a;
             if(p==0)
            {
                printf("saisir les information pour l' ARIANNA \n");
            }
            if(p==1)
            {
                printf("saisir les information pour BEJA \n");
            }
            if(p==2)
            {
                printf("saisir les information pour BEN AROUS \n");
            }
            if(p==3)
            {
                printf("saisir les information pour BIZERTE \n");
            }
            if(p==4)
            {
                printf("saisir les information pour GABES \n");
            }
            if(p==5)
            {
                printf("saisir les information pour GAFSA \n");
            }
            if(p==6)
            {
                printf("saisir les information pour JENDOUBA \n");
            }
            if(p==7)
            {
                printf("saisir les information pour KAIROUAN \n");
            }
            if(p==8)
            {
                printf("saisir les information pour KASSERINE \n");
            }
            if(p==9)
            {
                printf("saisir les information pour KEBILI\n");
            }
            if(p==10)
            {
                printf("saisir les information pour MANOUBA \n");
            }
            if(p==11)
            {
                printf("saisir les information pour KEF \n");
            }
            if(p==12)
            {
                printf("saisir les information pour MAHDIA\n");
            }
            if(p==13)
            {
                printf("saisir les information pour MEDENINE \n");
            }
            if(p==14)
            {
                printf("saisir les information pour MONASTIR \n");
            }
            if(p==15)
            {
                printf("saisir les information pour NABEUL\n");
            }
            if(p==16)
            {
                printf("saisir les information pour SFAX \n");
            }
            if(p==17)
            {
                printf("saisir les information pour SIDI BOUZID\n");
            }
            if(p==18)
            {
                printf("saisir les information pour SILIANA\n");
            }
            if(p==19)
            {
                printf("saisir les information pour SOUSSE \n");
            }
            if(p==20)
            {
                printf("saisir les information pour TATAOUINE\n");
            }
            if(p==21)
            {
                printf("saisir les information pour TOZEUR\n");
            }
            if(p==22)
            {
                printf("saisir les information pour TUNIS\n");
            }
            if(p==23)
            {
                printf("saisir les information pour ZAGHOUAN\n");
            }
             elementLire_donnee(&ei);
            inserer(tab[p],ei,(tab[p]->lg+1));

         }


            for(z=0;z<=23;z++)
            {
                            if(z==0)
                        {
                            printf("les  information de l' ARIANNA  :\n \n");
                        }
                        if(z==1)
                        {
                            printf("les  information de BEJA  : \n \n");
                        }
                        if(z==2)
                        {
                            printf("les  information de BENAROUS  : \n \n");
                        }
                        if(z==3)
                        {
                            printf("les  information de BIZERTE  : \n \n");
                        }
                        if(z==4)
                        {
                            printf("les  information de GABES  : \n \n");
                        }
                        if(z==5)
                        {
                            printf("les  information de GAFSA : \n \n");
                        }
                        if(z==6)
                        {
                            printf("les  information de JENDOUBA  : \n \n");
                        }
                        if(z==7)
                        {
                            printf("les  information de KAIROUAN  : \n \n");
                        }
                        if(z==8)
                        {
                            printf("les  information de KASSERINE  : \n \n");
                        }
                        if(z==9)
                        {
                            printf("les  information de KEBILI  : \n \n");
                        }
                        if(z==10)
                        {
                            printf("les  information de MANOUBA  : \n \n");
                        }
                        if(z==11)
                        {
                            printf("les  information de KEF  : \n \n");
                        }
                        if(z==12)
                        {
                            printf("les  information de MAHDIA: \n \n");
                        }
                        if(z==13)
                        {
                            printf("les  information de MEDENINE : \n \n");
                        }
                        if(z==14)
                        {
                            printf("les  information de MONASTIR  : \n \n");
                        }
                        if(z==15)
                        {
                            printf("les  information de NABEUL  : \n \n");
                        }
                        if(z==16)
                        {
                            printf("les  information de SFAX  : \n \n");
                        }
                        if(z==17)
                        {
                            printf("les  information de SIDI BOUZID : \n \n");
                        }
                        if(z==18)
                        {
                            printf("les  information de SILIANA  : \n \n");
                        }
                        if(z==19)
                        {
                            printf("les  information de SOUSSE  : \n \n");
                        }
                        if(z==20)
                        {
                            printf("les  information de TATAOUINE : \n \n");
                        }
                        if(z==21)
                        {
                            printf("les  information de TOZEUR  : \n \n");
                        }
                        if(z==22)
                        {
                            printf("les  information de TUNIS  : \n \n");
                        }
                        if(z==23)
                        {
                            printf("les  information de ZAGHOUAN : \n \n");
                        }

                            listeAfficher(tab[z]);


                        printf("\n \n");

            }




        Menu(tab);

}
void modifier(LISTE tab[])
{
    int p,r;


printf(" 1-->  Ariana\n");
printf(" 2-->  Beja\n");
printf(" 3-->  Ben arous\n");
printf(" 4-->  Bizerte\n");
printf(" 5-->  Gabes\n");
printf(" 6-->  Gafsa\n");
printf(" 7-->  Jendouba\n");
printf(" 8-->  Kairouan\n");
printf(" 9-->  Kasserine\n");
printf("10-->  Kebili\n");
printf("11-->  Manouba\n");
printf("12-->  Kef\n");
printf("13-->  Mahdia\n");
printf("14-->  Medenin\n");
printf("15-->  Monastir\n");
printf("16-->  Nabeul\n");
printf("17-->  Sfax\n");
printf("18-->  Sidi Bouzid\n");
printf("19-->  Siliana\n");
printf("20-->  Sousse\n");
printf("21-->  Tataouine\n");
printf("22-->  Tozeur\n");
printf("23-->  Tunis\n");
printf("24-->  Zaghouan\n");

do
{
printf("Donner le numero  gouvernorat :  \n");
scanf("%d",&p);
if((p<=0) || (p>24))
{
    printf("Ce numero  de gouvernorat est invalide !!  \n ");
}
}while((p<=0) || (p>24));
p=p-1;




    DATE da=elementCreer_date();
printf("donner la date de l'information qui vous pouvez la modifier \n ");
    elementLire_date(&da);
  int k,stop;
  stop=0;
  k=1;
        while((k<=listeTaille(tab[p]))&& (stop==0))
        {
            ELEMENT en=elementCreer();
            en=recuperer(tab[p],k);
         if(elementComparer_date(da,en->date_ent))
         {
             supprimer(tab[p],k);
             ELEMENT en2=elementCreer();
             en2->date_ent->j=da->j;
             en2->date_ent->m=da->m;
             en2->date_ent->a=da->a;
             elementLire_donnee(&en2);
             inserer(tab[p],en2,k);
            stop=1;
         }
            k++;
        }
        if(stop==1)
        {

            if(p==0)
            {
                printf("les  information de  ARIANNA  apres la modification :\n \n");
            }
            if(p==1)
            {
                printf("les  information de BEJA  apres la la modification \n \n");
            }
            if(p==2)
            {
                printf("les  information de BENAROUS  apres la la modification \n \n");
            }
            if(p==3)
            {
                printf("les  information de BIZERTE  apres la modification \n \n");
            }
            if(p==4)
            {
                printf("les  information de GABES  apres la modification \n \n");
            }
            if(p==5)
            {
                printf("les  information de GAFSA apres la modification \n \n");
            }
            if(p==6)
            {
                printf("les  information de JENDOUBA  apres la modification \n \n");
            }
            if(p==7)
            {
                printf("les  information de KAIROUAN  apres la modification \n \n");
            }
            if(p==8)
            {
                printf("les  information de KASSERINE  apres la modification \n \n");
            }
            if(p==9)
            {
                printf("les  information de KEBILI  apres la modification \n \n");
            }
            if(p==10)
            {
                printf("les  information de MANOUBA  apres la modification \n \n");
            }
            if(p==11)
            {
                printf("les  information de KEF  apres la modification \n \n");
            }
            if(p==12)
            {
                printf("les  information de MAHDIA apres la modification \n \n");
            }
            if(p==13)
            {
                printf("les  information de MEDENINE  apres la modification \n \n");
            }
            if(p==14)
            {
                printf("les  information de MONASTIR  apres la modification \n \n");
            }
            if(p==15)
            {
                printf("les  information de NABEUL  apres la modification \n \n");
            }
            if(p==16)
            {
                printf("les  information de SFAX  apres la modification \n \n");
            }
            if(p==17)
            {
                printf("les  information de SIDI BOUZID  apres la modification \n \n");
            }
            if(p==18)
            {
                printf("les  information de SILIANA  apres la modification \n \n");
            }
            if(p==19)
            {
                printf("les  information de SOUSSE  apres la modification \n \n");
            }
            if(p==20)
            {
                printf("les  information de TATAOUINE  apres la modification \n \n");
            }
            if(p==21)
            {
                printf("les  information de TOZEUR  apres la modification \n \n");
            }
            if(p==22)
            {
                printf("les  information de TUNIS  apres la modification \n \n");
            }
            if(p==23)
            {
                printf("les  information de ZAGHOUAN  apres la modification \n \n");
            }

            listeAfficher(tab[p]);
            printf("\n \n");

        }
        else
        {
            printf(" n'y a pas des donnees pour ce date \n");
        }



Menu(tab);
}
void suppression (LISTE tab[])
{
    int p,r;

printf(" 1-->  Ariana\n");
printf(" 2-->  Beja\n");
printf(" 3-->  Ben arous\n");
printf(" 4-->  Bizerte\n");
printf(" 5-->  Gabes\n");
printf(" 6-->  Gafsa\n");
printf(" 7-->  Jendouba\n");
printf(" 8-->  Kairouan\n");
printf(" 9-->  Kasserine\n");
printf("10-->  Kebili\n");
printf("11-->  Manouba\n");
printf("12-->  Kef\n");
printf("13-->  Mahdia\n");
printf("14-->  Medenin\n");
printf("15-->  Monastir\n");
printf("16-->  Nabeul\n");
printf("17-->  Sfax\n");
printf("18-->  Sidi Bouzid\n");
printf("19-->  Siliana\n");
printf("20-->  Sousse\n");
printf("21-->  Tataouine\n");
printf("22-->  Tozeur\n");
printf("23-->  Tunis\n");
printf("24-->  Zaghouan\n");
do
{
printf("Donner le numero  gouvernorat :  \n");
scanf("%d",&p);
if((p<=0) || (p>24))
{
    printf("Numero invalide !! ressayez d'enter un numero valide ! \n ");
}
}while((p<=0) || (p>24));
p=p-1;

        DATE da=elementCreer_date();
printf("donner la date de l'information qui vous pouvez la supprimer \n ");
    elementLire_date(&da);
  int k,stop;
  k=1;
  stop=0;
        while((k<=listeTaille(tab[p]))&&(stop==0))
        {
            ELEMENT en=elementCreer();
            en=recuperer(tab[p],k);
         if(elementComparer_date(da,en->date_ent))
         {
             supprimer(tab[p],k);
              stop=1;
         }
            k++;
        }

        if(stop==1)
        {



            if(p==0)
            {
                printf("les  information de  ARIANNA  apres la modification :\n \n");
            }
            if(p==1)
            {
                printf("les  information de BEJA  apres la modification \n \n");
            }
            if(p==2)
            {
                printf("les  information de BENAROUS  apres la modification \n \n");
            }
            if(p==3)
            {
                printf("les  information de BIZERTE  apres la modification \n \n");
            }
            if(p==4)
            {
                printf("les  information de GABES  apres la modification \n \n");
            }
            if(p==5)
            {
                printf("les  information de GAFSA apres la modification \n \n");
            }
            if(p==6)
            {
                printf("les  information de JENDOUBA  apres la modification \n \n");
            }
            if(p==7)
            {
                printf("les  information de KAIROUAN  apres la modification \n \n");
            }
            if(p==8)
            {
                printf("les  information de KASSERINE  apres la modification \n \n");
            }
            if(p==9)
            {
                printf("les  information de KEBILI  apres la modification \n \n");
            }
            if(p==10)
            {
                printf("les  information de MANOUBA  apres la modification \n \n");
            }
            if(p==11)
            {
                printf("les  information de KEF  apres la modification \n \n");
            }
            if(p==12)
            {
                printf("les  information de MAHDIA apres la modification \n \n");
            }
            if(p==13)
            {
                printf("les  information de MEDENINE  apres la modification \n \n");
            }
            if(p==14)
            {
                printf("les  information de MONASTIR  apres la modification \n \n");
            }
            if(p==15)
            {
                printf("les  information de NABEUL  apres la modification \n \n");
            }
            if(p==16)
            {
                printf("les  information de SFAX  apres la modification \n \n");
            }
            if(p==17)
            {
                printf("les  information de SIDI BOUZID  apres la modification \n \n");
            }
            if(p==18)
            {
                printf("les  information de SILIANA  apres la modification \n \n");
            }
            if(p==19)
            {
                printf("les  information de SOUSSE  apres la modification \n \n");
            }
            if(p==20)
            {
                printf("les  information de TATAOUINE  apres la modification \n \n");
            }
            if(p==21)
            {
                printf("les  information de TOZEUR  apres la modification \n \n");
            }
            if(p==22)
            {
                printf("les  information de TUNIS  apres la modification \n \n");
            }
            if(p==23)
            {
                printf("les  information de ZAGHOUAN  apres la modification \n \n");
            }
            listeAfficher(tab[p]);
            printf("\n \n");

        }
        else
        {
            printf("n'y a pas des donnees pour ce date \n");
        }



    Menu(tab);
}

char menu_evol()
{

        printf("choisir votre critere d'evolution \n");



        printf("1- Cas positifs\n");
        printf("2- Guerisons\n");
        printf("3- Decees\n");
        printf("4- Nombres vaccinees \n");

        char choix;
        fflush(stdin);
    do
    {
        scanf("%c",&choix);
        fflush(stdin);
        if(choix<'1' || choix>'5')
        {
            printf("Donner un choix valide entre '1,2,3,4,5' \n");
        }
    } while (choix<'1' || choix>'5') ;
    fflush(stdin);
    system("cls"); // Supprimer le contenu précèdent
    return choix;
}
void evolution(LISTE tab[])
{

printf(" 1-->  Ariana\n");
printf(" 2-->  Beja\n");
printf(" 3-->  Ben arous\n");
printf(" 4-->  Bizerte\n");
printf(" 5-->  Gabes\n");
printf(" 6-->  Gafsa\n");
printf(" 7-->  Jendouba\n");
printf(" 8-->  Kairouan\n");
printf(" 9-->  Kasserine\n");
printf("10-->  Kebili\n");
printf("11-->  Manouba\n");
printf("12-->  Kef\n");
printf("13-->  Mahdia\n");
printf("14-->  Medenin\n");
printf("15-->  Monastir\n");
printf("16-->  Nabeul\n");
printf("17-->  Sfax\n");
printf("18-->  Sidi Bouzid\n");
printf("19-->  Siliana\n");
printf("20-->  Sousse\n");
printf("21-->  Tataouine\n");
printf("22-->  Tozeur\n");
printf("23-->  Tunis\n");
printf("24-->  Zaghouan\n");
int p;
do
{
printf("Donner le numero  gouvernorat :  \n");
scanf("%d",&p);
}while((p<=0) || (p>24));
p=p-1;


if(estVide(tab[p]))
{
    printf("votre liste est vide \n");
}
else
{




            if(p==0)
            {
                printf("ARIANNA  :\n \n");
            }
            if(p==1)
            {
                printf("BEJA : \n \n");
            }
            if(p==2)
            {
                printf("BENAROUS :\n \n");
            }
            if(p==3)
            {
                printf("BIZERTE  :\n \n");
            }
            if(p==4)
            {
                printf("GABES  :\n \n");
            }
            if(p==5)
            {
                printf("GAFSA :\n \n");
            }
            if(p==6)
            {
                printf("JENDOUBA  :\n \n");
            }
            if(p==7)
            {
                printf("KAIROUAN  :\n \n");
            }
            if(p==8)
            {
                printf("KASSERINE  :\n \n");
            }
            if(p==9)
            {
                printf("KEBILI  :\n \n");
            }
            if(p==10)
            {
                printf("MANOUBA  :\n \n");
            }
            if(p==11)
            {
                printf("KEF  :\n \n");
            }
            if(p==12)
            {
                printf("MAHDIA :\n \n");
            }
            if(p==13)
            {
                printf("MEDENINE :\n \n");
            }
            if(p==14)
            {
                printf("MONASTIR  :\n \n");
            }
            if(p==15)
            {
                printf("NABEUL  :\n \n");
            }
            if(p==16)
            {
                printf("SFAX  :\n \n");
            }
            if(p==17)
            {
                printf("SIDI BOUZID  :\n \n");
            }
            if(p==18)
            {
                printf("SILIANA  :\n \n");
            }
            if(p==19)
            {
                printf("SOUSSE  :\n \n");
            }
            if(p==20)
            {
                printf("TATAOUINE  :\n \n");
            }
            if(p==21)
            {
                printf("TOZEUR  :\n \n");
            }
            if(p==22)
            {
                printf("TUNIS  :\n \n");
            }
            if(p==23)
            {
                printf("ZAGHOUAN  :\n \n");
            }
            int s1=0,s2=0,s3=0,s4=0;
            ELEMENT en=elementCreer();
            NOEUD n=noeudCreer(en);
            n=tab[p]->tete;
            int k;
        for(k=1;k<=listeTaille(tab[p]);k++)
        {

             ELEMENT elt=elementCreer();
             elt=recuperer(tab[p],k);
             s1=s1+elt->cas_positif;
             s2=s2+elt->guerison;
             s3=s3+elt->decees;
             s4=s4+elt->nb_vaccinees;
           n=n->suivant;
        }
        char choix;
        choix=menu_evol();
        if(choix=='1')
        {
                ELEMENT en2=elementCreer();
            NOEUD n2=noeudCreer(en2);
            n2=tab[p]->tete;

            printf("l'evolution pour les  cas positifs de cet gouvernorat : \n\n");
            printf(" Total de cas positifs pendant cette periode : %d  \n",s1);




        for(k=1;k<=listeTaille(tab[p]);k++)
        {
            double pourc_cp=0;
             ELEMENT e2=elementCreer();
             e2=recuperer(tab[p],k);
             pourc_cp=(double)((e2->cas_positif)*100)/s1;

             printf("date: %d/%d/%d \t nombre de cas positif: %d \t Le pourcentage  par rapport le total des cas positifs  pour cet gouvernorat :%.4f%c \n",e2->date_ent->j,e2->date_ent->m,e2->date_ent->a,e2->cas_positif,pourc_cp,37);
                printf("\n");

           n2=n2->suivant;
        }

        }
        if(choix=='2')
        {

            ELEMENT en3=elementCreer();
            NOEUD n3=noeudCreer(en3);
            n3=tab[p]->tete;

            printf("l'evolution des nombres des guerisons pour cet gouvernorat  \n");
            printf(" Total des guerisons pendant cette periode : %d \n",s2);

        for(k=1;k<=listeTaille(tab[p]);k++)
        {
            double pourc_guer=0;

             ELEMENT elt3=elementCreer();
             elt3=recuperer(tab[p],k);
             pourc_guer=(double)((elt3->guerison)*100)/s2;
            printf("date: %d/%d/%d \t nombre de guerisons: %d \t Le pourcentage  par rapport le total de guerisons pour cet gouvernorat :%.4f%c \n",elt3->date_ent->j,elt3->date_ent->m,elt3->date_ent->a,elt3->guerison,pourc_guer,37);
           printf("\n");
           n3=n3->suivant;
        }
        }
        printf("\n\n");
        if(choix=='3')
        {
                    ELEMENT en4=elementCreer();
            NOEUD n4=noeudCreer(en4);
            n4=tab[p]->tete;
            printf("l'evolution des nombres des decees\n");
            printf("Total des decees pendant cette periode : %d  \n",s3);
        for(k=1;k<=listeTaille(tab[p]);k++)
        {
            double pourc_dec=0;

             ELEMENT elt4=elementCreer();
             elt4=recuperer(tab[p],k);
             pourc_dec=(double)((elt4->decees)*100)/s3;
            printf("date: %d/%d/%d \t nombre de decees: %d \t le pourcentage par rapport le total des decees pour cet gouvernorat :%.4f%c \n",elt4->date_ent->j,elt4->date_ent->m,elt4->date_ent->a,elt4->decees,pourc_dec,37);
           printf("\n");
           n4=n4->suivant;
        }
        }
        if(choix=='4')
        {
                ELEMENT en5=elementCreer();
            NOEUD n5=noeudCreer(en5);
            n5=tab[p]->tete;
            printf("l'evolution  des nombres vaccinees\n");
            printf("Total des nombres vaccinees pendant cette periode : %d \n",s4);
        for(k=1;k<=listeTaille(tab[p]);k++)
        {
            double pourc_nbv=0;

             ELEMENT elt5=elementCreer();
             elt5=recuperer(tab[p],k);
             pourc_nbv=(double)((elt5->nb_vaccinees)*100)/s4;
            printf("date: %d/%d/%d \t nombre DE vaccinees: %d \t le pourcentage par rapport le total de nombre vaccinees pour cet gouvernorat :%.4f%c \n",elt5->date_ent->j,elt5->date_ent->m,elt5->date_ent->a,elt5->nb_vaccinees,pourc_nbv,37);
          printf("\n");
           n5=n5->suivant;
        }
        }
        if(choix=='5')
        {
            menu_evol();
        }

}
Menu(tab);


}




void importation(LISTE tab[])
{
FILE* fichier = NULL;
int inter[6];
int p;
    int jour,mois,annee,casp,guer,dec,nbv;
    char ville[100];
fichier = fopen("donnees.txt", "r");
if(fichier !=NULL)
{

    int nb=1;
    int i;
    fflush(stdin);
    while(fscanf(fichier,"%d %d %d %s %d %d %d %d ",&jour,&mois,&annee,ville,&casp,&guer,&dec,&nbv)!=EOF )
    {
       fflush(stdin);
    if(strcmp("Ariana",ville)==0)
{
    p=0;
}
if(strcmp("Beja",ville)==0)
{
    p=1;
}
if(strcmp("BenArous",ville)==0)
{
    p=2;
}
if(strcmp("BenArous",ville)==0)
{
    p=3;
}

if(strcmp("Bizerte",ville)==0)
{
    p=4;
}

if(strcmp("Gabes",ville)==0)
{
    p=5;
}

if(strcmp("Jendouba",ville)==0)
{
    p=6;
}

if(strcmp("Kairouan",ville)==0)
{
    p=7;
}

if(strcmp("Kasserine",ville)==0)
{
    p=8;
}

if(strcmp("Kebili",ville)==0)
{
    p=9;
}

if(strcmp("Manouba",ville)==0)
{
    p=10;
}

if(strcmp("Kef",ville)==0)
{
    p=11;
}

if(strcmp("Mahdia",ville)==0)
{
    p=12;
}

if(strcmp("Medenine",ville)==0)
{
    p=13;
}

if(strcmp("Monastir",ville)==0)
{
    p=14;
}

if(strcmp("Nabeul",ville)==0)
{
    p=15;
}

if(strcmp("Sfax",ville)==0)
{
    p=16;
}

if(strcmp("SidiBouzid",ville)==0)
{
    p=17;
}

if(strcmp("Siliana",ville)==0)
{
    p=18;
}

if(strcmp("Sousse",ville)==0)
{
    p=19;
}

if(strcmp("Tataouine",ville)==0)
{
    p=20;
}

if(strcmp("Tozeur",ville)==0)
{
    p=21;
}

if(strcmp("Tunis",ville)==0)
{
    p=22;
}

if(strcmp("Zaghouan",ville)==0)
{
    p=23;
}


    ELEMENT ef=elementCreer();
    ef->cas_positif=casp;
    ef->decees=dec;
    ef->guerison=guer;
    ef->nb_vaccinees=nbv;
    ef->date_ent->j=jour;
    ef->date_ent->m=mois;
    ef->date_ent->a=annee;
    int x;
    x=tab[p]->lg;
    inserer(tab[p],ef,x+1);
    fflush(stdin);

}
}
fclose(fichier);
int w;
for(w=0;w<=23;w++)
{
    listeAfficher(tab[w]);
    printf("\n\n");
}
Menu(tab);

}



void Menu(LISTE tab[])
{
   system ("color 4");
char choix;
printf("\n\n");
printf(                     "                   \n                                                             \n");
printf(                     "                           ***Bienvenue dans le moniteur COVID en Tunisie***              \n");
printf(                     "                   |*************************************************************|\n");
printf(                     "                   | 1- Importation des donnees a partir d'un fichier texte      |\n");
printf(                     "                   | 2- Ajouter une information                                  |\n");
printf(                     "                   | 3- Modifier une information                                 |\n");
printf(                     "                   | 4- Supprimer une information                                |\n");
printf(                     "                   | 5- Affichage d'evolution d'une gouvernorat                  |\n");
printf(                     "                   | 6- Trier                                                    |\n");
printf(                     "                   | 7- Exit                                                     |\n");
printf(                     "                   |*************************************************************|\n");

    fflush(stdin);
    do
    {
        printf("Tapez votre choix :\t");
        scanf("%c",&choix);
        fflush(stdin);
        if(choix<'1' || choix>'7')
            printf("donner un choix valide entre '1,2,3,4,5,6,7 ' \n");
    } while (choix<'1' || choix>'7') ;
    fflush(stdin);
    system("cls"); // Supprimer le contenu précèdent
    switch (choix)
    {
        case '1':
            importation(tab);
            break;
        case '2':
            saisir(tab);
            break;
        case '3':
            modifier(tab);
            break;
        case '4':
            suppression(tab);
            break;
        case '5':
            evolution(tab);
            break;
        case '6':
            Tri(tab);
        default:
            exit(0);

    }
}






int main()
{
LISTE tab[23];
LISTE L1=listeCreer();
LISTE L2=listeCreer();
LISTE L3=listeCreer();
LISTE L4=listeCreer();
LISTE L5=listeCreer();
LISTE L6=listeCreer();
LISTE L7=listeCreer();
LISTE L8=listeCreer();
LISTE L9=listeCreer();
LISTE L10=listeCreer();
LISTE L11=listeCreer();
LISTE L12=listeCreer();
LISTE L13=listeCreer();
LISTE L14=listeCreer();
LISTE L15=listeCreer();
LISTE L16=listeCreer();
LISTE L17=listeCreer();
LISTE L18=listeCreer();
LISTE L19=listeCreer();
LISTE L20=listeCreer();
LISTE L21=listeCreer();
LISTE L22=listeCreer();
LISTE L23=listeCreer();
LISTE L24=listeCreer();
tab[0]=L1;
tab[1]=L2;
tab[2]=L3;
tab[3]=L4;
tab[4]=L5;
tab[5]=L6;
tab[6]=L7;
tab[7]=L8;
tab[8]=L9;
tab[9]=L10;
tab[10]=L11;
tab[11]=L12;
tab[12]=L13;
tab[13]=L14;
tab[14]=L15;
tab[15]=L16;
tab[16]=L17;
tab[17]=L18;
tab[18]=L19;
tab[19]=L20;
tab[20]=L21;
tab[21]=L22;
tab[22]=L23;
tab[23]=L24;
Menu(tab);
printf("\n\n");

}
