#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
 	
  setlocale(LC_ALL, "Portuguese");
  /*Implemente uma minicalculadora utilizando a estrutura SWITCH ...
   CASE, em que o usuário informa para o programa dois números em seguida seleciona o 
  tipo da operação que deseja realizar. Os códigos das operações devem ser exibidos para o usuário através e um menu.*/
  
 	 int opcao;
   float var1, var2;
   
   	printf("Digite dois números: ");
  		scanf("%f", &var1);
  		scanf("%f", &var2);
  
  printf("OPERAÇÃO \n=================== \n1-SOMA \n2-SUBTRAÇÃO \n3-DIVISÃO \n4-MULTIPLICAÇÃO \n=================== \nDigite o código da operação: ");
  scanf("%i", &opcao);
  
  
  
  switch(opcao){
  	case 1 :
  		printf("Resultado: %f", (var1+var2));
  		break;
  		
  	case 2 :
  		printf("Resultado: %f", (var1-var2));
  		break;
  		
  	case 3 :
  		printf("Resultado: %f", (var1/var2));
  		break;
  		
  	case 4 :
  		printf("Resultado: %f", (var1*var2));
  		break;
  		
  	default: 
  		printf("Valor inválido");
  		break;
  		
  	}
	  
	  }
