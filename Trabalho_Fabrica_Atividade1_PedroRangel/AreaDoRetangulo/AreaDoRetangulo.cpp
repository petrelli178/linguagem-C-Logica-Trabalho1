#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	
	setlocale (LC_ALL, "Portuguese");
	// Declara��o das vari�veis
    float base, altura, area;

	// Solicita��o da base ao usu�rio
    printf("Qual e a base? ");
    scanf("%f", &base);
	// Solicita��o da altura ao usu�rio
    printf("Qual e a altura? ");
    scanf("%f", &altura);
	
	// Processamento
    area = base * altura;
	
	// Sa�da
    printf("A area do retangulo e %.2f\n", area);
    
    
    //finalizar o programa
    system ("pause");

    return 0;
}

