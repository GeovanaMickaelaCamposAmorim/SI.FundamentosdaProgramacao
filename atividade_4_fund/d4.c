#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo para ler 20 números inteiros e em seguida o programa deve
informar a quantidade de números pares e ímpares digitados.
 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int n = 20, num, x = 0, y = 0;
	
			
	do{
		printf("\n Digite um valor ");
			scanf("%d", &num);
			
		if (num%2 == 0){
				x++;
		}
		else {
			y++;
		}
		n--;
	}
	while(n != 0);
	
	printf("\n%d - Números Pares \n",x);
	printf("%d - Números Impares \n", y);
	
	return 0;
}
