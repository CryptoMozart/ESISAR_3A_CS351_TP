#include <stdio.h>
#include <stdlib.h>

int lireDonnees(char nomFichier[], int T[]){
	FILE *fichierLecture = fopen(nomFichier, "r");
	if (fichierLecture == NULL) {
		perror("Erreur d'ouverture du Fichier");
		exit(EXIT_FAILURE);
	}
	int nombre;
	int cnt=0;
	while(!feof(fichierLecture)){
		fscanf(fichierLecture,"%d",&nombre);
		/*printf("%d ",nombre);*/
		T[cnt] = nombre;
		cnt++;
	}
	fclose(fichierLecture);
	return cnt-1;
}

void afficherTableau(int T[], int nb){
	printf("Le contenu du tableau est: ");
	for(int i=0;i<nb;i++)
		printf("%d ",T[i]);
}
void triABulles(int T[], int nb){
	int i = 0, j,c;
	do{
		for(j = 0; j < nb-1-i; j++){
			if(T[j] > T[j+1]){
				c = T[j];
				T[j] = T[j+1];
				T[j+1] = c;
			}
		}
		i++;
	}while(!estTrie(T,nb));
	afficherTableau(T,nb);
}


int estTrie(int T[], int nb){
	int i, sorted;
	for(i = 0; i < nb-1; i++){
		sorted = T[i] <= T[i+1];
		if(!sorted){
			break;
		}
	}
	return sorted;
}

void enregistrerDonnees(char nomFichier[], int T[], int nb){
	FILE *fichierEcriture = fopen(nomFichier,"w");
	if(fichierEcriture == NULL){
		printf("Erreur Fichier");
		exit(EXIT_FAILURE);
	}
	for(int i=0;i<nb;i++)
		fprintf(fichierEcriture,"%d ",T[i]);
}

