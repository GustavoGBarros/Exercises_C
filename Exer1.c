#include <stdio.h>

int main()
{
int IDADE, ANO;
printf(" \n Informe o ao de nascimento: ");
scanf("%i", &ANO);
IDADE = 2023 - ANO;
printf("Voc� tem %i anos e nasceu em %i anos", IDADE, ANO);
return 0;
}
