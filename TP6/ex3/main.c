#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"
#include "tourHanoi.h"
int main(){
	int n = 18;
	char A='A',B='B',C='C';
	hanoi(n,A,B,C);
    //affichage(n);
    //cliquer();
	//gr_close();
	return 0;
}
