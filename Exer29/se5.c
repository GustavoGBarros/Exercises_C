// Fa�a um algoritmo que pe�a uma senha (apenas num�rica). Em seguida, o algoritmo deve pedir a confirma��o da senha. Se a senha repetida for igual � original, apresentar a mensagem �Senha criada com sucesso�. Do contr�rio, apresentar a mensagem �senha n�o confere�
#include <stdio.h>
#include <math.h>

int main(){
	int SENHA1, SENHA2;
	printf("Digite a sua senha \n");
	scanf("%i", &SENHA1);
	printf("Confirme sua senha: \n");
	scanf("%i", &SENHA2);
	if (SENHA1 == SENHA2)
	{
		printf("Senha criada com sucesso");
	}
	else
	{
		printf("Senha nao confere");
	}
return 0;
}
