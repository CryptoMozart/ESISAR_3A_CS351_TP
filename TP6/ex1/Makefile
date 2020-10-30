all: main.o pile.o
	gcc -Wall -g pile.o main.o -o main
main.o: main.c
	gcc -Wall -g -c main.c -o main.o
pile.o: pile.c pile.h
	gcc -Wall -g -c pile.c -o pile.o
clean: 
	rm *o

