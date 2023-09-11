// Calcular a média ponderada obtida por um aluno para 2 notas bimestrais.
#include <stdio.h>

int main(){
    float NOTA1, NOTA2, PESO1, PESO2, MEDIA;
    printf("Digite a nota do primeiro bimestre: \n");
    scanf("%f", &NOTA1);
    printf("Digite a nota do segundo bimestre: \n");
    scanf("%f", &NOTA2);
    printf("Digite o peso do primeiro bimestre: \n");
    scanf("%f", &PESO1);
    printf("Digite o peso do segundo bimestre: \n");
    scanf("%f", &PESO2);
    MEDIA = (NOTA1 * PESO1) + (NOTA2 + PESO2) / (PESO1 + PESO2);
    printf("A media ponderada final é %f", MEDIA);
    return 0;
}