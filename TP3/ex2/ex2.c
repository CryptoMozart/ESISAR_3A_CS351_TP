#include <stdio.h>
#include <stdlib.h>

float valeurPolynome(float A[], int N, float x0){
	float result=A[N-1];
	for(int i=N-1;i>0;i--){
		result *= x0;
		result +=A[i-1];
	}
	return result;
}


int main(){
	int N=3;
	float A[] = {1,2,2,1};
	float x0 = 2;
	printf("%.2f",valeurPolynome(A,N,x0));
}
