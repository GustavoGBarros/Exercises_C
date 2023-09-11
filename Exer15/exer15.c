// Obter dois números inteiros, e apresentar: a) a soma destes números; b) a subtração destes números;
#include <stdio.h>

int main(){
    int NUM1, NUM2, SOMA, SUB, VEZ;
    printf("Digite o valor do primeiro número: \n");
    scanf("%i", &NUM1);
    printf("Digite o valor do segundo número: \n");
    scanf("%i", &NUM2);
    SOMA = NUM1 + NUM2;
    SUB = NUM1 - NUM2;
    VEZ = NUM1 * NUM2;
    printf("O valor da some é %i, de subtração é %i e de multiplacação é %i", SOMA, SUB, VEZ);
    return 0;
}