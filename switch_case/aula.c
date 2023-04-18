#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 
 int main (){
 	
  setlocale(LC_ALL, "Portuguese");
  
  int diaSemana;
  
  printf("Digite o dia da semana [1 a 7]: ");
  scanf("%i", &diaSemana);
  
  switch(diaSemana){
  	case 1 :
  		printf("Segunda-feira!");
  		break;
  		
  	case 2 :
  		printf("Terça-feira!");
  		break;
  		
  	case 3 :
  		printf("Quarta-feira!");
  		break;
  		
  	case 4 :
  		printf("Quinta-feira!");
  		break;
  		
  	case 5 :
  		printf("Sexta-feira!");
  		break;
  		
  	case 6 :
  		printf("Sábado!");
  		break;
  		
	case 7 :	
  		printf("Domingo!");
  		break;
  		
  	default: 
  		printf("Valor inválido");
  		break;
  }
  
  
 return 0;
 }
