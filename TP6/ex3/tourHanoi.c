#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"
#include "tourHanoi.h"


#define pos_tour_A_x 500
#define pos_tour_A_y 600
#define pos_tour_B_x 900
#define pos_tour_C_x 1300
#define pos_tour_B_y pos_tour_A_y
#define pos_tour_C_y pos_tour_A_y



void hanoi(int n,char A,char B, char C){
	if(n==1)
		printf("%c -> %c\n",A,C);
	else {
		hanoi(n-1,A,C,B);
		hanoi(1,A,B,C);
		hanoi(n-1,B,A,C);
	}
}

/*void affichage(int n){
	gr_inits_w(2000,1000,"Tour de Hanoi");
	write_gr(pos_tour_A_x,pos_tour_A_y,"Tour A");
	write_gr(pos_tour_B_x,pos_tour_B_y,"Tour B");
	write_gr(pos_tour_C_x,pos_tour_C_y,"Tour C");
	line(pos_tour_A_x+15,pos_tour_A_y - 50,pos_tour_A_x +15,pos_tour_A_y-300);
	line(pos_tour_B_x+15,pos_tour_B_y - 50,pos_tour_B_x +15,pos_tour_B_y-300);
	line(pos_tour_C_x+15,pos_tour_C_y - 50,pos_tour_C_x +15,pos_tour_C_y-300);
	int i=0;
	while(i!=n){
		circle(pos_tour_A_x+15,pos_tour_A_y-60-i*30,40-2*i);
		i++;
	}
	
}*/
