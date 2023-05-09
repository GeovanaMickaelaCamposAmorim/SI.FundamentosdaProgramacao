#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo para imprimir todos os números de 100 até 1 de forma
decrescente. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x=100;
	
	while(x>=1){
	
	printf("%d - ", x);
	
	x--;
	
   }
   
   return 0;
}
