#include<stdio.h>
#include<stdlib.h>

/*Fa�a um algoritmo que pergunte para o usu�rio quanto ele ganha por hora e o n�mero de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio. */ 

int main () {

float valorHora, quantHora;

printf("Digite o valor recebido por horas: ");
	scanf("%f", &valorHora);

printf("Digite a quantidade de horas trabalhadas : ");
	scanf("%f", &quantHora);

printf("\nSeu salario e de : %f reais", (quantHora * valorHora));

}

