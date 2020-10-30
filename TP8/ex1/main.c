#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

int main(){
	
	liste L = NULL;  // Liste vide

	afficherListe(&L);
	insererElement(9, &L);  // 9
	afficherListe(&L);
	insererElement(2, &L);  // 2 9
	afficherListe(&L);
	insererElement(1, &L);  // 1 2 9
	afficherListe(&L);
	supprimerElement(2, &L);  // 1 2
	afficherListe(&L);
	insererElement(15, &L);  // 1 2 15
	afficherListe(&L);
	supprimerElement(1, &L);  // 1 15
	afficherListe(&L);
	supprimerElement(0, &L);  // 15
	afficherListe(&L);
	supprimerElement(3, &L);  // Indice trop grand
	supprimerElement(0, &L);  // Liste vide
	afficherListe(&L);
	supprimerElement(0, &L);  // La liste est deja vide

	return 0;
}








