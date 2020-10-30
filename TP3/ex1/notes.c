#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define X 100

void afficherNotes(float notes[], int taille){
	printf("Les notes des étudiants à l'examen sont:\n");
	for(int i = 0; i<taille;i++){
		printf("%.2f\n", notes[i]);
	}
}

float minimumNote(float notes[], int taille){
	float note = 20;
	for(int i = 0; i<taille;i++){
		if(notes[i] <= note)
			note = notes[i];
	}
	return note;
}

float maximumNote(float notes[], int taille){
	float note = 0;
	for(int i = 0; i<taille; i++){
		if(notes[i] >= note)
			note = notes[i];
	}
	return note;
}

float calculeMoyenne(float notes[], int taille){
	float somme=0, moyenne;
	for(int i=0; i<taille; i++){
		somme += notes[i];
	}
	moyenne = somme/taille;
	return moyenne;
}

float calculeVariance(float notes[], int taille){
	float variance,somme;
	for(int i = 0;i<taille;i++){
		somme += pow(notes[i] - calculeMoyenne(notes, taille) , 2);
	}
	variance = somme/taille;
	return variance;
}

float calculeEcartType(float notes[], int taille){
	return sqrt(calculeVariance(notes,taille));
}

int rechercheValeur(float notes[], int taille,float valeur){
	int result = -1;
	for(int i=0;i<taille;i++){
		if(notes[i] == valeur)
			result = i;
	}
	return result;
}

void histogrammeHorizontal(float notes[], int taille){
	char c;
	for(int i=0;i<=18;i+=2){
		if(i<2)
			c  = '[';
		else 
			c = ']';
		printf("%c %d ; %d ] : ",c,i,i+2);
		for(int j=0;j<taille;j++){
			if(notes[j] == 0 && i<2)
				printf("*\t");

			if(notes[j]>i && notes[j]<=i+2)
				printf("*\t");
		}
	printf("\n");
	}
}

void afficherMatrice(char matrice[X][10], int ligne){
	for(int i=0;i<ligne;i++){
		for(int j=0;j<10;j++){
			if(j<5)
				printf("  %c    ",matrice[i][j]);
			else
				printf("    %c    ",matrice[i][j]);
		}
		printf("\n");
	}
}

void initialiseMatrice(char matrice[X][10], int ligne){
	for(int i=0; i<ligne;i++){
		for(int j=0;j<10;j++){
			matrice[i][j] = ' ';
		}
	}
}

void histogrammeVertical(float notes[], int taille){
	/*afficherNotes(notes, taille); */
	/*On determine le nombre de ligne de la matrice */
	int hauteur,hauteur_max=0;
	for(int i=0; i<=18;i+=2){
		hauteur=0;
		for(int j=0;j<taille; j++){
			if(notes[j] == 0 && i<2)
				hauteur++;
			if(notes[j]>i && notes[j]<=i+2)
				hauteur++;
		}
		if(hauteur > hauteur_max)
			hauteur_max = hauteur;
	}
	/*printf("%d\n\n",hauteur_max);*/

	/* On utilise une matrice de taille hauteur_max et 10 pour afficher les étoiles. On l'initialise avec la fonction initialiseMatrice */
	char matrice[hauteur_max][10];
	initialiseMatrice(matrice,hauteur_max);
	/*afficherMatrice(matrice,hauteur_max); */
	for(int k=0; k<=18;k+=2){
		hauteur=0;
		for(int l=0;l<taille; l++){
			if((notes[l]>k && notes[l]<=k+2)||(notes[l]==0 && k<2)) {
				hauteur++;
				matrice[hauteur_max - hauteur][k/2] = '*'; 
				/*On lit la liste en fonction de l'intervalle dans lequel on se trouve et on affecte une * si la note est dans l'intervalle*/
			}
		}
	}
	afficherMatrice(matrice,hauteur_max);
	char c;
	for(int x=0;x<=18;x+=2){
		if(x<2)
			c  = '[';
		else 
			c = ']';
		printf("%c%d;%d]  ",c,x,x+2);
	
	}
}

int fonctionTest(float notes[], int taille){
	for (int i=0; i<taille; i++){
		if ((notes [i] <0) || (notes [i]>20)) return 1;
	}
	return 0;
}
/*cette fonction sert de protection dans le main pour assurer la bon fonctionnement des autres fonctions*/