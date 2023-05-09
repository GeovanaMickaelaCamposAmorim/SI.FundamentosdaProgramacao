#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Faça um algoritmo para obter do usuário a quantidade de números que o programa irá ler e
em seguida ler N números inteiros e escrever logo em seguida se o número é par ou ímpar.
Ex.: Número: 9 - Impar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, num;
	
		printf("\nDigite a quantidade de números que o programa irá ler: ");
			scanf("%d", &n);
			
	do{
		printf("\n Digite um valor ");
			scanf("%d", &num);
			
		if (num%2 == 0){
				printf(" Número: %d - Par \n",num);
		}
		else {
				printf(" Número: %d - Impar \n", num);
		}
		n--;
	}
	while(n != 0);
	
	return 0;
}
