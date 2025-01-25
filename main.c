#include <stdio.h>
#include <stdlib.h>

#include "header.h"



int main(int argc, char *argv[]) {
		int var = 0;
		int end = 0;
		
		do{
		system("cls");	
		printf("Bienvenue mon cher\n");
		printf("Veuillez choisir une option pour voir la correction des exercices\n");
			printf("*******************************************\n 1-Exercice 1:Greeting\n 2-Exercice 2\n 3-Exercice 3\n 4-Exercice 4\n 5-Exercice 5\n 6-Exercice 6\n 7-Exercice 16\n 8-Exercice 17\n Veuillez choisir une option.");
		scanf("%d", &var);
		
		
		switch(var){
			case 1:
				greating();
				break;
			case 2:
				inverse();
				break;
			case 3:
				
				printf("\n \n Corrig? exercice 3 \n \n");
				double prod = produit();
				printf("\n Voici le produit: %.3f", prod);
				break;
			case 4:
				
				printf("\n \n Corrig? exercice 4 \n \n");
				printf("Entrer un nombre quelconque pour verifier sa parité \n");
				int a = 0;
				scanf("%d",&a);
				parity(a);
				break;
			case 5:
				printf("\n \n Corrig? exercice 5 \n \n");
				int b = 0;
				
				printf("Entrer les valeur de a et b \n");
				
				scanf("%d",&a);
				scanf("%d",&b);
				comparaison(a,b);
				break;
			case 6:
				printf("\n \n Corrig? exercice 6 \n \n");
				int c = 0;
				printf("Entrer trois entier a,b,c");
				scanf("%d %d %d",&a,&b,&c);
				
				orderCroissant(a,b,c);
				break;
			case 7:
				printf("\n \n Corrig? exercice 16 \n \n");
				char f;
				char e;
				printf("Entrer deux caractère\n");
				printf("Entrer le premier\n");
				scanf("%c", &e);
				scanf("%c", &e);
				
				printf("Entrer les deuxième caractère\n");
				scanf("%c", &f);
				scanf("%c", &f);
				permutation(&e,&f);
				break;
			case 8:
				printf("\n \n Corrig? exercice 17 \n \n");
				printf("Entrer deux entier\n");
				int z,y;
				scanf("%d %d", &z,&y);
				printf("Le resultat est:%d",somme(z, y));
				break;
			default:
				printf("\n Oups d?sol?, entr?e non pris  en charge");
				
		}
		
		printf("Souhaitez vous sortir ? si oui tapez 0 sinon 1 \n");
		scanf("%d",&end);
		}while(end == 1);
		
		return EXIT_SUCCESS;
}



