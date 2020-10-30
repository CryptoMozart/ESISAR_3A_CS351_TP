#include <stdio.h>
int main() {
	char lettre;
	printf("Donner une lettre entre A et E: ");
	scanf("%c",&lettre);
	switch(lettre) {
		case 'A' :printf("Tres bien\n"); break;
		case 'B' :printf("Bien\n"); break;
		case 'C' :printf("Assez bien\n"); break;
		case 'D' :printf("Passable\n"); break;
		case 'E' :printf("Insuffisant\n"); break;
	}
	return 0;
}
