//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA
//RA: 5170260
//Atividade: Lista de Exercícios 2 - Exercício 7
#include <stdio.h>

/* 7.	Faça um programa que receba um número inteiro não negativo e calcule o seu fatorial.
*/

int main() {
	int i, n;
	int fat = 1;

	printf("Digite um numero inteiro nao negativo: ");
	scanf_s("%d", &n);


	for ( i = n; i > 1; i--) {
		if (n > 0) {
			fat = fat * i;
		}
		else {
			printf("Numero invalido!\n");
		}

	}
	printf("Fatorial de %d: %d\n", n, fat);
	return 0;
}