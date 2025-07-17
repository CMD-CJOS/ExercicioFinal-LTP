//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 22  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/*  22.	Crie um programa que leia um vetor de N números inteiros (N informado pelo usuário). Depois,
    leia um número inteiro X e verifique se X existe no vetor. Se existir,
    o programa deve informar a primeira posição (índice) em que X foi encontrado. Caso contrário, 
    deve informar que o número não foi encontrado.
    
*/


int main() {  
    int n, x, i;  
    int vetor[100]; 
    
 
    printf("Informe o tamanho do vetor (N): ");  
    scanf_s("%d", &n);
    
 
    printf("Informe os %d numeros inteiros:\n", n);  
    for (i = 1; i <= n; i++) {  
        scanf_s("%d", &vetor[i]);  
    }  
 
    printf("Informe o numero X a ser pesquisado: ");  
    scanf_s("%d", &x);
    
 
    for (i = 1; i <= n; i++) {  
        if (vetor[i] == x) {  
            printf("O numero %d foi encontrado na posicao %d.\n", x, i);  
            return 0; 
        }  
    }  
    
    printf("O numero %d não foi encontrado no vetor.\n", x);  
    return 0;  
}
