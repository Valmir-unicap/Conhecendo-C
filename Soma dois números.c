#include <stdio.h>
int main() {
	int num1, num2, soma;//declaração de variável
	printf("Digite um número: ");//printa na tela
	scanf("%i",&num1);//recebe um inteiro e armazena na variável num1
	printf("Digite outro número: ");
	scanf("%i",&num2);//recebe um inteiro e armazena na variável num2
	soma= num1 + num2;
	printf("\n resultado= %i",soma);// o significa de \n pula uma linha // %i tipo de variavel a ser exibida 
	return 0;
}
