#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    // Variáveis para armazenar a distância e a velocidade média
    float distancia, velocidade, tempo;

    // Entrada: Solicitação da distância e da velocidade média
    printf("Digite a distancia (em km): ");
    scanf("%f", &distancia);

    printf("Digite a velocidade media (em km/h): ");
    scanf("%f", &velocidade);

    // Processamento: Cálculo do tempo necessário para percorrer a distância
    tempo = distancia / velocidade;

    // Saída: Exibição do tempo necessário
    printf("Tempo necessario: %.2f horas.\n", tempo);
    
    //finalizar o programa
    system ("pause");

    return 0;
}

