#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"
#include "fractale.h"

int main(){
	int n = 13;
	gr_inits_w(2000,2000,"Fractale");
	afficher_fractale(n);
	cliquer();
	gr_close();
}