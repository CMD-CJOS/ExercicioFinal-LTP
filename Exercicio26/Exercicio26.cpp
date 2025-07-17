//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 26 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/* 26.	Crie uma função que receba como parâmetro um número inteiro positivo N e retorne o seu fatorial. 
        No programa principal, leia um número N do usuário, chame a função para calcular o fatorial e exiba o resultado.
*/

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf_s("%d", &n);
    if (n < 0) {
        printf("Fatorial nao definido para numeros negativos.\n");
    } else {
        int resultado = fatorial(n);
        printf("O fatorial de %d e: %d\n", n, resultado);
    }
    return 0;
}
