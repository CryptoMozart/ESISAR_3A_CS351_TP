OPTION = -lX11 -L/usrX11R6/lib
all: main.o fractale.o graphlib.o
	gcc main.o fractale.o graphlib.o -o main $(OPTION) 
main.o: main.c 
	gcc -Wall -c main.c -o main.o
graphlib.o: graphlib.c graphlib.h
	gcc -Wall $(OPTION) -c graphlib.c -o graphlib.o
fractale.o: fractale.c fractale.h
	gcc -Wall $(OPTION) -c fractale.c -o fractale.o
clean: 
	rm *.o
