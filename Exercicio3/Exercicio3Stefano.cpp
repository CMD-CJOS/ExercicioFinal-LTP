//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 3  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 3.	Faça um programa que escreva todos os números múltiplos de 7 entre 1 e N, sendo N um valor informado pelo usuário.  
*/  

int main() {  
	int soma = 0;  
	int n = 0;  
	int i = 0;  
	printf("Digite o numero final do intervalo: \n");  
	scanf_s("%d", &n); 

	for (i = 1; i <= n; i++) {  
		if (i % 7 == 0) {  
			printf("Numero: %d\n",i);
		}  
	}  
	return 0;  
}