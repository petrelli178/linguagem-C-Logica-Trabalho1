#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Declara��o das vari�veis para armazenar as coordenadas dos dois pontos
    float x1, y1, x2, y2;

    // Entrada: Solicita��o das coordenadas do primeiro ponto
    printf("Digite a coordenada x do primeiro ponto: ");
    scanf("%f", &x1);
    printf("Digite a coordenada y do primeiro ponto: ");
    scanf("%f", &y1);

    // Entrada: Solicita��o das coordenadas do segundo ponto
    printf("Digite a coordenada x do segundo ponto: ");
    scanf("%f", &x2);
    printf("Digite a coordenada y do segundo ponto: ");
    scanf("%f", &y2);

    // Processamento: C�lculo da dist�ncia entre os dois pontos
    float distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Sa�da: Exibi��o da dist�ncia entre os dois pontos
    printf("A distancia entre os dois pontos �: %.2f\n", distancia);
    
    //finalizar o programa
    system ("pause");

    return 0;
}

