#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Fa�a um algoritmo para obter do usu�rio a quantidade de n�meros que o programa ir� ler e
em seguida ler N n�meros inteiros e escrever logo em seguida se o n�mero � par ou �mpar.
Ex.: N�mero: 9 - Impar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n, num;
	
		printf("\nDigite a quantidade de n�meros que o programa ir� ler: ");
			scanf("%d", &n);
			
	do{
		printf("\n Digite um valor ");
			scanf("%d", &num);
			
		if (num%2 == 0){
				printf(" N�mero: %d - Par \n",num);
		}
		else {
				printf(" N�mero: %d - Impar \n", num);
		}
		n--;
	}
	while(n != 0);
	
	return 0;
}
