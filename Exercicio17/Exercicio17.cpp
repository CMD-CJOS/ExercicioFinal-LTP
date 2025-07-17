//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 17  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 17.	Construa um algoritmo que leia uma quantidade indeterminada de números inteiros positivos 
        e identifique qual foi o maior número digitado. O final da série de 
        números digitada deve ser indicado pela entrada de -1.
*/


int main() {
    int i = 1;
    int maior = 1;
    int numeros[1000];


    do {

        printf("Digite um numero inteiro (negativo para sair): ");
        scanf_s("%d", &numeros[i]);

        if (numeros[i] < 0) {
            break;
        }
        else if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    while (numeros[i] > 0);
	printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}
