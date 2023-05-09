#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo para ler o valor de 10 salários e escrever quais os três maiores
valores dos salários lidos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
		int x;
		float a, b, c, sal;
	
	for(x = 1; x<=10; x++){
		
			printf("\nDigite um numero: ");
				scanf("%f", &sal);
		
		if (x == 1){
			a = b = c = sal;
		}
		
		if (sal > a){
			c = b;
			b = a;
			a = sal;
		}
		
	else if (sal > b ){
			c = b;
			b = sal;
		}
		
	else if (sal > c ){
			c = sal;
		}
	
  }
  
  		printf("1° maior: %f \n", a);
		printf("2° maior: %f \n", b);
		printf("3° maior: %f \n", c);
		
		return 0;
}

