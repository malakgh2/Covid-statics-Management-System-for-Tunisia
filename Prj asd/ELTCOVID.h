#ifndef ELTCOVID_H_INCLUDED
#define ELTCOVID_H_INCLUDED
typedef struct
{
    int j;
    int m;
    int a;
} date , *DATE;

typedef struct
{
    DATE date_ent;
    int cas_positif;
    int guerison;
    int decees;
    int nb_vaccinees;
} covid , *ELEMENT;


#endif // ELTCOVID_H_INCLUDED
