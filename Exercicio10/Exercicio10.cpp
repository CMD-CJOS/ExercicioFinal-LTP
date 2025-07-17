//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 11  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/* 10.	Faça um programa para ler números inteiros do teclado até que o número 0 seja lido.
        Ao término da leitura, o programa deverá apresentar o maior e o menor número lido (desconsiderando o zero).
 */

int main() {
    int numero[100];
    int contador = 0;
    int maior = 0;
    int menor = 0;
    int i = 0;

    while (true) {
        printf("Digite um numero (0 para sair): ");
        scanf_s("%d", &numero[i]);
        if (numero[i] == 0) {
            break;
        }
        if (contador == 0) { 
            maior = numero[i];
            menor = numero[i];
        } else {
            if (numero[i] > maior) {
                maior = numero[i];
            }
            if (numero[i] < menor) {
                menor = numero[i];
            }
        }
        contador++;
        i++;
    }

    if (contador > 0) {
        printf("O maior numero lido foi: %d\n", maior);
        printf("O menor numero lido foi: %d\n", menor);
    } else {
        printf("Nenhum numero foi lido.\n");
    }
    return 0;
}
