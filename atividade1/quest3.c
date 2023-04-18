#include<stdio.h>
#include<stdlib.h>

/*Tendo como dados de entrada a altura de uma pessoa, implemente um algoritmo que calcule o mostre o peso ideal, usando a seguinte fórmula: (72.7*altura) - 58. */ 

int main () {

float altura;

printf("Digite sua altura: ");
	scanf("%f", &altura);

printf("\nSeu peso ideal e : %f kg", ( (72.7*altura) - 58 ));

}

