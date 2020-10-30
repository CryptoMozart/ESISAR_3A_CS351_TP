#include <stdio.h>
#include "graphlib.h"
#include "dessine.h"
#include <math.h>

void dessineCarre(int x, int y, int taille){
	line(x,y,x-taille/2,y-taille/2);
	line(x-taille/2,y-taille/2,x,y-taille);
	line(x,y-taille,x+taille/2,y-taille/2); 
	line(x+taille/2,y-taille/2,x,y);

}

void dessineCarreDiagonale(int x,int y, int taille){
	dessineCarre(x,y,taille);
	line(x,y,x,y-taille);
	line(x-taille/2,y-taille/2,x+taille/2,y-taille/2);
			}

void dessineMosaique(int x, int y, int taille,int hauteur, int largeur){
	int i,j;
	for(i=0; i<largeur; i++){
		for(j=0; j<hauteur; j++){
			dessineCarre(x + (i*taille), y + (j*taille), taille);
		}
	}

}

void dessineMosaiqueAvecSouris(int taille, int hauteur, int largeur){
	int x,y;
	cliquer_xy(&x,&y);
	dessineMosaique(x,y,taille,hauteur,largeur);

}



