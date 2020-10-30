#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "notes.h"

#define NB_NOTES 16

int main(){
	float notes[NB_NOTES] = {0,2,5,4,6.4,18,4.5,19.5,16.2,1,12,14,15.5,9,10,10.1}; 
	float test[NB_NOTES] = {0,2,5,4,6.4,18,4.5,19.5,16.2,1,-8,14,15.5,9,10,10.1}; /*test avec une valeur négative*/
	float test2[6] = {0,0,0,0,0,0}; /*test avec toujours la même note à 0*/
	float test3[NB_NOTES] = {0,2,5,4,6.4,18,25,19.5,16.2,1,12,14,15.5,9,10.1}; /*test avec une note supérieure à 20*/
	if (fonctionTest(notes,NB_NOTES)){
		printf("Le tableau de notes n'est pas bon");
		return 0;
	}	
	/*afficherNotes(notes,NB_NOTES);
	printf("la note minimum est: %.2f\n",minimumNote(notes,NB_NOTES));
	printf("la note maximum est: %.2f\n",maximumNote(notes,NB_NOTES));
	printf("la moyenne des notes est: %.4f\n", calculeMoyenne(notes,NB_NOTES));
	printf("la variance des notes est: %.4f\n", calculeVariance(notes,NB_NOTES));
	printf("l'écart-type des notes est: %f\n", calculeEcartType(notes,NB_NOTES));
	printf("l'indice de la valeur recherchée est: %d\n", rechercheValeur(notes,NB_NOTES,8.75));
	histogrammeHorizontal(notes,NB_NOTES);
	histogrammeVertical(notes,NB_NOTES); */
	return 0;
	}
