#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Declaração das variáveis para armazenar as temperaturas em Celsius e Fahrenheit
    float celsius, fahrenheit;

    // Solicitação da temperatura em Celsius ao usuário
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Conversão de Celsius para Fahrenheit usando a fórmula F = (C * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    // Exibição do resultado da conversão
    printf("A temperatura %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    //finalizar o programa
    system ("pause");
    
	return 0;
}
