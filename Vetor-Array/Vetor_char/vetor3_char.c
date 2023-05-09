#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	// Npode colocar espaço
	//gets(nome);
	//gets deixa colocar espaço (palavra composta)
	//strcpy(nome,"Edemilton");
	//atribuicao
	
	int i=0;
	
	while(nome[i] != "\n"){
		
		printf("[%c]", nome[i]);
		i++;
	}
	
	printf("o nome digitado foi: %s", nome);
	
	return 0;
}
