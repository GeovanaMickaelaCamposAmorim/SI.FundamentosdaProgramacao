#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num[5];
	
	printf("Digite um n�mero: ");
	scanf("%d", &num[0]);
	
	printf("Valor digitado na posi��o 0: %d ", num[0]);
	
	return 0;
}
