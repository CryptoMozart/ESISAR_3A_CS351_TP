all: main.o fichier.o
	gcc -Wall main.o fichier.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
fichier.o: fichier.c fichier.h
	gcc -Wall -c fichier.c -o fichier.o
clean: 
	rm *o
