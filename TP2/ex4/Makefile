OPTION = -lX11 -L/usrX11R6/lib
all: main.o dessine.o graphlib.o 
	gcc main.o dessine.o graphlib.o -o main $(OPTION)
main.o: main.c 
	gcc -Wall -c main.c -o main.o
graphlib.o: graphlib.c graphlib.h
	gcc -Wall $(OPTION) -c graphlib.c -o graphlib.o
dessine.o: dessine.c
	gcc -Wall $(OPTION) -c dessine.c -o dessine.o
clean: 
	rm *.o
