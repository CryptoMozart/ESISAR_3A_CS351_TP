#include <stdio.h>
#include <stdlib.h>
#include "Fraction.h"

int main(){
	Fraction fa, fb ;
	char op;
	printf("Entrer deux fractions :") ;
	scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den);
	scanf("%c",&op);
	printf("Entrer un opérateur (+/-*)(pas free): ");
	scanf("%c",&op);
	printf("\n");
	if((fa.den == 0) ||( fb.den==0)){
		printf("Pas de division par 0 !\nAu Revoir\nBisous");
		exit(EXIT_FAILURE);
	}
	switch (op) {
		case '+': addFraction(fa,fb); break;
		case '-': subFraction(fa,fb); break;
		case '*': mulFraction(fa,fb); break;
		case '/': divFraction(fa,fb); break;
	}
	return 0;
}

