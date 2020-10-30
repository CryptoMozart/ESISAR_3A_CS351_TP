all: main.o pile.o
	gcc -Wall pile.o main.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
pile.o: pile.c pile.h
	gcc -Wall -c pile.c -o pile.o
clean: 
	rm *o

