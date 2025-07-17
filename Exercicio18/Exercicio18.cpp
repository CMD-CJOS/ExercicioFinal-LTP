//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 18  
#include <stdio.h>  
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS  


/*  
    18.	Faça um programa que leia um número inteiro N e, em seguida, leia N números 
    inteiros e os armazene em um vetor. Ao final, o programa deverá exibir todos os 
    números armazenados na ordem inversa em que foram lidos.
*/


int main() {
	int n;
	int num;
	int *numeros;

	printf("Digite um numero inteiro N: ");
	scanf_s("%d", &n);
	

	numeros = (int*)malloc(n * sizeof(int));
	

	for (int i = 0; i < n; i++) {
		
		printf("Digite outros numeros inteiros N: ");
		scanf_s("%d", &numeros[i]);
	}

	printf("Os numeros armazenados na ordem inversa sao: \n");
	for (int i = n-1; i >= 0; i--) {
		printf("%d ", numeros[i]);
	}
	free(numeros);
	return 0;

}
