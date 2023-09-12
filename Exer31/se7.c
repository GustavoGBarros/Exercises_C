// // Fa�a um algoritmo que pe�a o nome de um usu�rio.
// Em seguida, o algoritmo deve pedir o g�nero do usu�rio
// (�f� para feminino e �m� para masculino).
// Se o usu�rio for do sexo feminino, apresentar a mensagem �Ol�, senhora <nome>�.
//  Do contr�rio, apresentar a mensagem �Ol�, senhor <nome>�.
//  Observa��o: fa�a de conta que o usu�rio sempre digitar� �f� ou �m�.
#include <stdio.h>
#include <math.h>

int main()
{
	char GENERO;
	char NOME[50];

	printf("Digite seu nome \n");
	scanf("%s", &NOME);

	printf("Digite f para feminino e m para masculino \n");
	scanf(" %c", &GENERO);

	GENERO = tolower(GENERO);

	if (GENERO == 'f')
		printf("Ola senhora %s", NOME);
	else if (GENERO == 'm')
		printf("Ola senhor %s", NOME);
	else
		printf("Digite um genero existente (m ou f)");

	return 0;
}