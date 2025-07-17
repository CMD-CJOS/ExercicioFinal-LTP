//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 13  
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/* 13.	Faça um programa que receba um número inteiro não negativo e calcule o seu fatorial. 
*/


int main() {  
	int num, fatorial = 1;
	int numorig;

	printf("Digite um numero inteiro nao negativo: ");
	scanf_s("%d", &num);
	numorig = num;

	while (num > 1 ) {

		if (num == 0 || num == 1) {
			fatorial = 1;
			break;
		}
		 else {
			fatorial = num * fatorial;
		}
		num--;
	}
	printf("Fatorial do numero %d: %d\n", numorig, fatorial);
	return 0;
}
