all: main.o mathematiques.o
	gcc -Wall  main.o mathematiques.o -o main
main.o: main.c 
	gcc -Wall -c main.c -o main.o
mathematiques.o: mathematiques.c
	gcc -Wall -c mathematiques.c -o mathematiques.o
clean: 
	rm *.o
