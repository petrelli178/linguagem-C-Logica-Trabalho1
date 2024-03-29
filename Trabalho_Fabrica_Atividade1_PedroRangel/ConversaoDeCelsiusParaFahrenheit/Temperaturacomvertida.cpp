#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Declara��o das vari�veis para armazenar as temperaturas em Celsius e Fahrenheit
    float celsius, fahrenheit;

    // Solicita��o da temperatura em Celsius ao usu�rio
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    // Convers�o de Celsius para Fahrenheit usando a f�rmula F = (C * 9/5) + 32
    fahrenheit = (celsius * 9/5) + 32;

    // Exibi��o do resultado da convers�o
    printf("A temperatura %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    //finalizar o programa
    system ("pause");
    
	return 0;
}
