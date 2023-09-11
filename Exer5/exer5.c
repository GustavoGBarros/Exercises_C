// Faça um algoritmo que peça a idade do usuário, depois o ano de nascimento do usuário, e apresente a mensagem: “Você tem <idade> anos e nasceu em <ano de nascimento>!”
#include <stdio.h>

int main(){
    int IDADE, NASCIMENTO;
    printf("Digite a sua idade: \n");
    scanf("%i", &IDADE);
    printf("Digite o ano de seu ano de nascimento: \n");
    scanf("%i", &NASCIMENTO);
    printf("Você tem %i e nasceu em %i!", IDADE, NASCIMENTO);
    return 0;
}