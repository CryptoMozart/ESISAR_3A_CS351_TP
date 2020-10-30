#include <stdio.h>
int main() {
	int n;
	int i = 0;
	int somme = 0;
	scanf("%d",&n);
	do {
		somme += i;
		i++;}
		while(i<=n);
	printf("le somme vaut %d",somme);
	return 0;
	}

/* Question 2: Si l'on rentre une valeur négative ca renvoie 0. */
