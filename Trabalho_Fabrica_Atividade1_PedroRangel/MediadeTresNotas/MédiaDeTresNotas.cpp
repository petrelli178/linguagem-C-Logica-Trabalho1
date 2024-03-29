#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  // Declaração das variáveis para armazenar as notas
  float nota1, nota2, nota3, media;
  
  // Solicitação das notas ao usuário
  printf("Digite a sua primeira nota ");
  scanf("%f", &nota1);
  
  printf("Digite a sua segunda nota ");
  scanf("%f", &nota3);
  
  printf("Digite a sua terceira nota ");
  scanf("%f", &nota3);
  // Cálculo da média aritmética
  media = (nota1 + nota2 + nota3) / 3;
  	
  //Exebição do Resultado
  printf("A média das suas notas é de %.2f\n", media);
	
  //finalizar o programa
  system ("pause");


  
  
  
  
  
  return 0;
}
