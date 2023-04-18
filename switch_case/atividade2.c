#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
 	
  setlocale(LC_ALL, "Portuguese");
  /*O prefeito de uma cidade está preocupado com o número de inadiplentes de IPTU e lhe contratou para criar um programa que calcule
   e imprima o valor da multa a ser paga por essas pessoas. Conside que o programa deve receber os seguintes dados do imóvel:*/

   float numregistro, valImposto, multa; 
   int numAtraso;
   
   printf("Digite o numero do registro: ");
  		scanf("%f", &numregistro);
  	
  	printf("Digite o valor do imposto: ");
  		scanf("%f", &valImposto);
  		
  	printf("Digite o numero de meses atrasados: ");
  		scanf("%i", &numAtraso); 

	printf("\nNumero do registro: %f", numregistro);

if(valImposto<= 500){
	multa = valImposto*(numAtraso*0.01); 
	printf("\nValor da multa: %f", multa );
	printf("\nValor do imposto: %f", (valImposto+ multa) );
}
   else if(valImposto>=500.01 && valImposto<=1800){
   		multa = valImposto*(numAtraso*0.02); 
   		printf("\nValor da multa: %f", multa);
	printf("\nValor do imposto: %f", (valImposto+ multa) );
   }
   
   else if(valImposto>=1800.01 && valImposto<=5000){
   		multa = valImposto*(numAtraso*0.04); 
   		printf("\nValor da multa: %f", multa);
	printf("\nValor do imposto: %f", (valImposto+ multa));
   }
   
   else if(valImposto>=5000.01 && valImposto<=12000){
   		multa = valImposto*(numAtraso*0.07); 
   		printf("\nValor da multa: %f",multa);
	printf("\nValor do imposto: %f", (valImposto+ multa));
   }
   
   else if (valImposto>= 12000,01){
   		multa = valImposto*(numAtraso*0.10); 
   		printf("\nValor da multa: %f", multa);
	printf("\nValor do imposto: %f",(valImposto+ multa) );
   }

}
