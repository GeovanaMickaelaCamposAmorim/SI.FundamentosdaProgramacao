#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
		setlocale(LC_ALL, "Portuguese");
		
	int i, num[5];
	
	for(i=0; i<=4; i++){
	printf("Digite um número na posição [%d]: ", i);
		scanf("%d", &num[i]);
  }
  
  for (i=0; i<=4; i++){
  	
  	if(num[i] %2 == 0){
  	printf("\nValor digitado na posição [%d]: %d - par ", i, num[i]);
  }
   else {
  	printf("\nValor digitado na posição [%d]: %d - impar", i, num[i]);
  }
  
  }
  
}
