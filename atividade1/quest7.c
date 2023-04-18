#include<stdio.h>
#include<stdlib.h>

/* Uma loja de informática está com uma promoção de Dia dos Pais, oferecendo um desconto de 25% em todos os produtos. Implemente um algoritmo que receba o valor total da compra e mostre como saída: o valor da compra, o valor do desconto e o valor final a ser pago. */

int main () {

float valorTotal, desconto;

printf("Digiteo valor total da compra: ");
	scanf("%f", &valorTotal);

desconto = (valorTotal/4);

printf("\n O valor total e: %f reais. \nO valor do desconto e: %f reais. \nO valor final e: %f reais. ", valorTotal, desconto, (valorTotal - desconto) );

}

