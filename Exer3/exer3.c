// Faça um algoritmo que peça a idade do usuário e, em seguida, digite a mensagem: “Legal! Você tem <idade> anos"
#include <stdio.h>

int main(){
    int IDADE;
    printf("Quantos anos você tem? \n");
    scanf("%i", &IDADE);
    printf("Legal! Você tem %i anos", IDADE);
    return 0;
}