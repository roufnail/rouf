#include "header.h"

// D?finition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// D?finition d'une fonction d'?l?vation ? une puissance donn?es.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}


//Greeting

void greating(){
	//printf("Bonjour");
}

//Inverse
void inverse(){
	int tab[3];
	int i;
	for (i=0; i<3;i++){
		printf("Saisir un entier %d",i);
		scanf("%d", &tab[i]);
	}
	
	 
	printf("Voici l\entr? en question:\n");
	
	for(i=0; i<3; i++){
		printf("%d",tab[i]);
	}
		printf("\nVoici l\'inverse\n");
		printf("%d%d%d",tab[2],tab[1],tab[0]);
}

double produit(){
	
	double produit;
	double num1, num2;
	printf("Entrer deux nombres entier relatif\n");
	scanf("%lf",&num1);
	scanf("%lf",&num2);
	printf("les nombres sont %f,%f", num1, num2);
	produit = num1 * num2;
	
	return produit;
	
}

void parity(int a){
	if(a % 2 == 0){
		printf("Le nombre %d est pair",a);
	}else{
		printf("Le nombre %d est impair",a);
	}
}

void comparaison(int a, int b){
	if(a<b){
		printf("\n a < b");
	}else if(a>b){
		printf("\n a>b");
	}else {
		printf(" a = b");
	}
}
int prototypeSomme(int a, int b){
	return a * b;
}

void orderCroissant(int a, int b, int c){
	int tmp;
	
	if(a>b){
		tmp = a;
		a = b;
		b = tmp;
	}
	
	if(a > c) {
		tmp = a;
		a = c;
		c = tmp;
	}
	
	if (b > c){
		tmp = b;
		b = c;
		c = tmp;
	}
	
	printf("les nombre dans l\'order croissant sont: %d %d %d", a,b,c);
}

void permutation(char *a, char *b){
	printf("first = %c, second=%c \n", *a,*b);
	int tmp = *a;
	*a = *b;
	*b = tmp;
	
	printf("first = %c, second = %c", *a, *b);
}

int somme(int a, int b){
	return a + b;
}
