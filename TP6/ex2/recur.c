#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromeRecur(char *mot, int n){
	if(n==1 || n==0)
		return 1;
	else{
		if(mot[0]==mot[n-1])
			return palindromeRecur(&mot[1],n-2);
		else {
			return 0;
		}
	}
}

int fibonacci(int n){
	if(n == 0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

int pgcd(int a, int b){
	if(b==0)
		return a;
	else
		return pgcd(b,a%b);
}

int main(){
	char mot[] = "ouiiuo";
	int taille = strlen(mot);
	int a=42,b=2;
	int n = 5;
	printf("est Palindrome ? %d\n",palindromeRecur(mot,taille));
	printf("Fibonacci de %d est %d\n",n,fibonacci(n));
	printf("Pgcd de %d %d est %d\n",a,b,pgcd(a,b));
}
