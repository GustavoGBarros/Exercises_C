// Calcular: 𝑥2  e  𝑥3 
#include <stdio.h>

int main(){
    float X2, X3, X;
    printf("Digite o valor de X: \n");
    scanf("%f", &X);
    X2 = X * X;
    X3 = X * X * X;
    printf("O valor de x ao quadrado é: %.2f e de x ao cubo é: %.2f", X2, X3);
    return 0;
}