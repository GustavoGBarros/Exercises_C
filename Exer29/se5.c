// Faça um algoritmo que peça uma senha (apenas numérica). Em seguida, o algoritmo deve pedir a confirmação da senha. Se a senha repetida for igual à original, apresentar a mensagem “Senha criada com sucesso”. Do contrário, apresentar a mensagem “senha não confere”
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
