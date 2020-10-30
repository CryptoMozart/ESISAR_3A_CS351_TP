#include <stdio.h>
int main(){
	int n;
	int i = 0;
	int somme = 0;
	printf("Entre un entier: ");
	scanf("%d",&n);
	while (i<=n){
		somme += i;
		i++;
	}
	printf("la somme = %d\n",somme);
	return 0;
}
