//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 25  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/*  25.	Elabore um programa que leia uma matriz de números inteiros de dimensões 3x4.
        Depois, leia um número inteiro X. O programa deve contar e exibir quantas vezes o número X aparece na matriz.

*/

int main() {
    int matriz[3][4], x, i, j, contador = 0;

    printf("Digite os elementos da matriz 3x4:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf_s("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero X: ");
    scanf_s("%d", &x);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O numero %d aparece %d vezes na matriz.\n", x, contador);
    return 0;
}
