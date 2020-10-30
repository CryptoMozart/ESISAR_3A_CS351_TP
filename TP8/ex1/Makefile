all: liste.o main.o
	gcc -Wall -g *.o -o main
main.o: main.c
	gcc -Wall -c main.c 
liste.o: liste.c liste.h
	gcc -Wall -c liste.c
clean: 
	rm *.o