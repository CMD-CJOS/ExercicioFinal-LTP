//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 16  
#include <stdio.h>  
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS  


/* 16.	Escreva um programa que lê valores um número não determinado de vezes e escreve
        a raiz quadrada de cada um destes valores. O algoritmo deve parar quando um valor negativo for digitado.
*/

int main() {
    int num = 1;

    do {

        printf("Digite um numero (negativo para sair): ");
        scanf_s("%d", &num);

        if (num < 0) {
            break;
        }
        else {
            double raizQuadrada = sqrt(num);
            printf("Raiz quadrada de %d: %.2f\n", num, raizQuadrada);
           
        }
    }
    while (num > 0);
	return 0;
}
