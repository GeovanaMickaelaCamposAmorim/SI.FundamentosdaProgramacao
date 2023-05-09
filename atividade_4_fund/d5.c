#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo que receba a idade, a altura e o peso de 10 pessoas. Depois do laço de
repetição, calcule e imprima:
• a quantidade de pessoas com idade >= 0 e <= 21 anos;
• a quantidade de pessoas com idade > 21 e <= 50 anos;
• a quantidade de pessoas com idade superior a 50 anos;
• a média das idades das pessoas;
• a média das alturas das pessoas;
• a média dos pesos das pessoas; */

int main () {
	setlocale(LC_ALL, "Portuguese");
	int x=0, a = 0, b = 0, c = 0;
	float idade, altura, peso, al, pe, ida;
	
	do{
		printf("\n Digite idade ");
			scanf("%f", &idade);
			
		printf("\n Digite altura ");
			scanf("%f", &altura);
			
		printf("\n Digite peso ");
			scanf("%f", &peso);
		
		if(idade >= 0 &&  idade<= 21){
			a++;
		}
		
		if(idade > 21 && idade<= 50){
			b++;
		}
		
		if(idade > 50){
			c++;
		}
			
		ida = ida + idade;	
		al = al + altura;	
		pe = pe + peso;
		
		x++;
		
	}while(x != 10);
	
		printf("\n Quantidade de pessoas com idade entre 0 e 21:%d", a);
		printf("\n Quantidade de pessoas com idade entre 21 e 50:%d", b);
		printf("\n Quantidade de pessoas com idade maior que 50 :%d", c);	
		printf("\n Média de idade: %.3f",ida/10);
		printf("\n Média de altura: %.3f", al/10);
		printf("\n Média de peso: %.3f",pe/10);
		
		return 0;
}
