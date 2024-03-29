#include <stdio.h>
#include <math.h> // Biblioteca para usar M_PI e pow()
#include <locale.h>
#include <stdlib.h> 

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Declara��o das vari�veis
	float raio, volume;
	
	// Entrada: Solicita��o do raio ao usu�rio
	printf("Insira o raio da esfera: ");
    scanf("%f", &raio);
    
    // Processamento: C�lculo do volume da esfera usando a f�rmula Volume
    // M_PI e pow() da biblioteca math.h para calcular o volume
    volume = (4.0 / 3.0) * M_PI * pow(raio, 3);
    
    //sa�da
     printf("O volume da esfera com raio %.2f � %.2f\n", raio, volume);
     
     //finalizar o programa
    system ("pause");
     
    
    
     return 0;
}
