#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Implemente um algoritmo para ler 10 n�meros e depois do la�o de repeti��o imprima quantos
desses valores lidos est�o no intervalo entre 10 e 50 (incluindo os valores 10 e 50 no intervalo) e
quantos deles est�o fora deste intervalo. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x = 1, y = 0, z = 0;
	float a ; 

 while (x <= 10)	{
	
	printf("Digite um numero: ");
	scanf("%f", &a);
	
	if (a>= 10 && a<=50){
		y++;
	}
	
	else {
		z++;
	}
	
	x++;
 }
		printf("Quantidade de valores no intervalo: %d \n", y);
		printf("Quantidade de valores fora do intervalo: %d ", z);
		
		return 0;
}
