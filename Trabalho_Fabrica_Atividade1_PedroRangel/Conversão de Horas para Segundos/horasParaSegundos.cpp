#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale (LC_ALL, "Portuguese");
    // Declara��o da vari�vel para armazenar a quantidade de horas
    int horas;

    // Solicita��o da quantidade de horas ao usu�rio
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas); 

    // Convers�o de horas para segundos
    // 1 hora � igual a 3600 segundos
    int segundos = horas * 3600; 

    // Exibi��o do resultado da convers�o
    printf("%d horas equivalem a %d segundos.\n", horas, segundos);

	//finalizar o programa
    system ("pause");
    
    return 0;
}

