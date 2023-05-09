#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
		
	int i, num[5];
	
	for(i=0; i<=4; i++){
	printf("Digite um número na posição [%d]: ", i);
		scanf("%d", &num[i]);
  }
  
  for (i=0; i<=4; i++){
  	printf("\nValor digitado na posição [%d]: %d ", i, num[i]);
  }
  
}
