#include <stdio.h>

long factorielle(int x){
	long facto=1;
	while(x>1){
		 facto = facto*x;
		 x--;
	}	
	return facto;
}

long factorielle_bis(int m){
	long facto=1,n=1;
	while(facto<=m){
		facto = facto * n;
		n++;
		}
	return n-1;
}
int main(){
	int n;
	printf("Entre un nombre: ");
	scanf("%d",&n);
	printf("résultat de factorielle: %ld\nrésultat de factorielle_bis: %ld\n",factorielle(n),factorielle_bis(n));
}
