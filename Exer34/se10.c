// Faça um programa que peça um número inteiro e apresente a mensagem “é par” ou “é ímpar”. Dica: use o operador %. Este operador retorna o resto de uma divisão. Por exemplo: 5%2 retornará o resto da divisão de 5 por 2. Então, 5%2=1 (porque 5 dividido por 2 é igual a 2 e resta 1). Por outro lado, 6%2=0, porque 6 dividido por 2 é igual a 3 e resta 0.
#include <stdio.h>
#include <math.h>

int main(){
    int NUM1;
    printf("Digite o valor de um numero inteiro: \n");
    scanf("%i", &NUM1);
    if (NUM1 % 2 == 0) {
     printf("Seu numero e par");
    }
    else {
     printf("Seu numero e impar");
    }
return 0;
}