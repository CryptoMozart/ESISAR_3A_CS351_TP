#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
/*On créer une foncion à part pour inverser les deux valeurs. Cela rend le code plus lisible */

void drapeau(int *T,int taille){
    int b=0,w=0,r=taille-1;
    while(w <= r){
        if(T[w] >= 3 && T[w] <=6){ /*Traduction de la couleur: blanc */
            w++;
        }
        else if(T[w]<3){ /*Couleur bleu */
            swap(&T[b],&T[w]);
            b++;
            w++;
        }
        else { /*rouge*/
            swap(&T[w],&T[r]);
            r--;
        }

    }
}
/*Ici, on utilise les pointeurs pour le tableau qui est un pointeur de tableau de int */

int main(){
    int T[]={5,8,1,4,3,9,2,7,3,8,1,4,5,3,8};
    drapeau(T,15);
    for(int i=0;i<15;i++){
        printf("%d ",T[i]);
    }
    /*int a = 8, b =23;
    swap (&a,&b);
    printf ("%d  %d",a,b); 
	Pour tester la fonction swap
	*/
}
