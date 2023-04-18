#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (void) {
	
		setlocale(LC_ALL, "Portuguese");
		
		int senha, cont = 1;
		
		do{
			printf("Digite a senha: ");
				scanf("%d", &senha);
				printf("Tentativa %d: ", cont);
			
			if (senha != 543){
					printf ("Senha incorreta! \n");
				cont++;
				system("pause");
			}
			system("cls");
			
		} while (senha != 543 && cont <= 3);
			if (cont > 3){
				printf ("Ultrapassou o número de tentativas");
			}
		
			if (senha == 543){
				printf ("Você descobriu a senha!");
			}
	
		return 0;
	}
	
	//system("cls") - limpar a tela
	// system("pause") - pausa a execucao 
