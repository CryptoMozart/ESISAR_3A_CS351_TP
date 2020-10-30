#include <stdio.h>
#include <stdlib.h>
#include "polynome.h"

#define NB_MAX 100
int main(){
	Polynome P1,P2,res;
  	P1[0].degre = 6;
 	P1[0].coeff = 2;
 	P1[1].degre = 3;
 	P1[1].coeff = 1;
  	P1[2].degre = 2;
 	P1[2].coeff = 2;
 	P1[3].degre = -1;
 	P1[3].coeff = 0;
 	P2[0].degre = 5;
	P2[0].coeff = 4;
 	P2[1].degre = 3;
    P2[1].coeff = 7;
  	P2[2].degre = 1;
 	P2[2].coeff = 2;
 	P2[3].degre = -1;
 	P2[3].coeff = 0;
	addPolynomes(P1,P2,res);
	int degres = 0;
	while(res[degres].degre != -1){
    		printf("%.1f x^%d\n", res[degres].coeff, res[degres].degre);
    		degres++;
  	}
	return(0);
}
