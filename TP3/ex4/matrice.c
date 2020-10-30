#include <stdio.h>

#define X 100


void creerAfficherMatrice(){
	int matrice[5][5]; /*Création de la matrice de taille 5x5 */
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			matrice[i][j] = 0; /*Initialisation de la matrice */
		}
	}
	for(int ligne=0;ligne<5;ligne++){
		for(int colonne=0;colonne<5;colonne++){
			printf("%d\t",matrice[ligne][colonne]);
		}
		printf("\n");
	}
}
		
/* question 2: addition: la résultat est:
 * (3  -3  5 )
 * (4  10  -3)
 * Pour réaliser une addition de deux matrices, elles doivent etre de la même taille
 * 		transposée: 
 * (1 -1)
 * (0 2 )
 * (4 -5)
 * si la matrice de départ est de taille n*p alors la matrice transposée sera de taille p*x.
 * 		produit:
 * (12  17 )
 * (-11 -13)
 *
 * Pour réaliser le produit de deux matrices,il faut que le nombre de colonne de la première(n*p) soit égal au nombre de ligne de la deuxième (p*v).
 * la résultat sera donc une matrice de taille (n*v).
 */

void afficherMatrice(int matrice[X][X], int ligne, int colonne){
	for(int i=0;i<ligne;i++){
		for(int j=0;j<colonne;j++){
			printf("%d\t",matrice[i][j]);
		}
		printf("\n");
	}
}

void additionnerMatrice(int matrice1[X][X], int matrice2[X][X], int ligne, int colonne){
	int matrice[X][X];
	for(int i=0;i<ligne;i++){
		for(int j=0;j<colonne;j++){
			matrice[i][j] = matrice1[i][j] + matrice2[i][j];
		}
	}
	afficherMatrice(matrice,ligne,colonne);
}

void transposee(int matrice[X][X], int ligne, int colonne){
	afficherMatrice(matrice,colonne,ligne);
}


void produitMatrice(int matrice1[X][X], int ligne1, int colonne1, int matrice2[X][X],int colonne2){
	int result[X][X];
	for (int i=0; i<ligne1; i++) {
		for (int j=0; j<colonne2; j++) {
			result[i][j] = 0;
			for (int k=0; k<colonne1; k++) {
				result[i][j] = result[i][j] + matrice1[i][k]*matrice2[k][j];
			}
		}
	}
	afficherMatrice(result,ligne1,colonne2);
}
/*colonne1 = ligne2, on ne l'a donc pas mis dans les arguments de la fonction*/
