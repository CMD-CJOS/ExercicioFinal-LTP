//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 28 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/* 28.	Desenvolva uma função que receba um número inteiro positivo como parâmetro e 
        retorne 1 se o número for primo, ou 0 caso contrário.
        No programa principal, leia um número do usuário e, 
        utilizando a função, informe se o número é primo ou não.
*/


int ehPrimo(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}


int main() {
    int numero;
    
    printf("Digite um numero inteiro positivo: ");
    scanf_s("%d", &numero);
    
    if (ehPrimo(numero)) {
        printf("%d eh primo.\n", numero);
    } else {
        printf("%d nao eh primo.\n", numero);
    }
    
    return 0;
}
