#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
		
	int i, num[5];
	
	for(i=0; i<=4; i++){
	printf("Digite um n�mero na posi��o [%d]: ", i);
		scanf("%d", &num[i]);
  }
  
  for (i=0; i<=4; i++){
  	printf("\nValor digitado na posi��o [%d]: %d ", i, num[i]);
  }
  
}
