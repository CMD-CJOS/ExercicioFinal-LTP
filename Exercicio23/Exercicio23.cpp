//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 23  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/* 23.	Faça um programa que leia uma matriz de números inteiros de dimensões 3x3.
        Em seguida, o programa deverá calcular e exibir a soma dos elementos que compõem
        a diagonal principal dessa matriz. 

*/

int main() {
    int matriz[3][3], i, j, soma = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

                printf("Elemento [%d][%d]: ", i, j);
                scanf_s("%d", &matriz[i][j]);
            
        }
    }

    for (i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }

    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    return 0;
}
