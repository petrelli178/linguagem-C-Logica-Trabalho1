#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	
	setlocale (LC_ALL, "Portuguese");
	// Declaração das variáveis
    float base, altura, area;

	// Solicitação da base ao usuário
    printf("Qual e a base? ");
    scanf("%f", &base);
	// Solicitação da altura ao usuário
    printf("Qual e a altura? ");
    scanf("%f", &altura);
	
	// Processamento
    area = base * altura;
	
	// Saída
    printf("A area do retangulo e %.2f\n", area);
    
    
    //finalizar o programa
    system ("pause");

    return 0;
}

