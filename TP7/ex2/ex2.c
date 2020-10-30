#include <stdio.h>
#include <stdlib.h>

void incr(int *a) {
*a = (*a) + 1 ;
}

int main(){
    int x = 5;
    incr(&x);
    printf("%d", x); /* ce programme affiche 6 */
    return 0 ;
}

/*Avec le debogeur,nous placons un breakpoint à la ligne 9 (int x = 5;). Avec la commande nexti, nous rentrons dans la fonction incr
et observons l'incrémentation de x par passage par adresse. Avec ce système, nous ponvons incrémenter n'importe type. Pour scanf, c'est le même principe 
car la fonction est par passage par adresse */