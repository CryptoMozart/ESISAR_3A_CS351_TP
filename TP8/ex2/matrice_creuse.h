#include <stdio.h>
#include <stdlib.h>

#define L 4
#define C 5
#define X 100

struct ligne 
{ 
    int index_ligne; 
    struct ligne *suivant; 
    struct colonne *colonne_suivante; 
}; 

struct colonne 
{ 
    int index_colonne; 
    int valeur; 
    struct colonne *suivant; 
}; 

struct tete
{
	int nb_ligne;
	int nb_colonne;
	struct ligne *suivant;
};

typedef struct ligne *Ligne;
typedef struct colonne *Colonne; 
typedef struct tete *Tete;

void creervaleurColonne(int elem, int j, Ligne *liste);
void creerMatriceCreuse(Tete *debut, int ligne, int colonne, int matrice[L][C]);
void afficherMatriceCreuse(Tete *debut);
void somme (Tete *m1, Tete *m2, Tete *res);
void produit (Tete *m1, Tete *m2, Tete *res);