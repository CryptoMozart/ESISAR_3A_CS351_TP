#include <stdio.h>
#include "jeux_multi.h"



int main() {
	int n;
	do{
		printf("A quel jeu voulez-vous jouer ? \n");
		printf("0: Pour quitter\n");
		printf("1: Jeu Multiplication simple (1)\n2: Jeu Multiplication avec points (2)\nchoix: ");
		scanf("%d",&n); 
        	if(n==1)
			JeuMulti();
		if(n==2)
			JeuMultiPoints();	}
	while(n!=0);
        return 0;
}

