#include <stdio.h>
#include <stdlib.h>
#include "Fraction.h"

int pgcd(int a, int b){
        if (b==0){
                return a;
        }
        int r;
        while(b!=0){
                r = a % b;
                a = b;
                b = r;
        }
        return a;
}

void addFraction(Fraction f1, Fraction f2){
	Fraction result;
	if(f1.den == f2.den){
		result.den = f1.den;
		result.num = f1.num + f2.num;
	}
	else {
		result.num = (f2.den)*(f1.num) + (f1.den)*(f2.num);
		result.den = (f1.den)*(f2.den);
	}
	int mon_pgcd = pgcd(result.num,result.den);
	result.num=(result.num)/mon_pgcd;
	result.den=(result.den)/mon_pgcd;
	printf("Le résultat est: %d / %d\n",result.num,result.den);
}

void subFraction(Fraction f1, Fraction f2){
	Fraction result;
	if(f1.den == f2.den){
		result.den = f1.den;
		result.num = f1.num - f2.num;
	}
	else {
		result.num = (f2.den)*(f1.num) - (f1.den)*(f2.num);
		result.den = (f1.den)*(f2.den);
	}
	int mon_pgcd = pgcd(result.num,result.den);
	result.num=(result.num)/mon_pgcd;
	result.den=(result.den)/mon_pgcd;
	printf("Le résultat est: %d / %d\n",result.num,result.den);
}

void mulFraction(Fraction f1, Fraction f2){
	Fraction result;
	result.num = (f2.num)*(f1.num);
	result.den = (f1.den)*(f2.den);
	int mon_pgcd = pgcd(result.num,result.den);
	result.num=(result.num)/mon_pgcd;
	result.den=(result.den)/mon_pgcd;
	printf("Le résultat est: %d / %d\n",result.num,result.den);
}

void divFraction(Fraction f1, Fraction f2){
	int temp;
	if(f2.num == 0){
		printf("Error Division Par 0\n Bisous\n");
		exit(EXIT_FAILURE);
	}
	else {
		temp = f2.den;
		f2.den=f2.num;
		f2.num=temp;
		mulFraction(f1,f2);
	}
}
