#include <stdio.h>
#include "matrice_creuse.h"

void creervaleurColonne(int elem, int j, Ligne *liste) 
{ 
    Colonne temp, c; 
  
    // Création d'un nouvel élément
    temp = malloc(sizeof(struct colonne)); 
    temp->index_colonne = j; 
    temp->valeur = elem; 
    temp->suivant = NULL; 
  
    // Insertion en tête
    if ((*liste) -> colonne_suivante ==NULL) 
        (*liste)->colonne_suivante = temp; 
    else
    { 
        // On se place à la fin de la liste colonne 
        c = (*liste)->colonne_suivante; 
        while(c->suivant != NULL) 
            c = c->suivant; 
        c->suivant = temp; 
    } 
} 

void creerMatriceCreuse(Tete *debut, int ligne, int colonne, int matrice[L][C]) 
{ 
	//On crée la "tete" de la matrice qui va contenir le debut de la matrice ainsi que le nombre de colonne et de ligne
	Tete en_tete = malloc(sizeof(struct tete));
	en_tete->nb_ligne = ligne;
	en_tete->nb_colonne = colonne;
	en_tete->suivant = NULL;
	
	*debut = en_tete;

    // Comme une matrice classique, on parcourt la matrice en commencant par les lignes 
    for (int i = 0; i < ligne; i++) 
    { 
        Ligne l, temp; 
  
        // allocation mémoire et création d'une matrice creuse 
        l = malloc(sizeof(struct ligne)); 
        l-> index_ligne = i; 
        l->suivant = NULL; 
        l->colonne_suivante = NULL; 
        if (i==0) 
            en_tete->suivant = l; 
        else
        { 
            //on insère la ligne à la fin
            temp = en_tete -> suivant; 
            while (temp->suivant != NULL) 
                temp = temp->suivant; 
            temp->suivant = l; 
        } 

        //on parcourt maintenant la colonne
        for (int j = 0; j < colonne; j++) 
        { 
            if (matrice[i][j] != 0) 
            { 
                creervaleurColonne(matrice[i][j], j, &l); 
            } 
        } 
    } 
}

void afficherMatriceCreuse(Tete *debut) 
{ 
    Colonne c; 
    Ligne l; 
	Tete en_tete = *debut; 
	
	int ligne =	en_tete->nb_ligne;
	int colonne = en_tete->nb_colonne;
	
	l = en_tete->suivant;
  
	for(int i = 0; i<ligne; i++){
		c = l->colonne_suivante;
		for(int j = 0; j<colonne; j++){
			if ((l->colonne_suivante != NULL) && (c != NULL) && (j == c->index_colonne)){
				printf("%d  ",c->valeur);
                c=c->suivant;
			}
			else{	
				printf("0  ");
			}
		}
		l =l->suivant;
		printf("\n");
	}
} 

