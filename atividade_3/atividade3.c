#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
  setlocale(LC_ALL, "Portuguese");
  
  /*Fa�a um algoritmo que calcule uma conta telef�nica com base na cobran�a dos seguintes servi�os:*/
 
 int tipoTel, veloc;
 float min, valLigac; 
 
 	printf("Digite: (1) Telefone residencial \n        (2) Telefone comercial \n");
  		scanf("%d", &tipoTel); 
  		
	printf("Digite a quantidade de minutos utilizados:  \n");
  		scanf("%f", &min);
  		
  	printf("Digite sua velocidade de internet banda larga: 200 ou 500 \n");
  		scanf("%d", &veloc);
  		
  		switch(tipoTel){
  			
  	case 1 :
  		
  		valLigac = 2 * min;
  		
  		if(veloc == 200){
	 		printf("Valor de liga��es: %f reais\n Valor da conta: %f reais", valLigac, (valLigac+50));
	 	}
	 	else if (veloc == 500){
	 		printf("Valor de liga��es: %f reais\n Valor da conta: %f reais", valLigac, (valLigac+100));
		}
		
		else {
				printf("Valor inv�lido");
		}
  		break;
  		
  	case 2 :
  			valLigac = 4 * min;
  		
  		if(veloc == 200){
	 		printf("Valor de liga��es: %f reais\n Valor da conta: %f reais", valLigac, (valLigac+50));
	 	}
	 	else if (veloc == 500){
	 		printf("Valor de liga��es: %f\n Valor da conta: %f reais", valLigac, (valLigac+100));
		}
		
		else {
				printf("Valor inv�lido");
		}
  		break;
  		
  	default: 
  		printf("Valor inv�lido");
  		break;
  }
  
  	return 0; 
}
