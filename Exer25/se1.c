// Faça um algoritmo que pe�a o sal�rio de um funcion�rio. Se o sal�rio for maior do que R$ 10.000, o programa dever� apresentar a mensagem �voc� ganha bem!�
#include <stdio.h>
#include <math.h>

int main(){
	float SALARIO;
	printf("Digite o valor do seu salario: \n");
	scanf("%f", &SALARIO);
	if (SALARIO>=10000)
	{
	 printf ("Voce ganha bem \n");
	}
	else
	{
	 printf("Voce ganha mal \n");
	}
	printf("Tchau");
	return 0;
}
