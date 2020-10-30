 #include <stdio.h>
 #include "matrice_creuse.h"

 int main(){
     int matrice1[L][C] = 
    { 
        {-1 , 0 ,-1 , 0 , -1 }, 
        {0 , -1 , 0 , -1 , 0 }, 
        {-1 , 0 , -1 , 0 , -1 }, 
        {0 , -1 , 0 , -1 , 0 }, 
    };

	int matrice2[L][C] = 
      { 
        {1 , 0 ,0 , 8 , 0 }, 
        {0 , 0 , 0 , 0 , 0 }, 
        {0 , 0 , 5 , 0 , 0 }, 
        {0 , 0 , -5 , 9 , 0 }, 
    };

    int matrice3[5][5] ={{1 , 0 ,0 , 0 , 0 }, 
                       {0 , 1 , 0 , 0 , 0 }, 
                       {0 , 0 , 1 , 0 , 0 }, 
                       {0 , 0 , 0 , 1 , 0 },
                       {0 , 0 , 0 , 0 , 1 },
            };
	
  
    Tete debut1 = NULL;
	Tete debut2 = NULL; 
    Tete debut3 = NULL;
  
    creerMatriceCreuse(&debut1, L, C, matrice1);
    afficherMatriceCreuse(&debut1); 
	printf("\n");
	creerMatriceCreuse(&debut2, L, C, matrice2);
	afficherMatriceCreuse(&debut2); 
    printf("\n");
	Tete res = NULL;
    Tete res2 = NULL;

	somme (&debut1, &debut2, &res);
	afficherMatriceCreuse(&res); 
    printf("\n");
    creerMatriceCreuse(&debut3,5,5, matrice3);
    afficherMatriceCreuse(&debut3);
    
    produit(&debut1,&debut3,&res2);
    afficherMatriceCreuse(&res2);
    //en multipliant par la matrice unité, on retrouve bien la première matrice donc le produit a fonctionné

    free(debut1);
    free(debut2);
    free(debut3);
    free(res);
    free(res2);
    return 0;
 }