// Faça um algoritmo que peça o nome do usuário, depois a idade do usuário e, em seguida, digite a mensagem: “Legal, <nome do usuário>! Você tem <idade> anos!”.
#include <stdio.h>

int main(){
    int IDADE;
    char NOME[50];
    printf("Qual o seu nome? \n");
    scanf("%s", &NOME);
    printf("Qual a sua idade? \n");
    scanf("%i", &IDADE);
    printf("Legal, %s! Você tem %i anos", NOME, IDADE);
    return 0;
}