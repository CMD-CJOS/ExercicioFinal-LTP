//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 6  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 6.	Faça um programa para calcular o somatório 1^1 + 2^2 + 3^3 + ... + N^n , onde N é informado pelo usuário.
*/

int main() {
	int N, i, j, soma = 0;

	printf("Informe o valor final: ");
	scanf_s("%d", &N);

	for (i = 1; i <= N; i++) {
		j = i * i;
		soma += j ; 
	}
	printf("O somatorio eh: %d\n", soma);

	return 0;
}