//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 19  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/* 19.	Desenvolva um programa que leia 10 números inteiros e os armazene em um vetor. 
        O programa deve então encontrar e exibir o maior e o menor valor presente no vetor, 
        bem como suas respectivas posições (índices).
*/


int main() {  
    int numeros[10];  
    int i, maior, menor;  
    int posMaior, posMenor;  
 
    for (i = 1; i <= 5; i++) {  
        printf("Digite o %d numero: ", i);  
        scanf_s("%d", &numeros[i]);  
    }  

    maior = numeros[1];  
    menor = numeros[1];  
    posMaior = 1;  
    posMenor = 1;  
 
    for (i = 1; i <= 5; i++) {  
        if (numeros[i] > maior) {  
            maior = numeros[i];  
            posMaior = i;  
        }  
        if (numeros[i] < menor) {  
            menor = numeros[i];  
            posMenor = i;  
        }  
    }  
    printf("Maior valor: %d na posicao %d\n", maior, posMaior);  
    printf("Menor valor: %d na posicao %d\n", menor, posMenor);  
    return 0;  
}
