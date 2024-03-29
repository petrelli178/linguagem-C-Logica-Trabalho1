#include <stdio.h>
#include <math.h> // Biblioteca para usar M_PI e pow()
#include <locale.h>
#include <stdlib.h> 

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Declaração das variáveis
	float raio, volume;
	
	// Entrada: Solicitação do raio ao usuário
	printf("Insira o raio da esfera: ");
    scanf("%f", &raio);
    
    // Processamento: Cálculo do volume da esfera usando a fórmula Volume
    // M_PI e pow() da biblioteca math.h para calcular o volume
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    
    //saída
     printf("O volume da esfera com raio %.2f é %.2f\n", raio, volume);
     
     //finalizar o programa
    system ("pause");
     
    
    
     return 0;
}
