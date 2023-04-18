#include<stdio.h>
#include<stdlib.h>

/* Faça o algoritmo que calcule o valor em reais correspondente aos de dólares. O programa deve solicitar a quantidade de dólares e a cotação do dólar no dia, em seguida deve mostrar o valor total em reais. */

int main () {

float dolar, cotacao;

printf("Digite a quantia de dolares ");
	scanf("%f", &dolar);

printf("Digite a cotacao: ");
	scanf("%f", &cotacao);

printf("\nO valor corresponde a: %f reais ", ((dolar*cotacao)));
}

