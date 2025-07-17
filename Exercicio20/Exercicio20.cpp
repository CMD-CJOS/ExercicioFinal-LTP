//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 20  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/* 20.	Elabore um programa que leia dois vetores, A e B, cada um com 5 elementos inteiros. Crie um terceiro vetor, C,
        onde cada elemento de C é a soma dos elementos correspondentes dos vetores A e B (C[i] = A[i] + B[i]).
        Mostre o vetor C resultante.
   
*/


int main() {
    int A[5], B[5], C[5];

    printf("Digite 5 elementos inteiros para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &A[i]);
    }

    printf("Digite 5 elementos inteiros para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++) {
        C[i] = A[i] + B[i];
    }

    printf("Vetor C (soma dos vetores A e B):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", C[i]);
    }
    
    return 0;
}
