#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Peso e altura da pessoa
    float peso, altura;

    // Entrada: Solicita��o do peso e altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Processamento: C�lculo do IMC
    float imc = peso / (altura * altura);

    // Sa�da: Exibi��o do resultado do IMC
    printf("O IMC da pessoa �: %.2f\n", imc);

	//finalizar o programa
    system ("pause");
    
    return 0;
    
    
}

