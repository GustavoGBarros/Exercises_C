//Calcular: (𝑎 + 𝑏)2
#include <stdio.h>

int main (){
    float A, B, RESULTADO;
    printf("Digite o valor de a: \n");
    scanf("%f", &A);
    printf("Digite o valor de b: \n");
    scanf("%f", &B);
    RESULTADO = (A + B) * (A + B);
    printf("O resultado é: %.2f", RESULTADO);
    return 0;
}