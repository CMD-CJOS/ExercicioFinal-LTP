//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 15  
#include <stdio.h>  
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS  


/* 15.	Faça um programa para apresentar e resolver o menu de opções a seguir. Quando o usuário selecionar uma opção, 
        o programa deve solicitar a temperatura a ser convertida e mostrar o resultado da conversão. 
        Apenas a opção 4 deve encerrar o programa. O menu deverá, repetidamente, ser exibido até que a opção 4 seja digitada.*/

int main() {
	int opcao = 0;
	float temp, kelvin, celsius, fahreinheit;

	do {

		printf("Escolha uma opcao:\n");
		printf("1 - Converta temperatura de Celsius para Fahreinheit\n");
		printf("2 - Converta temperatura de Celsius para Kelvin\n");
		printf("3 - Converta temperatura de Fahreinheit para Celsius\n");
		printf("4 - Sair\n");
		scanf_s("%d", &opcao);
		system("cls");

		switch (opcao) {
		case 1:
			printf("Digite a temperatura que sera convertida: ");
			scanf_s("%f", &temp);

			fahreinheit = (temp * 1.8) + 32; // F = C x 1, 8 + 32
			printf("A temperatura %.2f convertida de C para F eh: %.2f\n", temp, fahreinheit);
			break;

		case 2:
			printf("Digite a temperatura que sera convertida: ");
			scanf_s("%f", &temp);

			kelvin = temp + 273.15; // K = C + 273.15
			printf("A temperatura %.2f convertida de K para C eh: %.2f\n", temp, kelvin);
			break;

		case 3:
			printf("Digite a temperatura que sera convertida: ");
			scanf_s("%f", &temp);

			celsius = (temp - 32) / 1.8; // C = (F - 32) / 1.8 ou C = 5 / 9 * (F - 32)
			printf("A temperatura %.2f convertida de F para C eh: %.2f\n", temp, celsius);
			break;

		case 4:
			printf("Saindo...\n");
			break;

		default:
			printf("Opcao invalida! Tente novamente.\n");
		}
	} while (opcao != 4);
	return 0;
}
