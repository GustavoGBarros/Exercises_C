// Faça um algoritmo que peça a idade do usuário e apresente seu provável ano de nascimento.
#include <stdio.h>

int main(){
    int IDADE, NASCIMENTO;
    printf("Quantos anos você tem? \n");
    scanf("%i", &IDADE);
    NASCIMENTO = 2023 - IDADE;
    printf("O seu provável ano de nascimento é %i", NASCIMENTO);
    return 0;
}