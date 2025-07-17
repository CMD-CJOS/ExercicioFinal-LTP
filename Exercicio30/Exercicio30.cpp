//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 30
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/* 30.	Crie uma função que receba como parâmetros um vetor de números inteiros e o seu tamanho.
        A função deve retornar a soma de todos os elementos do vetor. 
        No programa principal, leia o tamanho do vetor, depois os seus elementos, 
        chame a função para calcular a soma e exiba o resultado.
*/

int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf_s("%d", &tamanho);
    
    int vetor[tamanho];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf_s("%d", &vetor[i]);
    }
    
    int soma = calcularSoma(vetor, tamanho);
    
    printf("A soma dos elementos do vetor é: %d\n", soma);
    
    return 0;
}
