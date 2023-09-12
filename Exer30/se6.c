// Faça um algoritmo que peça uma nota N1 e, em seguida, uma nota N2. O algoritmo deve calcular a média das duas notas e apresentar a mensagem “Aprovado”, caso o resultado seja maior ou igual a 6; ou “Reprovado”, caso o resultado seja inferior a 6.
#include <stdio.h>
#include <math.h>

int main(){
	float NOTA1, NOTA2, MEDIA;
	printf("Digite sua primeira nota \n");
	scanf("%f", &NOTA1);
	printf("Digite a sua segunda nota \n");
	scanf("%f", &NOTA2);
	MEDIA = (NOTA1 + NOTA2) / 2;
	if (MEDIA >= 6)
	 printf("Aprovado");
	else
	 printf("Reprovado");
return 0;
}
