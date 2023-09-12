// Faça um algoritmo que peça uma senha (apenas numérica). Se a senha for diferente de 123456, apresentar a mensagem “senha não confere!”.
#include <stdio.h>
#include <math.h>

int main(){
	int SENHA;
	printf("Digite uma senha \n");
	scanf("%i", &SENHA);
	if (SENHA != 123456)
	 printf("Senha nao confere");
return 0;
}
