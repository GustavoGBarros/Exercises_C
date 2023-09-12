// Fa�a um algoritmo que pe�a dois valores inteiros. Em seguida, o algoritmo deve apresentar primeiro o valor mais baixo e, depois, o valor mais alto. Observa��o: fa�a de conta que o usu�rio nunca digitar� o mesmo valor nas duas vezes.
#include <stdio.h>
#include <math.h>

int main(){
	int VAL1, VAL2;
	printf("Digite um valor: \n");
	scanf("%i", &VAL1);
	printf("Digite outro valor: \n");
	scanf("%i", &VAL2);
	if (VAL1 > VAL2)
	 printf("O menor valor e %i e o maior e %i", VAL2, VAL1);
	else
	 printf("O menor valor e %i e o maior e %i", VAL1, VAL2);
return 0;
}
