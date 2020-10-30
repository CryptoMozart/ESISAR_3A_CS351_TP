#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void afficherListe(liste *l){
	liste i = *l;
	if (i == NULL){
		printf("Liste vide\n");
	}
	else{
		while((i != NULL)){
			printf("La liste contient: %d\n", i->valeur);
			i = i->suivant;
		}
		printf("\n");
	}
}


void insererElement(int x, liste *l){
	liste suiv = *l;
	liste prec = NULL;
	liste elem = malloc(sizeof(element));  //création du nouvel élément
	elem->valeur = x;
	
	while(suiv != NULL && suiv->valeur < x){   //on se place à l'endroit où insérer notre nouvel élément
		prec = suiv; 
		suiv = suiv->suivant;
	}
	elem->suivant = suiv;
	if(prec == NULL){  	//si on a une insertion en tête ou non
		*l = elem;
	}
	else{
		prec->suivant = elem;
	}
}


void supprimerElement(int i, liste *l){
	if(*l != NULL){ //on verifie que la liste n'est pas vide
		if(i == 0){  //suppression en tete
			liste en_tete = (*l)->suivant;
			free(*l);
			*l = en_tete;
		}
		else{
			liste supp = *l;
			liste prec;
			int j = 0;
			
			while((j<i) && (supp->suivant != NULL)){
				prec = supp;
				supp = supp->suivant;
				j++;
			}
			if(j != i){
				printf("Aie! L'indice est trop grand, il n'y a pas assez d'élément dans la liste");
			}
			else{
				prec->suivant = supp->suivant;
				free(supp);
			}
		}
	}
	else{
		printf("Aie! Liste vide\n");
	}	
}











