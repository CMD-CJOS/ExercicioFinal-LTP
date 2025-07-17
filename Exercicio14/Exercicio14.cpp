//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 14  
#include <stdio.h>  
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS  


/*14.	Faça um programa que funcione como uma calculadora de dois números, exibindo a seguinte tela para o usuário:
1 - Soma 
2 - Subtração 
3 - Divisão
4 –Multiplicação
5 – Sair
*/



int main() {
	int opcao = 0;
	float num1, num2, resultado;

	printf("Digite o primeiro numero: ");
	scanf_s("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf_s("%f", &num2);

	while (opcao != 5) {

		printf("Escolha uma opcao:\n");
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Divisao\n");
		printf("4 - Multiplicacao\n");
		printf("5 - Sair\n");
		scanf_s("%d", &opcao);
		system("cls");

		switch (opcao) {
		case 1:
			resultado = num1 + num2;
			printf("Resultado da soma: %.2f\n", resultado);
			break;
		case 2:
			resultado = num1 - num2;
			printf("Resultado da subtracao: %.2f\n", resultado);
			break;
		case 3:
			if (num2 != 0) {
				resultado = num1 / num2;
				printf("Resultado da divisao: %.2f\n", resultado);
			}
			else {
				printf("Erro: Divisao por zero!\n");
			}
			break;
		case 4:
			resultado = num1 * num2;
			printf("Resultado da multiplicacao: %.2f\n", resultado);
			break;
		case 5:
			printf("Saindo...\n");
			break;
		default:
			printf("Opcao invalida! Tente novamente.\n");
		}
	}
	return 0;
}
