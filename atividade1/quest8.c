#include<stdio.h>
#include<stdlib.h>

/* O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de f�brica de um carro e escreva o custo ao consumidor. */

int main () {

float custo, distribuidora,  impostos;

printf("Digite o custo de fabrica: ");
	scanf("%f", &custo);

distribuidora = (custo*0.28);
impostos = (custo*0.45);

printf("\n Custo ao consumidor e: %f reais ", (custo - (distribuidora+impostos)));

}

