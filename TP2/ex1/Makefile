OBJECTS = main.o jeux_multi.o

all: $(OBJECTS)
	gcc $(OBJECTS) -o Jeumulti
main.o: main.c jeux_multi.h
	gcc -Wall -c main.c
jeux_multi.o: jeux_multi.c jeux_multi.h
	gcc -Wall -c jeux_multi.c
clean: 
	rm *.o
