#include<stdio.h>
#include<stdlib.h>

int fatorial(int n);

int main () {
 	int numero;

	printf("Digite um numero ");
	scanf("%d", &numero);
	
	printf("O fatorial encontrado foi: %d", fatorial(numero));

}
int fatorial (int n){
	int i, fat=1;
	for(i=1;i<=n; i++){
		fat = fat*i;
	}
	
	return fat; 
}
