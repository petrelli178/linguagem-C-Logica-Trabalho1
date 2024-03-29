#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Peso e altura da pessoa
    float peso, altura;

    // Entrada: Solicitação do peso e altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Processamento: Cálculo do IMC
    float imc = peso / (altura * altura);

    // Saída: Exibição do resultado do IMC
    printf("O IMC da pessoa é: %.2f\n", imc);

	//finalizar o programa
    system ("pause");
    
    return 0;
    
    
}

