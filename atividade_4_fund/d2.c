#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia n�meros enquanto forem positivos e imprima quantos
n�meros foram digitados depois do la�o de repeti��o.
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
