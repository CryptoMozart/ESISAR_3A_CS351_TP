#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"
#include "dessine.h"

int main(){
	gr_inits_w(1000000,1000000,"Carre");
	/*dessineCarre(500,500,100);
	dessineCarreDiagonale(700,700,100);
	dessineMosaique(100,200,100,4,8); */
	dessineMosaiqueAvecSouris(100,2,7);
	cliquer();
}
