// Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Se a senha for diferente de 123456, apresentar a mensagem �senha n�o confere!�.
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
