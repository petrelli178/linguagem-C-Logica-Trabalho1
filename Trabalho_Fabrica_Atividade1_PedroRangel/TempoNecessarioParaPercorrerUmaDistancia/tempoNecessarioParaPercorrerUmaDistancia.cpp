#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    // Vari�veis para armazenar a dist�ncia e a velocidade m�dia
    float distancia, velocidade, tempo;

    // Entrada: Solicita��o da dist�ncia e da velocidade m�dia
    printf("Digite a distancia (em km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidade);

    // Processamento: C�lculo do tempo necess�rio para percorrer a dist�ncia
    tempo = distancia / velocidade;

    // Sa�da: Exibi��o do tempo necess�rio
    printf("Tempo necessario: %.2f horas.\n", tempo);
    
    //finalizar o programa
    system ("pause");

    return 0;
}

