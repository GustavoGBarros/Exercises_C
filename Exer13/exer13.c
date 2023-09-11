// Escreva um programa que calcule: a) a área de um triângulo b) a área de um círculo. Solicitar os dados necessários para calcular cada área, mostrando o resultado na tela.
#include <stdio.h>
#include <math.h>

int main(){
    float BTRI, HTRI, RCIR, ATRI, ACIR;
    printf("Digite a medida da base do triângulo: \n");
    scanf("%f", &BTRI);
    printf("Digite a altura do triângulo: \n");
    scanf("%f", &HTRI);
    ATRI = (HTRI * BTRI)/2;
    printf("Digite o raio do circulo: \n");
    scanf("%f", &RCIR);
    ACIR = M_PI * pow(RCIR, 2);
    printf("A área do triângulo é %.2f e a área do círculo é %.2f", ATRI, ACIR);
    return 0;
}