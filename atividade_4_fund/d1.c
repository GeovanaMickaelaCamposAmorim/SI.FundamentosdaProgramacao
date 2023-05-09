#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia números e ao lado de cada número imprima o seu triplo.
O ponto de parada do laço é quando o usuário digitar o número 0 (zero). Ex.: Número: 3 –
Triplo: 9 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	float num;
	int x;
	
	do {
		printf("\nDigite um valor ");
				scanf("%f", &num);
					
		printf("\nNúmero: %f – Triplo: %f: ", num, num*3);
			
			printf("\nDigite 0 quando quiser parar \n");

	} while (num != 0);
	
	return 0;
}
