#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

#define NB_MAX 100

//On suppose également dans l'exercice que l'expression en entrée est correcte

/* argv[i] est de type chaine de caractères mais l'exercice nous impose d'avoir une pile de type int.
 * On convertit donc argv[i] avec [0] pour mettre le résultat en char et enfin '0' pour avoir un int.
 */

int main(int argc, char *argv[])
{
       	pileInt pile = creerPile();
	int op1,op2;
        for(int i=1;i<=argc-1;i++){
		//printf("%s\n",argv[i]);
		if(((argv[i][0]-'0') <= 9) && ((argv[i][0]-'0') >= 0)){
			empiler(pile,argv[i][0]-'0');
		}
		else if(argv[i][0] == '+'){
			op1 = depiler(pile);
			op2 = depiler(pile);
			printf("%d + %d\n",op2,op1);
			empiler(pile,op2+op1);
		}
		else if(argv[i][0] == '-'){
			op1 = depiler(pile);
			op2 = depiler(pile);
			printf("%d - %d\n",op2,op1);
			empiler(pile,op2-op1);
		}
		else if(argv[i][0] == 'x'){
			op1 = depiler(pile);
			op2 = depiler(pile);
			printf("%d x %d\n",op2,op1);
			empiler(pile,op2 * op1);
		}
		else if(argv[i][0] == '/'){
			op1 = depiler(pile);
			op2 = depiler(pile);
			printf("%d / %d\n",op2,op1);
			empiler(pile,op2/op1);
		}
	}
	printf("Le résultat de l'expression est: %d\n",depiler(pile));
	return 0;
}
