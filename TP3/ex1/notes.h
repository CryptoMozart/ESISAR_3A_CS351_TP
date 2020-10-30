#include <stdio.h>
#define X 100

void afficherNotes(float notes[], int taille);
float minimumNote(float notes[], int taille);
float maximumNote(float notes[], int taille);
float calculeMoyenne(float notes[], int taille);
float calculeVariance(float notes[], int taille);
float calculeEcartType(float notes[], int taille);
int rechercheValeur(float notes[], int taille, float valeur);
void histogrammeHorizontal(float notes[], int taille);
void afficherMatrice(char matrice[X][10], int ligne);
void initialiseMatrice(char matrice[X][10], int ligne);
void histogrammeVertical(float notes[], int taille);
int fonctionTest(float notes[], int taille);
