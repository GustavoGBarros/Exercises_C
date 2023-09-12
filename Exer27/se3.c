//Faça um algoritmo que peça a temperatura corporal do usuário. Se a temperatura for menor que 37, apresentar a mensagem “você está sem febre”. Do contrário, apresentar a mensagem “você está com febre!”
#include <stdio.h>
#include <math.h>

int main(){
	float TEMPC;
	printf("Qual a sua temperatura corporal? \n");
	scanf("%f", &TEMPC);
	if (TEMPC < 37)
	 printf("Voce esta sem febre \n");
	else
	 printf("Voce esta com febre \n");
return 0;
}
