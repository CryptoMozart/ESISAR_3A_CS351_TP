#include <stdio.h>

int main() {
int i = 2, j = 3, k = 4;
printf("%d\n""%d\n""%d\n",(i&j),(i|1),(k|j));
if ((i & k) || (i & j))
	printf("ok");
return (0);
}

/* On utiliser ici les opérateurs et logique (&) et ou logique (|).
 * le programme original renvoie une segmentation false du au premier printf.
 * le programme affiche en premier les opérations i&k, i|1 et k|j.
 * comme i = 2,j=3 et k=4, on a i&j -> 10 & 11 <=> 10 -> 2
 * 				i|1 -> 10 | 01 <=> 11 -> 3
 * 				k|j -> 100 | 011 <=> 111 -> 7
 * On teste ensuite si (i&k) || (i&j) est vrai. c'est à dire (i&k) != 0 ou (i&j) != 0.
 *
 */
