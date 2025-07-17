//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 12  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  
#include <math.h>

/* 12.	Faça um programa para calcular o somatório da série 3^0 + 3^1 + 3^2 + ... + 3^N. 
        O valor N deve ser solicitado ao usuário. 
*/

int main() {
        
    int n, soma = 0;  
   
    printf("Digite o valor de N: ");  
    scanf_s("%d", &n);  
    
    while (n >= 0) {  
		soma = pow(3,n) + soma;
		n--;
	}

    printf("O somatório da série 3^0 + 3^1 + ... + 3^%d é: %d\n", n, soma);  
	return 0;

}
