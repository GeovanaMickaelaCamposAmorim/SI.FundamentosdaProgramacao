#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* . Implemente um algoritmo para ler 20 números e imprimir todos os seus divisores. Ex.:
Número: 10 / Divisores: 1, 2, 5 e 10
 */

int main () {
	
	setlocale(LC_ALL, "Portuguese");
	int x=1, a;
	
		while(x <= 20){
			
			printf("\nDigite um numero: ");
				scanf("%d", &a);
			
			printf("Número: %d/ Divisores: ", a);
		
			int	b = 1;
		
			while (b <= a){
			
				if (a%b == 0){
				
					printf("%d,", b);
				}
				
				b++;
			}
			
			printf("\n");
				x++;
 		 }
	return 0;
}
