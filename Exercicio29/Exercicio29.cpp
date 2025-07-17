//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO  
//Nome: CARLOS JUNIO OLIVEIRA DE SOUZA  
//RA: 5170260  
//Atividade: Lista de Exercícios 2 - Exercício 29 
#include <stdio.h>  
#define _CRT_SECURE_NO_WARNINGS  


/*  29.	Faça uma função que receba uma temperatura em graus Celsius como parâmetro e a converta para Fahrenheit, 
        retornando o valor convertido.
        A fórmula de conversão é: F=(C×9/5)+32. No programa principal,
        leia uma temperatura em Celsius, chame a função e exiba o resultado em Fahrenheit.
*/


float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;
    printf("Digite a temperatura em graus Celsius: ");
    scanf_s("%f", &celsius);
    fahrenheit = celsiusParaFahrenheit(celsius);
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
