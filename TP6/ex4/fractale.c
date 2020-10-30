#include <stdio.h>
#include "graphlib.h"
#include "fractale.h"

#define X 500
#define Y 800
#define T 600

void initalise_carre(int x ,int y ,int taille){
	fill_triangle(x,y,x+taille,y,x,y-taille);
	fill_triangle(x+taille,y,x+taille,y-taille,x,y-taille);
}
void dessine_carre(int x,int y, int taille){
	set_blue();
	fill_triangle(x,y,x+taille,y,x,y-taille);
	fill_triangle(x+taille,y,x+taille,y-taille,x,y-taille);
	}

void fractale(int rang,int n,int x,int y,int taille){
	dessine_carre(x,y,taille/2);
	if(rang<n){
		rang++;
		fractale(rang,n,x+taille/2,y,taille/2);
		fractale(rang,n,x,y-taille/2,taille/2);
		fractale(rang,n,x+taille/2,y-taille/2,taille/2);
	}
}
void afficher_fractale(int n){
	initalise_carre(X,Y,T);
	fractale(1,n,X,Y,T);
}
