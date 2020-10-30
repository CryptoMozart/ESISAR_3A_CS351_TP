#include <stdio.h>
#include <stdlib.h>

void JeuMulti(){
	int n=0;
	int result=0;
	while(n<2||n>9) { 
		printf("Rentre une valeur entre 2 et 9: ");
		scanf("%d",&n);
		if(n<2 || n>9)printf("\nSais-tu lire ?\n");
	}
	printf("Très bien: commençons ta lesson avec la table de %d jeune padawan \n",n);
	int i=1;
	while((i<=10) && (result == (i-1)*n)){
		printf("\n%d x %d = ",i,n);
		scanf("%d",&result);
		i++;
	}
	if(result != ((i-1)*n))printf("Nul ! c'était seulement la table de %d ! La bonne réponse était %d\n",n,((i-1)*n));
	else printf("Chapeau l'artiste !");
}

void JeuMultiPoints(){
 	int n=0;
    int result;
    while(n<2||n>9) { 
        printf("Rentre une valeur entre 2 et 9: ");
        scanf("%d",&n);
        if(n<2 || n>9) printf("\nSais-tu lire ?\n");
    }
    printf("Très bien: commençons ta lesson avec la table de %d jeune padawan \n",n);
    int i=1;
	int compteur = 0;
    while(i<=10){
        printf("\n%d x %d = ",i,n);
        scanf("%d",&result);
		if(result != i*n) compteur++;
        i++;
    }    
    printf("Bon... tu as fait %d erreur(s)\n",compteur);
	if(compteur == 2 || compteur == 1) printf("Tu as des effort à faire\n");
	if(compteur == 0) printf("Bravo ! Tu sais compter\n");
	if(compteur > 2) printf("Retroune en primaire\n");
}


/* Pour tester la fonction JeuMulti, on rentre des valeurs non comprises entre 2 et 9. On peut donc voir si le programme nous redemande une saisie. 
 * On essaie ensuite de répondre bon à toute la table de multiplication pour voir si le programme s'exectue bien jusqu'à la fin.
 * Ensuite, on répond faux pour voir si le programme corrige l'erreur et s'arrête.
 *
 * Pour la fonction JeuMultiPoints on fait toute la table de multiplication en faisait 2 erreurs ou 1 erreur, 0 erreur ou plus de 2 erreurs. On peut ainsi vérifier
 * si il y des problèmes avec les indices
 */
