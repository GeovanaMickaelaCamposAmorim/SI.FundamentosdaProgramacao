#include<stdio.h>
#include<stdlib.h>

/* Fa�a um algoritmo que receba o peso e a altura de uma pessoa e calcule o IMC � �ndice de Massa Corp�rea, que mede a rela��o entre peso e altura. A f�rmula do IMC �: peso em Kg dividido pelo quadrado da altura. */

int main () {

float peso, altura;

printf("Digite seu peso: ");
	scanf("%f", &peso);

printf("Digite sua altura: ");
	scanf("%f", &altura);

printf("\nSeu IMC e de:  %f ", (peso/(altura*altura)));

}

