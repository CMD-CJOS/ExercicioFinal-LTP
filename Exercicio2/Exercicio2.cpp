//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA
//RA: 5170260
//Atividade: Lista de Exercícios 2 - Exercício 2
#include <stdio.h>

/* 2.	Desenvolver um programa que efetue a soma de todos os números ímpares que são múltiplos de três
e que se encontram no conjunto dos números de 1 até 500.
*/

int main() {
	int soma = 0;
	for (int i = 1; i <= 500; i++) {
		if (i % 2 != 0 && i % 3 == 0) {
			soma = soma + i;
		}
	}
	printf("%d ", soma);
	return 0;
}