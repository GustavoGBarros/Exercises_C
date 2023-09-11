// Faça um algoritmo que peça o nome do usuário e, em seguida, digite a mensagem: “Seja bem vindo, <nome do usuário>.
#include <stdio.h>

int main(){
    char NOME[50];
    printf("Qual o seu nome? \n");
    scanf("%s", &NOME);
    printf("O seu nome é %s", NOME);
    return 0;
}