//Fa�a um algoritmo que pe�a a temperatura corporal do usu�rio. Se a temperatura for menor que 37, apresentar a mensagem �voc� est� sem febre�. Do contr�rio, apresentar a mensagem �voc� est� com febre!�
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
