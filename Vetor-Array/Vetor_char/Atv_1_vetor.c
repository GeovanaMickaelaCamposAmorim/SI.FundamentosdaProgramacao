#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// digitar 5 notas e imprimir as maiores que 7

int main () {
		setlocale(LC_ALL, "Portuguese");
		
			int i;
			float num[5];
			
		for(i=1; i<=5; i++){
			printf("Digite sua nota [%d]: ", i);
				scanf("%f", &num[i]);
		}
		
			for(i=1; i<=5; i++){
				
				if(num[i] > 7){
  					printf("\nNota %d: %f ", i, num[i]);
  }
		}
return 0;
	}
