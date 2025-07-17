//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 11  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/*11.	Faça um programa para ler números inteiros do teclado até que o 
número 0 seja lido.Ao término, o programa deverá apresentar a soma dos números múltiplos de 3.
*/


int main() {
	int numero, soma = 0;

	
	while (true) {
		printf("Digite numero inteiro (digite 0 para sair):\n");
		scanf_s("%d", &numero);
		
		if (numero == 0) {
			break;
		}
		
		if (numero % 3 == 0) {
			soma += numero; 
		}
	}
	printf("A soma dos numeros multiplos de 3 e: %d\n", soma);
	
	return 0;
}
