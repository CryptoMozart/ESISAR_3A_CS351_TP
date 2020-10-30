all: matrice_creuse.o main.o
	gcc -Wall *.o -o main
main.o: main.c
	gcc -Wall -c main.c 
matrice_creuse.o: matrice_creuse.c matrice_creuse.h
	gcc -Wall -c matrice_creuse.c
clean: 
	rm *.o main