#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num[5];
	
	printf("Digite um número: ");
	scanf("%d", &num[0]);
	
	printf("Valor digitado na posição 0: %d ", num[0]);
	
	return 0;
}
