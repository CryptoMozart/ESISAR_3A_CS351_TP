#include <stdio.h>

int main(int argc, char * argv[]) {
	int i;
	printf("Nombre d'arguments : %d\n", argc);		
	for(i = argc-1 ; i > 0 ; i--) {
	printf("%s\n", argv[i]);
	}
	return 0;
}

/* Ce programme donne le nombre d'arguments passés par l'utilisateur (int argc). On compte en plus que ./prog est un argument (argc[0]). 
 * Ensuite, le programme affiche les arguments dans l'ordre décroisant (sans afficher le dernier).
