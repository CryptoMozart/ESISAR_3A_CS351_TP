#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define X 100
int myStrlen(char *chaine){
	int i=0,cnt=0;
	while(chaine[i]!='\0'){
		cnt++;
		i++;
	}
	return cnt;
}

char *myStrcpy(char *dest, char *src,int taille){
	for(int i=0;i<taille;i++){
		dest[i] = src[i];
	}
	return dest;

}

void afficheEnHexadecimal(char *mot, int taille){
	for(int i=0;i<taille;i++){
		printf("0x%.2hhx ",mot[i]); 
/*On affiche 0x et le code hexadécimal grace à l'option .2hhx décrit dans 'man printf' .2 signifie que l'on affiche deux caractères */
	}
}

void afficheEnDecimal(char *mot, int taille){
	for(int i=0;i<taille;i++){
		printf("%d ",mot[i]); 
	}
}

char *mettreEnMajuscule(char *mot){
	int i=0;
	char *dest=malloc(sizeof(char)*myStrlen(mot));

/*L'année dernière nous avons vu l'allocation dynamique de mémoire, plus simple ici pour déclarer dest*/
	
	while(mot[i] != '\0'){
		if ((mot[i] >=0x61) && (mot[i] <= 0x7a))

/*D'après la table ASCII les caractères minuscule sont compris entre 0x61 et 0x7a*/
				
				dest[i] =(mot[i] - 0x20); 

/*Il y a une différence de 0x20 entre les caractères majuscule et minuscule d'après la table ASCII*/
		
		else 
			dest[i] = mot[i];
		i++;
	}
	return dest;
	free(dest);
			
/*De plus, on aurait pu utiliser simplement la fonction toupper(mot[i]) pour convertir les caractères grace à la librairie ctype.h*/ 
}

char *mettreEnMinuscule(char *mot){
	int i=0;
	char *dest=malloc(sizeof(char)*myStrlen(mot));
	while(mot[i]!='\0'){
		if ((mot[i]>=0x41) && (mot[i] <= 0x5a))
			dest[i] = mot[i] + 0x20;
		else
			dest[i] = mot[i];
		i++;
	}
	return dest;
	free(dest);
}

char *transformerMinMaj(char *mot){
	int i=0;
	char *dest=malloc(sizeof(char)*myStrlen(mot));
	while(mot[i] != '\0'){
		if ((mot[i]>=0x41) && (mot[i] <= 0x5a)) //si en Maj
				dest[i]=mot[i] + 0x20;
	else if((mot[i]>=0x61) && (mot[i]<=0x7a)) //si en Min
				dest[i]=mot[i] - 0x20;
		else 
			dest[i] = mot[i];
		i++;
	}
	return dest;
}

char *retournerMot(char *mot){
	int i=0;
	int taille = myStrlen(mot);
	char *dest=malloc(sizeof(char)*myStrlen(mot));
	while(mot[i] != '\0'){
		dest[taille-1-i]=mot[i];
		i++;
	}
	dest[taille]='\0';
	return dest;
}

int rechercherCaractereG(char *mot, char c){
	int i=0;
	while(mot[i] != '\0'){
		if(mot[i] == c)
			return i;
		i++;
	}
	return -1;
}

int rechercherCaractereD(char *mot, char c){
	/* Sans connaitre la taille de lu mot:
	int result = -1;
	int i=0;
	int cnt=0;
	do{
		if(mot[i]==c){
			result=i;
		}
		i++;
		cnt++;
	}while(mot[i]!='\0');
	return cnt-1-result;*/
	int result = rechercherCaractereG(retournerMot(mot),c);
	return result;
}

int estPalindrome(char *mot, int d, int f){
	int taille =f-d;
	int result = 1;
	char tab[taille+1];
	if(d <0 || f>=myStrlen(mot)){
		printf("Erreur indice");
		exit(EXIT_FAILURE);
	}
	for(int i=d;i<=f;i++){
		tab[i]=mot[i];
	}
	int j=0;
	while(j<=taille/2 && result){
		if(tab[j]!=tab[taille-j])
			result =0;
		j++;
	}
	return result;
}
	
int comparerChaine(char *ch1, char *ch2){
	int i=0;
	int result=0;
	do{
		if(ch1[i]<ch2[i])
			result = -1;
		else if(ch1[i]>ch2[i])
			result = 1;
		i++;
	}while(ch1[i]!='\0' && ch2[i]!='\0' && ch1[i-1]==ch2[i-1]);
	if(ch1[i] != '\0')
		result = -1;
	else if (ch2[i] != '\0')
		result = 1;
	return result;
}

int valeurDecimale(char *mot){
	/*int result=0;
	int nb_unite=myStrlen(mot);
	for(int i=0;i<nb_unite;i++){
		result+=(mot[nb_unite-i-1]-'0')*(pow(10,i));
	//On fait "-'0'" pour forcer la valeur int 
	return result*/
	int i =0;
	int result=0;
	while(mot[i]!='\0'){
		result *=10;
		result += (mot[i]-'0');
		i++;
	}
	return result;
}

void intVersChaine(int n,char *mot){
	int i=0,temp=n,taille_entier=0;
	while(temp>0){
		temp/=10;
		taille_entier++;
	}
	char save[taille_entier];
	while(n>0){
		save[taille_entier-i-1] = '0' + n%10;
		n/=10;
		i++;
	}
	for(int j=0;j<taille_entier;j++){
		mot[j]=save[j];
		//printf("%c ",mot[j]);
	}
	
}

/* int palin(char M[], int i){
	retour = 1;
	int j = 0;
	while((j<i) && (M[j] == M[i-1]){
		j++;
		i--;
	}
	if (M[j] != M[i-1]){
		retour = -1;
	}
	return retour;
} */