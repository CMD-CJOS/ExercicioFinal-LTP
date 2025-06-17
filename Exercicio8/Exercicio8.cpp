//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 8  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  

/* 8.	Faça um algoritmo que calcule o valor de A, dado por:  A = N+(N-1)/N+(N-2)/N+...+1/N,
        onde N é um número inteiro positivo fornecido pelo usuário.
*/

int main() {
    int n;
    double a = 0.0;

    printf("Digite um valor inteiro e positivo para N: ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("O valor de N deve ser positivo e maior ou igual a 1.\n");
        return 1;
    }

	a = n;

    for (int i = 2; i <= n; i++) {
        a = a + (n - (i - 1)) / i;
    }
    printf("O valor de A para N = %d eh: %.2f\n", n, a);

    return 0;
}