#include<stdio.h>
#include<stdlib.h>

/* A loja Mam�o com A��car est� vendendo seus produtos em 5 presta��es sem juros. Fa�a um algoritmo que receba o valor de tr�s produtos e em seguida mostre o total da compra e o valor das presta��es. */

int main () {

float prod, prod2, prod3, total;

printf("Digite o valor do produto: ");
	scanf("%f", &prod);

printf("Digite o valor do produto: ");
	scanf("%f", &prod2);

printf("Digite o valor do produto: ");
	scanf("%f", &prod3);

total = prod + prod2 + prod3;

printf("\nO valor total da compra e de %f reais e as prestacoes serao de %f reais", total, (total/5));
}

