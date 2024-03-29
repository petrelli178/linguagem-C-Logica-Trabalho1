#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main (void) {
setlocale (LC_ALL, "Portuguese");
int num1, num2, res;
	
//processamento
printf("Primeiro numero a ser somado ");
scanf("%d",&num1);
printf("Segundo numero a ser somado ");
scanf("%d", &num2);
res = num1 + num2;
//saída
printf("A soma do numero %d e %d é de %d\n", num1, num2, res);

//finalizar o programa
system ("pause");

return 0;		
}
