#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	
	int x, inicial, fim;
	
	do{
	
	printf("Digite um numero inicial: ");
	scanf("%d", &inicial);
	
	printf("Digite um numero fim: ");
	scanf("%d", &fim);
	
	if(inicial >= fim){
		system("cls");
		printf("Valores invalidos\n");
		printf("================\n");
	}
	
} while(inicial >= fim);

	for(x = inicial; x <= fim; x++){
		
		printf("%d,", x);
	}
	
	return 0;
}
