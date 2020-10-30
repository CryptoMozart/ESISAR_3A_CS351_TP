OPTION = -lX11 -L/usrX11R6/lib
all: main.o tourHanoi.o graphlib.o
	gcc main.o tourHanoi.o graphlib.o -o main $(OPTION)
main.o: main.c 
	gcc -Wall -c main.c -o main.o
graphlib.o: graphlib.c graphlib.h
	gcc -Wall $(OPTION) -c graphlib.c -o graphlib.o
tourHanoi.o: tourHanoi.c tourHanoi.h
	gcc -Wall $(OPTION) -c tourHanoi.c -o tourHanoi.o
clean: 
	rm *.o
