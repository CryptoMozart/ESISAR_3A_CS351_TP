all: main.o matrice.o
	gcc -Wall main.o matrice.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
matrice.o: matrice.c
	gcc -Wall -c matrice.c -o matrice.o
clean: 
	rm *o
