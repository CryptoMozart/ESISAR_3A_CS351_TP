#include <stdio.h>
#include "matrice.h"

#define X 100

int main(){
	int matrice1[X][X]={{1,2,3},{4,5,-6}};
	int matrice2[X][X] = {{0,-2,1},{2,-4,-4}};
	int matrice3[X][X] = {{0,3},{5,4},{-2,-6}};
	afficherMatrice(matrice1,2,3);
	printf("\n\n");
	afficherMatrice(matrice2,2,3);
	printf("\n\n");
	afficherMatrice(matrice3,3,2);
	printf("\n\n");
	/*
	additionnerMatrice(matrice1,matrice2,2,3); */
	/*printf("\n");
	transposee(matrice1,2,3);*/
	produitMatrice(matrice1,2,3,matrice3,2);
	return 0;
}
