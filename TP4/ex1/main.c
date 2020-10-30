#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

#define L 100
int main(int argc, char *argv[]){
	int tab[L];
	int nb = lireDonnees(argv[1],tab);
	printf("%d\n",nb);
	afficherTableau(tab,nb);
	printf("\n");
	/*triABulles(tab,nb);
	printf("\n"); */
	enregistrerDonnees(argv[2],tab,nb);
	return 0;
}

