#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Vari�veis 
    float preco, desconto;

    // Entrada: 
    printf("Digite o pre�o do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    // Processamento: 
    float preco_final = preco - (preco * (desconto / 100));

    // Sa�da: 
    printf("O pre�o final do produto com desconto �: %.2f\n", preco_final);
    
    //finalizar o programa
    system ("pause");

    return 0;
}
