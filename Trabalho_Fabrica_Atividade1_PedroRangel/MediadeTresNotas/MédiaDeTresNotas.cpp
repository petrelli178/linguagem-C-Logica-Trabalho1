#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale (LC_ALL, "Portuguese");
  // Declara��o das vari�veis para armazenar as notas
  float nota1, nota2, nota3, media;
  
  // Solicita��o das notas ao usu�rio
  printf("Digite a sua primeira nota ");
  scanf("%f", &nota1);
  
  printf("Digite a sua segunda nota ");
  scanf("%f", &nota3);
  
  printf("Digite a sua terceira nota ");
  scanf("%f", &nota3);
  // C�lculo da m�dia aritm�tica
  media = (nota1 + nota2 + nota3) / 3;
  	
  //Exebi��o do Resultado
  printf("A m�dia das suas notas � de %.2f\n", media);
	
  //finalizar o programa
  system ("pause");


  
  
  
  
  
  return 0;
}
