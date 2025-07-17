//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 21  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  



/* 21.	Faça um programa que leia um vetor de 8 números inteiros. 
        Em seguida, o programa deve contar e exibir quantos desses números são pares e quantos são ímpares.         
*/



int main() {
    int vetor[8], i, pares = 0, impares = 0;

    for (i = 0; i < 8; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf_s("%d", &vetor[i]);
    }

    for (i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;	
        } else {
            impares++;
        } 
        
    }
 
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros impares: %d\n", impares);
    return 0;
}
