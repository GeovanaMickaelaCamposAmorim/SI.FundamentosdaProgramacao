#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo que leia n�meros e ao lado de cada n�mero imprima o seu triplo.
O ponto de parada do la�o � quando o usu�rio digitar o n�mero 0 (zero). Ex.: N�mero: 3 �
Triplo: 9 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	float num;
	int x;
	
	do {
		printf("\nDigite um valor ");
				scanf("%f", &num);
					
		printf("\nN�mero: %f � Triplo: %f: ", num, num*3);
			
			printf("\nDigite 0 quando quiser parar \n");

	} while (num != 0);
	
	return 0;
}
