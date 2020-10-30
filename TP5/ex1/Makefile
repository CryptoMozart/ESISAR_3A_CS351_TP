all: main.o fraction.o
	gcc -Wall main.o fraction.o -o main
main.o: main.c
	gcc -Wall -c main.c -o main.o
fraction.o: Fraction.c Fraction.h
	gcc -Wall -c Fraction.c -o fraction.o
clean: 
	rm *o
