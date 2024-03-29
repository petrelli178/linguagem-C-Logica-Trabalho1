#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL, "Portuguese");
    // Declaração da variável para armazenar a quantidade de horas
    int horas;

    // Solicitação da quantidade de horas ao usuário
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas); 

    // Conversão de horas para segundos
    // 1 hora é igual a 3600 segundos
    int segundos = horas * 3600; 

    // Exibição do resultado da conversão
    printf("%d horas equivalem a %d segundos.\n", horas, segundos);

	//finalizar o programa
    system ("pause");
    
    return 0;
}

