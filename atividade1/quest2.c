#include<stdio.h>
#include<stdlib.h>

/*Faça um algoritmo que pergunte para o usuário quanto ele ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário. */ 

int main () {

float valorHora, quantHora;

printf("Digite o valor recebido por horas: ");
	scanf("%f", &valorHora);

printf("Digite a quantidade de horas trabalhadas : ");
	scanf("%f", &quantHora);

printf("\nSeu salario e de : %f reais", (quantHora * valorHora));

}

