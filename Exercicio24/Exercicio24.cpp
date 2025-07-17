//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 24
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/*  24.	Desenvolva um programa que leia duas matrizes de números inteiros, A e B, ambas de dimensões 2x2.
        O programa deve então calcular a matriz C, que é a soma das matrizes A e B (C[i][j] = A[i][j] + B[i][j]).
        Ao final, exiba a matriz C resultante. 

*/

int main() {
    int A[2][2], B[2][2], C[2][2];
    

    printf("Digite os elementos da matriz A (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf_s("%d", &A[i][j]);
        }
    }
    
    printf("Digite os elementos da matriz B (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf_s("%d", &B[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    
    printf("Matriz C (soma de A e B):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d \n", C[i][j]);
        }
    }
    return 0;
}
