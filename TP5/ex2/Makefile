all: main.o polynome.o
	gcc -Wall main.o polynome.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
polynome.o: polynome.c polynome.h
	gcc -Wall -c polynome.c -o polynome.o
clean:
	rm *o
