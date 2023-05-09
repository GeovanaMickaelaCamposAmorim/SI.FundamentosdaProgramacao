#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia números enquanto forem positivos e imprima quantos
números foram digitados depois do laço de repetição.
 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x;
	float num;
	
	do {
		printf("\nDigite um valor ");
			scanf("%f", &num);
		x++;
	}
	while(num > 0);
	
	printf("\nNumeros digitados: %d", x);
	
	return 0;
}
