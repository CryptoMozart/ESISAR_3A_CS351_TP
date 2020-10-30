#include <stdio.h>

int fibo(int n){
	int u0=0;
	int u1=1;
	int fibo;
	int i=0;
	if(n>=2){
		for(i=2; i<=n;i++){
			fibo = u1 + u0;
			u0 = u1;
			u1 = fibo;
		}
	}else { fibo = n;
	}
	return fibo;
	 }
int main(){
	int n;
	printf("Entre un nombre: ");
	scanf("%d",&n);
	printf("fibo de %d vaut %d\n",n,fibo(n));
}

/*Pour bien tester la fonction, l'utilisateur doit rentrer des valeurs positives à partir de 0 pour tester le cas où n=0 et 1 et après pour rentrer dans la boucle for. */
