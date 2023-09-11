// Faça um algoritmo que peça uma temperatura em graus célsius e apresente seu respectivo valor em farenheits. O cálculo de conversão é: F= (9*C/5) + 32.
#include <stdio.h>

int main(){
    float CELSIUS, FARENHEITS;
    printf("Digite a temperatura em celsius:\n");
    scanf("%f", &CELSIUS);
    FARENHEITS = (9*CELSIUS/5) + 32;
    printf("A temperatura em farenheits é %.2f", FARENHEITS);
    return 0;
}