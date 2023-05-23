#include<stdio.h>
#include<stdlib.h>

int main () {
	char nome[5] = "Curso";
	int tamanho;
	
	tamanho = strlen(nome);

	printf("O tamanho da String %d\n", tamanho);
	
	return 0;
}
