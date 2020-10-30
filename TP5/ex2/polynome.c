#include <stdio.h>
#include <stdlib.h>
#include "polynome.h"

void addPolynomes(Polynome p1, Polynome p2, Polynome res){
	int k = 0;  //indice pour le deuxième polynome (p2)
	int i = 0;  //indice pour le premier polynome (p1)
	int j = 0;  // indice pour le polynome resultat (res)
	while ((p1[i].degre >=0) && (p2[k].degre >=0)){ //on fait la somme de p1 et p2 en fonction de leurs degres et on le range dans res, on fait cela jusqu'à avoir écrit toutes les valeurs de p1 et/ou p2
		if (p1[i].degre == p2[k].degre){
			res[j].degre = p1[i].degre;
			res[j].coeff = p1[i].coeff + p2[k].coeff;
			i++;
			k++;
		}
		else if (p1[i].degre >= p2[k].degre){
			res[j].degre = p1[i].degre;
			res[j].coeff = p1[i].coeff;
			i++;
		}
		else {
			res[j].degre = p2[k].degre;
			res[j].coeff = p2[k].coeff;
			k++;
		}	
		j++;
	}
	
	
	if ((p1[i].degre <0) && (p2[k].degre >=0) ){ //si on a traité toute les valeurs de p1 mais pas celles de p2
		while (p2[k].degre >=0){
			res[j].degre = p2[k].degre;
			res[j].coeff = p2[k].coeff;
			j++;
			k++;
		}	
	}	
	
	else if((p2[k].degre <0) && (p1[i].degre >=0) ) { //si on a traité toutes les valeurs de p2 mais pas celles de p1
		while (p1[i].degre >=0){
			res[j].degre = p1[i].degre;
			res[j].coeff = p1[i].coeff;
			j++;
			i++;
		}
	}
	res[j].degre=-1; //on indique que le polynome du resultat est termine
}
