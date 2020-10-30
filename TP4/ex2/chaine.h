#include <stdio.h>

int myStrlen(char *chaine);
char *myStrcpy(char *dest, char *src, int taille);
void afficheEnHexadecimal(char *mot,int taille);
void afficheEnDecimal(char *mot, int taille);
char *mettreEnMajuscule(char *mot);
char *mettreEnMinuscule(char *mot);
char *transformerMinMaj(char *mot);
char *retournerMot(char *mot);
int rechercherCaractereG(char *mot, char c);
int rechercherCaractereD(char *mot, char c);
int estPalindrome(char *mot, int d, int f);
int comparerChaine(char *ch1, char *ch2);
int valeurDecimale(char *mot);
void intVersChaine(int n,char *mot);

