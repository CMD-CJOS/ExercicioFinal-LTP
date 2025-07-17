//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 9 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 9.	Faça um programa em  que leia valores numéricos até que um zero seja lido e mostre a quantidade de números lidos.
*/

int main() {
	int numero = 1; 
	int contador = 0; 

while (numero != 0) {
		printf("Digite um numero (0 para sair): ");
		scanf_s("%d", &numero);
		if (numero != 0) {
			contador++;
		}
	}
	printf("Quantidade de numeros lidos: %d\n", contador);
	return 0;
}
