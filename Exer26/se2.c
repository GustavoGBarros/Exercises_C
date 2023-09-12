// Fa�a um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for menor do que R$ 1.045, o algoritmo deve apresentar a mensagem �voc� ganha menos do que um sal�rio m�nimo�. Do contr�rio, o algoritmo deve apresentar a mensagem �voc� ganha pelo menos um sal�rio m�nimo�.
#include <stdio.h>
#include <math.h>

int main(){
	float SALARIO;
	printf("Qual valor do seu salario: \n");
	scanf("%f", &SALARIO);
	if (SALARIO < 1045)
	{
	 printf("Voce ganha menos que um salario minimo \n");
	}
	else
	{
	 printf("Voce ganha pelo menos um salario minimo \n");
	}
return 0;
}
