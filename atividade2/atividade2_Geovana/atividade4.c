#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
  setlocale(LC_ALL, "Portuguese");
  
  /*Faça um programa que leia o tamanho de 3 lados de um possível triângulo. Em seguida o programa deverá 
  informar se os valores informados podem ser um triângulo ou não. Caso os lados informados formem um triângulo,
   o programa deve indicar se o mesmo é: equilátero, isósceles ou escaleno.*/

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
	 		printf("Isósceles ");
	 	 }
	
		 else{
			 printf("Escaleno");
		 }
	 
	}
	 
	 return 0;
 }
