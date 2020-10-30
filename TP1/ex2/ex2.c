#include <stdio.h>
int bissextile(int annee){
	if( annee%4 == 0 ||( annee%400 == 0 && annee%100 == 0)){
		return 1;
	} else {
		return 0;
		}
}

int main(){
	int annee;
	printf("Entre une annee: ");
	scanf("%d",&annee);
	if (bissextile(annee) == 1) {
		printf("L'annee %d est bissextile",annee);
	}else{
		printf("L'année %d n'est pas bissextile",annee);
	}

	return 0;
}
