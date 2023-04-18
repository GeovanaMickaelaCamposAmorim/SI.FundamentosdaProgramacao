#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
		setlocale(LC_ALL, "Portuguese");
	
	int quant, cont = 1;
	float somaNotas = 0;
	float nota, menNota, maxNota;
	
		printf("Digite a quantidade de alunos: ");
		scanf ("%d", &quant);
		
		
	while ( cont <= quant) {
		
		printf("Digite a nota do aluno: ");
		scanf ("%f", &nota);
		
		somaNotas = somaNotas + nota;
		
		if (cont == 1){
			maxNota=nota;
			menNota = nota;
		}
		
		if (nota > maxNota){
			maxNota=nota;
		}
		
		if (nota < menNota){
			menNota = nota;
		}
		
		cont++;
	}
	
		printf("Maior nota: %f: \n", maxNota);
		printf("Menor nota: %f: \n", menNota);
		printf("Média:  %f", somaNotas/quant);
		
		return 0;
} 

