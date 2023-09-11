// Faça um algoritmo que peça o ano de nascimento do usuário e apresente sua provável idade.
#include <stdio.h>

int main(){
    int NASCIMENTO, IDADE;
    printf("Qual foi o ano do seu nascimento: \n");
    scanf("%i", &NASCIMENTO);
    IDADE = 2023 - NASCIMENTO;
    printf("A sua provável idade é %i", IDADE);
    return 0;
}