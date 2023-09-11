// Elabore um algoritmo para calcular as raízes de uma equação de segundo grau que utilize a fórmula de Bhaskara.
#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, X1, X2, DELTA;
    printf("Digite o valor A: \n");
    scanf("%f", &A);
    printf("Digite o valor de B: \n");
    scanf("%f", &B);
    printf("Digite o valor de C: \n");
    scanf("%f", &C);
    DELTA = pow(B, 2) - 4 * A * C;
    X1 = (- B + pow(DELTA, 0.5)) / 2 * A;
    X2 = (- B - pow(DELTA, 0.5)) / 2 * A;
    printf("As raízes dessa equacação do segundo grau são: %.2f e %.2f", X1, X2);
    return 0;
}