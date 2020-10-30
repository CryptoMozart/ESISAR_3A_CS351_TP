#include <stdio.h>
int pgcd(int a, int b){
	if (b==0){
		return a;
	}
	int r;
	/*On effectue l'algorithme d'Euclide */
	while(b!=0){ 
		r = a % b;
		a = b;
		b = r; }
	return a;
}

int main(){
	printf("Entre un nombre: ");
	int a,b;
	scanf("%d",&a);
	printf("Entre un autre nombre: ");
	scanf("%d",&b);
	printf("Le PGCD de %d et %d vaut %d\n",a,b,pgcd(a,b));
	return 0;
}
