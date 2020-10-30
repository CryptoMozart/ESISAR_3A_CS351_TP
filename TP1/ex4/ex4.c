#include <stdio.h>

int main() {

int i, j, k, l;

i = j = k = l = 0;

while(i < 9) {
printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",
i++, ++j, k--, --l);
}

printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);

return 0;

}

/* Réponse: i++ incrémente i de 1 mais renvoie la valeur initiale, tandis que ++j incrémente j de 1 et renvoie la nouvelle valeur
 * idem pour i-- et --j mais en décrémentant
 */
