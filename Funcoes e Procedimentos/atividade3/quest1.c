#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include<string.h>

void contVoto(int cod);
void resultado();
int voto[5];


int main () {
	setlocale (LC_ALL, "Portuguese");
	
	int cod, exit=0;
	
do{	
	system("cls");
	printf("=====ELEICAO 2022=====\n");
	printf("0 - Voto em branco\n");
	printf("1 - José\n");
	printf("2 - João\n");
	printf("3 - Maria\n");
	printf("4 - Resultado\n");
	printf("5 - Sair do sistema\n");
	printf("======================\n");
	printf("Digite um código: ");
	scanf("%d", &cod);
	
	switch (cod){
		case 0:
			contVoto(cod);
			break;
		case 1:
			contVoto(cod);
			break;
		case 2:
			contVoto(cod);
			break;
		case 3:
			contVoto(cod);
			break;
		case 4:
			resultado();
			break;
		
		case 5:
			
		printf("Deseja realmente sair do sistema?\n");
		printf("[0] Não/ [1] Sim\n");
		scanf("%d", &exit);	
			break;
			
		default:
			printf("Valor invalido");
			
		}
	}while(exit == 0);
		
	return 0;
}

void contVoto(int cod){
	system("cls");
	voto[cod] ++;
	
	printf("======================\n");
	printf("Obrigado pelo seu voto! \n");
	printf("======================\n");
	system("pause");
}


void resultado(){
	
	char senha[10];
	system("cls");
	
	do{
	printf("Digite a senha para exibir o resultado: ");
	scanf("%s", senha);
	
		if(strcmp(senha, "eleicao2022") != 0){
		system("cls");
			printf("Senha inválida\n");}
	} while(strcmp(senha, "eleicao2022") != 0);
	
	if(strcmp(senha, "eleicao2022") == 0){
	printf("======RESULTADO======\n");
	printf("Votos em branco: %d\n", voto[0]);
	printf("Votos em José: %d\n", voto[1]);
	printf("Votos em João: %d\n", voto[2]);
	printf("Votos em Maria: %d\n", voto[3]);
	printf("==============\n");
	printf("Votos válidos: %d\n", voto[1]+voto[2]+voto[3]);
	system("pause");
	}

}


