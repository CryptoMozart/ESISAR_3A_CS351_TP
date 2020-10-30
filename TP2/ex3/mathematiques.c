#include <stdio.h>
#include <stdlib.h>

int quotient(unsigned int a, unsigned int b){
	if(b==0) 
		return -1;
	int i=0;
	while(a>=b){
		a=a-b;
		i++; }
	return i;
}

int reste(unsigned int a, unsigned int b){
	if(quotient(a,b) == -1)
		return -1;
	else
		return (a-b*quotient(a,b));
}

int valeurAbsolue(int a){
	return abs(a);
}

int pgcd(int a, int b){
        if (b==0){
                return a;
        }
        int r;
        while(b!=0){
                r = a % b;
                a = b;
                b = r;
        }
        return a;
}

int ppcm(int a, int b){
	return (quotient(valeurAbsolue(a*b),pgcd(a,b)));
}

int puissanceMB(unsigned int x,unsigned int n){
	int N=n,Y=1,Z=x,M;
	int cnt=0;
	while(N!=0){
		cnt++;
		M = N/2;
		if(N%2!=0) {
		Y=Z*Y;
			if(M==0)
				return Y;
		}
		N=M;
		Z = Z*Z;
		/*printf("Compteur=%d\n",cnt); */

	}
	return Z;
}
/* Grace au compteur, on peut connaitre le nombre d'itéraion dans le while par exemple, pour 3^7, on obtient 2187 et cnt=2, on fait donc 2 opérations.
 */

int sommeDeslmpairs(int d,int f){
	int somme = d;
	int j=0;
	while(d+j<f){
		j+=2;
		somme+=(d+j);
	}
	return somme;
}

int estUneDecompositionDe(int d, int f){
	int somme=sommeDeslmpairs(d,f);
	int cube = 1;
	while(puissanceMB(cube,3)<=somme){
		if (puissanceMB(cube,3) == somme) 
			return cube;
		cube ++;
	}
	return -1;
}

void testBibliotheque(){

	printf("Le quotient de 64 divisé par 8 est %d\n", quotient(64,8));
	printf("Le quotient de 8 divisé par 10 est %d\n", quotient(8,10));   /*divison par un nombre trop grand*/
	printf("Le quotient de 8 divisé par 0 est %d\n", quotient(8,0));   /*division par 0*/

	printf("Le reste de 15 divisé par 3 est %d\n", reste(15,3));
	printf("Le reste de 64 divisé par 8 est %d\n", reste(64,8));
	printf("Le reste de 8 divisé par 10 est %d\n", reste(8,10));   /*divison par un nombre trop grand*/
	printf("Le reste de 8 divisé par 0 est %d\n", reste(8,0));   /*division par 0*/

	printf("La veleur absolue de 0 est %d\n",valeurAbsolue(0));
	printf("La veleur absolue de -15 est %d\n",valeurAbsolue(-15));
	printf("La veleur absolue de 55 est %d\n",valeurAbsolue(55));

	printf("Le ppcm de 18 et 57 est %d\n", ppcm(18,57));
	printf("Le ppcm de 0 et 57 est %d\n", ppcm(0,57));

	printf("5 à la puissance 8 vaut %d\n",puissanceMB(5,8));
	printf("5 à la puissance 0 vaut %d\n",puissanceMB(5,8));  /* le cas n=0*/
	printf("100 à la puissance 45645 vaut %d\n",puissanceMB(100,45645)); /*cas on le nombre est tres tres grand*/

	printf("%d est l'entier dont le cube se décompose en somme de tous les entiers impairs consécutifs entre 7 et 13\n", estUneDecompositionDe(7,13));
	printf("%d est l'entier dont le cube se décompose en somme de tous les entiers impairs consécutifs entre 7 et 11\n", estUneDecompositionDe(7,11));
	printf("%d est l'entier dont le cube se décompose en somme de tous les entiers impairs consécutifs entre 4 et 13\n", estUneDecompositionDe(4,13));	/* un entier pair*/
	printf("%d est l'entier dont le cube se décompose en somme de tous les entiers impairs consécutifs entre 6 et 20\n", estUneDecompositionDe(6,20));	/*deux entiers pairs*/
}


/*comme toutes les fonctions demandent des unsigned int, si l'on rentre autre chose comme un entier negatif ou un float ça ne marchera pas*/

