#include <stdio.h>

int main() {
	char lettre;	
       	printf("Donner une note entre A et E: ");
        scanf ("%c",&lettre); 
        if (lettre == 'A') {
                printf("Tres bien\n");
        }
        if (lettre == 'B') {
                printf("Bien\n");
	}
        if (lettre == 'C') {
          	 printf("Assez bien\n");
	}
        if ( lettre == 'D') {
                 printf("Passable\n");
	}
        if (lettre == 'E'){
                 printf("Insuffisant\n");
	}
        return 0;
}
