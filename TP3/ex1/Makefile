all: main.o notes.o
	gcc -Wall -lm main.o notes.o -o main
main.o: main.c 
	gcc -Wall -c main.c -o main.o
notes.o: notes.c
	gcc -Wall -c notes.c -o notes.o
clean: 
	rm *o
