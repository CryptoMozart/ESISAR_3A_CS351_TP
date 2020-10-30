#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

int elementLibre(liste l){
	int i = 0;
	while (l[i].suivant != -1){
		i++;
	}
	return i;
}

void creerListeVide(liste l){
	l[0].suivant = 0;
	for(int i = 1; i<TAILLEMAX; i++){
		l[i].suivant = -1;
	}
}
void insererElement(int x, liste l){
	int i = elementLibre(l);
	l[i].valeur = x;

	int k = 0;
	int j = l[0].suivant;
	if (j == 0){
		l[i].suivant = 0;
		l[0].suivant = i;
	}
	else {
		while((l[j].valeur < x)&&(j!=0)){
			k=j;
			j=l[j].suivant;
		}
		l[i].suivant = j; 
		l[k].suivant = i;
	}
}

void supprimerElement(int i, liste l){
	/*test pour voir si l'indice demandé existe*/
	int indice_test = 0;
	int cnt = 0;
	while(l[indice_test].suivant !=0){
		indice_test=l[indice_test].suivant;
		cnt++;
	}
	if (i<=cnt){
		int indice = 0;
		for(int j = 0; j<i-1; j++){
			indice = l[indice].suivant;
		}
		int k = l[indice].suivant;
		l[indice].suivant = l[k].suivant;
		l[k].suivant = -1;
	}
	else printf("Indice trop grand\n");
}

void afficherListe(liste l){
	int i = l[0].suivant;
	if (i!=0){
		while (i>0){
			printf("%d\n",l[i].valeur);
			i = l[i].suivant;
		}
	}
	else printf("La liste est vide\n");
}



void compacterListe(liste l){
	int i = l[0].suivant;
	int tab[TAILLEMAX];
	int j = 0;
	while(i !=0){  //on va sauvegarder les éléments du tableau dans l'ordre
		tab[j] = l[i].valeur;
		i = l[i].suivant;
		j++;
	}
	creerListeVide(l); //on réinitialise le tableau
	for(int k = 0; k<=j; k++){  //et on réécrit de manière compacté dans l'ordre les éléments du tableau
		l[k+1].valeur = tab[k];
		l[k].suivant = k+1;
	}
	l[j].suivant = 0;
}













