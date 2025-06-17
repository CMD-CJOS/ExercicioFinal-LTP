//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 4 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 4.	Elabore um programa em  que conte de 1 a 100 e a cada múltiplo de 10 emita a mensagem: “O número X é múltiplo de 10”.
*/

int main() {
	int soma = 0;
	int n = 0;
	int i = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 10 == 0) {
			printf("O numero %d eh multiplo de 10 \n", i);
		}
	}
	return 0;
}