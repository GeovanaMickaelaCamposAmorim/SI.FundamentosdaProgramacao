#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
 	
  setlocale(LC_ALL, "Portuguese");
  /*Implemente uma minicalculadora utilizando a estrutura SWITCH ...
   CASE, em que o usu�rio informa para o programa dois n�meros em seguida seleciona o 
  tipo da opera��o que deseja realizar. Os c�digos das opera��es devem ser exibidos para o usu�rio atrav�s e um menu.*/
  
 	 int opcao;
   float var1, var2;
   
   	printf("Digite dois n�meros: ");
  		scanf("%f", &var1);
  		scanf("%f", &var2);
  
  printf("OPERA��O \n=================== \n1-SOMA \n2-SUBTRA��O \n3-DIVIS�O \n4-MULTIPLICA��O \n=================== \nDigite o c�digo da opera��o: ");
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
  		printf("Valor inv�lido");
  		break;
  		
  	}
	  
	  }
