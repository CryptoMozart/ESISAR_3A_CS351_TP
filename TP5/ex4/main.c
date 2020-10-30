#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

#define TAILLEMAX 1000


void creerTest(liste l){
	l[0].suivant = 8;
	
	l[8].valeur = 47;
	l[8].suivant = 1;
	
	l[1].valeur = 88;
	l[1].suivant = 66;
	
	l[66].valeur = 100;
	l[66].suivant = 25;
	
	l[25].valeur = 105;
	l[25].suivant = 0;
	
}

/*n'affiche que les i-premiers éléments du tableau, jusqu'a rencontrer un élément vide, donc si le compactage marche, cette fonction affiche tout le tableau*/
void afficher_compactage(liste l){
	int i = 1;
	while(l[i].suivant != -1){
		printf("%d\n",l[i].valeur);
		i++;
	}
}


int main()
{
    /* déclaration du tableau contenant la liste */
    element maListe[TAILLEMAX];

	printf("Cr�ation de la liste vide \n");
    creerListeVide(maListe); 
	afficherListe(maListe);//"La liste est vide"
	
	printf("Cr�ation de la liste de test \n");
	creerTest(maListe); //maListe = (47,88,100,105)
    afficherListe(maListe);

	printf("Ins�rtion dans la liste de test en tete de 24 \n");
	insererElement(24, maListe); //maListe = (24,47,88,100,105)
	afficherListe(maListe);

	printf("Suppression dans la liste de test en tete de 24 \n");
	supprimerElement(1, maListe);
	afficherListe(maListe); //maListe = (47,88,100,105)

	printf("Insértion dans la liste de test de 90 \n");
	insererElement(90, maListe); //maListe = (47,88,90,100,105)
	afficherListe(maListe);
	
	printf("Suppression dans la liste de test du 3eme indice \n");
	supprimerElement(3, maListe);
	afficherListe(maListe); //maListe = (47,88,100,105)
	
	printf("Insértion en fin de liste de 200 \n");
	insererElement(200, maListe); //maListe = (47,88,100,105,200)
	afficherListe(maListe);
	
	printf("Suppression en fin de liste de 200 \n");
	supprimerElement(5, maListe);
	afficherListe(maListe); //maListe = (47,88,100,105)
	
	printf("Suppression d'un �l�ment inexistant \n");
	supprimerElement(5, maListe);
	afficherListe(maListe); //"Indice trop grand"

	
	printf("Compactage de la liste de test1 \n");
	compacterListe(maListe);
    afficher_compactage(maListe); //aucun changement n'est attendu dans l'affichage : maListe = (47,88,100,105)

	printf("Insértion d'un élément déja présent dans la liste\n");
	insererElement(100,maListe); //maListe = (47,88,100,100,105
	afficherListe(maListe);
	
    return 0;
}

