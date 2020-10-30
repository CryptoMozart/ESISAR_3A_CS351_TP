all: main.o chaine.o
	gcc -Wall main.o chaine.o -o main -lm
main.o: main.c
	gcc -Wall -c main.c -o main.o
chaine.o: chaine.c chaine.h
	gcc -Wall -c chaine.c -o chaine.o
clean: 
	rm *o
