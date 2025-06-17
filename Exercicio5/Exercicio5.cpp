//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 5  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 5.	Faça um programa para calcular o somatório dos números ímpares do intervalo 
        [M,N]. Os valores M e N são números inteiros e devem ser solicitados ao usuário. 
*/

int main() {
	int soma = 0;
	int n = 0;
	int i = 0;
	int m = 0;

	printf("Digite o valor de M: ");
	scanf_s("%d", &m);
	printf("Digite o valor de N: ");
	scanf_s("%d", &n);
	for (i = m; i <= n; i++) {
		if (i % 2 != 0) { 
			soma += i; 
		}
	}
	printf("A soma dos numeros impares no intervalo [%d , %d] eh: %d\n", m, n, soma);

	return 0;
}