all: main.o listeTableau.o
	gcc -Wall listeTableau.o main.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
listeTableau.o: listeTableau.c listeTableau.h
	gcc -Wall -c listeTableau.c -o listeTableau.o
clean: 
	rm *o