void somme (Tete *m1, Tete *m2, Tete *res)
{
	if( ((*m1)->nb_colonne == (*m2)->nb_colonne) && ((*m1)->nb_ligne == (*m2)->nb_ligne) ){
		Tete en_tete = malloc(sizeof(struct tete));
		en_tete->nb_ligne = (*m1)->nb_ligne;
		en_tete->nb_colonne = (*m1)->nb_colonne;
		en_tete->suivant = NULL;
	
		*res = en_tete;
		
		Colonne c1=NULL; 
		Ligne l1 = (*m1)->suivant; 
		Colonne c2=NULL;
		Ligne l2 = (*m2)->suivant;
		for (int i = 0; i < (*m1)->nb_ligne; i++){ 
			Ligne l, temp; 
			
			c1 = l1->colonne_suivante;
			c2 = l2->colonne_suivante;
 
			l = malloc(sizeof(struct ligne)); 
			l-> index_ligne = i; 
			l->suivant = NULL; 
			l->colonne_suivante = NULL; 
			if (i==0){
				en_tete->suivant = l; 
            }
			else{ 
				temp = en_tete->suivant; 
				while (temp->suivant != NULL) 
					temp = temp->suivant; 
				temp->suivant = l; 
			} 

			for (int j = 0; j < (*m1)->nb_colonne; j++) { 
				if ((l1->colonne_suivante != NULL) && (l2->colonne_suivante != NULL)){   //Les deux lignes des deux matrices ne sont pas vides  (est vide = ne contient que des zeros)
					if ((c1 != NULL) && (c2 != NULL)){                                //Il reste encore des colonnes non vide dans les deux matrices
						if ((c1->index_colonne == c2->index_colonne) && (j == c1->index_colonne)){     //Meme meme colonne pour les deux matrices
							if (c1->valeur + c2->valeur != 0){ 
								creervaleurColonne(c1->valeur + c2->valeur, j, &l);
							}
							c1 = c1->suivant;
							c2 = c2->suivant;
						}
						else if (j == c1->index_colonne){									//Meme colonne pour la premiere matrice mais pas la deuxieme
							creervaleurColonne(c1->valeur, j, &l);
							c1 = c1->suivant;
						}
						else if (j == c2->index_colonne){									//Meme colonne pour la deuxieme matrice mais pas la premiere
							creervaleurColonne(c2->valeur, j, &l);
							c2 = c2->suivant;
						}
					}
					else if (c1 != NULL){                 //Il n'y a plus de colonne non vide dans la deuxieme matrice mais il en reste dans la premiere
						if (j == c1->index_colonne){
							creervaleurColonne(c1->valeur, j, &l);
							c1 = c1->suivant;
						}
					}
					else if (c2 != NULL){                 //Il n'y a plus de colonne non vide dans la premiere matrice mais il en reste dans la deuxieme
						if (j == c2->index_colonne){
							creervaleurColonne(c2->valeur, j, &l);
							c2 = c2->suivant;
						}
					}
				}
				else if (l1->colonne_suivante != NULL){  //La ligne de la deuxième matrice est vide mais pas celle de la premiere
					if (c1 != NULL){
						if (j == c1->index_colonne){
							creervaleurColonne(c1->valeur, j, &l);
							c1 = c1->suivant;
						}
					}
				}
				else if (l2->colonne_suivante != NULL){  //La ligne de la premiere matrice est vide mais pas celle de la deuxieme
					if (c2 != NULL){
						if (j == c2->index_colonne){
							creervaleurColonne(c2->valeur, j, &l);
							c2 = c2->suivant;
						}
					}
				}
            }
			l1 = l1->suivant;
			l2 = l2->suivant;
        }
    }
	else{
		printf("Les deux matrices ne sont pas de même taille");
    }
}
	
void produit (Tete *m1, Tete *m2, Tete *res){
	
	if((*m1)->nb_colonne == (*m2)->nb_ligne){
		Tete en_tete = malloc(sizeof(struct tete));
		en_tete->nb_ligne = (*m1)->nb_ligne;
		en_tete->nb_colonne = (*m2)->nb_colonne;
		en_tete->suivant = NULL;
	
		*res = en_tete;
		
		Colonne c1=NULL; 
		Ligne l1 = (*m1)->suivant; 
		Colonne c2=NULL;
		Ligne l2;
		for (int i = 0; i < (*m1)->nb_ligne; i++){ 
			Ligne l, temp; 
 
			l = malloc(sizeof(struct ligne)); 
			l-> index_ligne = i; 
			l->suivant = NULL; 
			l->colonne_suivante = NULL; 
			if (i==0){
				en_tete->suivant = l; 
            }
			else{ 
				temp = en_tete->suivant; 
				while (temp->suivant != NULL) 
					temp = temp->suivant; 
				temp->suivant = l; 
			} 

			for (int j = 0; j < (*m2)->nb_colonne; j++){ 
				int result = 0;	
				c1 = l1->colonne_suivante;
				l2 = (*m2)->suivant;
				for(int k = 0; k<(*m1)->nb_colonne; k++){
					c2 = l2->colonne_suivante;
					while((c2 != NULL) && (c2->index_colonne != j)){			//c2=m2[k][j] si m2[k][j] n'est pas nulle
						c2 = c2->suivant;
					}
					if (l1->colonne_suivante != NULL){   
						if ((c1 != NULL) && (c2 != NULL) && (c1->index_colonne == l2->index_ligne) && (k == c1->index_colonne)){                      
							result += (c1->valeur)*(c2->valeur);					//result += m1[i][k]*m2[k][j] si c1 et c2 ne sont pas nulles
							c1 = c1->suivant;	
						}
						else if (c1 != NULL){                 //result += m1[i][k] * 0 si c1 n'est pas nulle
							if (c1->index_colonne == k){
								c1 = c1->suivant;
							}	
						}	
					}
					l2 = l2->suivant;
				}
				creervaleurColonne(result,j,&l);
			}
			l1 = l1->suivant;
		}

	}
	else{ 
		printf("Pas les bonnes dimensions");
	}
}