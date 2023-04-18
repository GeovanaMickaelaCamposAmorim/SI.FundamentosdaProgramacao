#include<stdio.h>
#include<stdlib.h>

/* Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o IMC – Índice de Massa Corpórea, que mede a relação entre peso e altura. A fórmula do IMC é: peso em Kg dividido pelo quadrado da altura. */

int main () {

float peso, altura;

printf("Digite seu peso: ");
	scanf("%f", &peso);

printf("Digite sua altura: ");
	scanf("%f", &altura);

printf("\nSeu IMC e de:  %f ", (peso/(altura*altura)));

}

