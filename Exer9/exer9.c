// Faça um algoritmo que peça uma temperatura em graus farenheits e apresente seu respectivo valor em celsius. O cálculo de conversão é: C= 5*(F-32)/9.

#include <stdio.h>
int main(){
    float CELSIUS, FARENHEITS;
    printf("Qual a temperatura em Farenheits? \n");
    scanf("%f", &FARENHEITS);
    CELSIUS = 5*(FARENHEITS-32)/9;
    printf("A temperatura em celsius é %.2f", CELSIUS);
    return 0;
}