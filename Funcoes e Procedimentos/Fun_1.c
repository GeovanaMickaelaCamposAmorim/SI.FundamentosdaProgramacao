#include<stdio.h>
#include<stdlib.h>

float calcularMedia(float n1, float n2, float n3);

int main () {
	float nota1, nota2, nota3;

	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	
	printf("A média foi: %f", calcularMedia(nota1,nota2,nota3));
	
	return 0;
}

float calcularMedia(float n1, float n2, float n3){
	float media;
	media = (n1+n2+n3 )/ 3;
	
	return media; 
}
