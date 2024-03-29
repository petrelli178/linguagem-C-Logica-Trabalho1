#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    // Variáveis 
    float preco, desconto;

    // Entrada: 
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto: ");
    scanf("%f", &desconto);

    // Processamento: 
    float preco_final = preco - (preco * (desconto / 100));

    // Saída: 
    printf("O preço final do produto com desconto é: %.2f\n", preco_final);
    
    //finalizar o programa
    system ("pause");

    return 0;
}
