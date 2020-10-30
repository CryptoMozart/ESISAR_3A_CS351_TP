#include <stdio.h>
#include <stdlib.h>

int main() {
	char lettre;
	printf("Donner une note entre A et E: ");
	scanf ("%c",&lettre); 
	if (lettre == 'A') {
		printf("Tres bien\n");
	}
	else { 
		if (lettre == 'B') {
			printf("Bien\n");
		} else {
			if (lettre == 'C') {
				printf("Assez bien\n");
			} else {
				if ( lettre == 'D') {
					printf("Passable\n");
				} else {
					if (lettre == 'E'){
						printf("Insuffisant\n");}
				}
			}
		}
	}
	return 0;
}
		
