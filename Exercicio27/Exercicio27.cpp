//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 27 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/*  27.	Elabore uma função que receba dois números inteiros como parâmetros e retorne o maior entre eles. 
        No programa principal, leia dois números inteiros do usuário e, utilizando a função, exiba qual deles é o maior.
 
*/

int maior(int a, int b) {  
    if (a > b) {  
        return a;  
    } else {  
        return b;  
    }  
}

int main() {  
    int num1, num2;  
    
    printf("Digite o primeiro numero: ");  
    scanf_s("%d", &num1);  
    
    printf("Digite o segundo numero: ");  
    scanf_s("%d", &num2);  
    
    int resultado = maior(num1, num2);  
    
    printf("O maior numero e: %d\n", resultado);  
    
    return 0;  
}
