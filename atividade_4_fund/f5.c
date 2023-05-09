#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo que leia o preço de compra e o preço de venda de 10 mercadorias. O
algoritmo deverá imprimir quantas mercadorias proporcionam:
• lucro < 10 %
• 10 % <= lucro <= 20 %
• lucro > 20 % */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y = 0,z = 0, k = 0;
	float compra, venda, lucro;
	

	for (x=1; x<=10; x++){
			
			printf("\nDigite o valor de compra do produto %d: ", x);
				scanf("%d", &compra);
					
			printf("\nDigite o valor de venda do produto %d: ", x);
				scanf("%d", &venda);
					
			 lucro = venda - compra;

		if (lucro < (compra * 0.1)){
			y++;
		}
		if (lucro >= (compra * 0.1) && lucro <= (compra * 0.2)){
			z++;
		}
		if (lucro > (compra * 0.2)){
			k++;
		}
			
	}	
		
			printf("\n Quantidade lucro < 10:  %d ", y);
			printf("\n Quantidade 10 <= lucro <= 20: %d ", z);
				printf("\n Quantidade lucro > 20: %d", k);
			
	return 0;		
}
