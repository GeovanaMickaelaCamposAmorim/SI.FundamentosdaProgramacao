#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
  setlocale(LC_ALL, "Portuguese");
  
  /*Fa�a um programa que leia o tamanho de 3 lados de um poss�vel tri�ngulo. Em seguida o programa dever� 
  informar se os valores informados podem ser um tri�ngulo ou n�o. Caso os lados informados formem um tri�ngulo,
   o programa deve indicar se o mesmo �: equil�tero, is�sceles ou escaleno.*/

 	int l1,l2,l3; 
 	
 	 printf("Digite 3 numeros inteiros: ");
  		scanf("%d", &l1);
  		scanf("%d", &l2);
  		scanf("%d", &l3);
  	
 	
 	if ( (l1+l2)>l3 ||  (l1+l3)>l2 || (l3+l2)>l1 ){
 		
		 if(l1==l2 && l1==l3 && l2==l3){
	 		printf("Equilatero ");
	 	}
	 
	 	else if(l1==l2 || l1==l3 || l2==l3){
	 		printf("Is�sceles ");
	 	 }
	
		 else{
			 printf("Escaleno");
		 }
	 
	}
	 
	 return 0;
 }
