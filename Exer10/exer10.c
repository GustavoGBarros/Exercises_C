// Calcular a média final obtida por um aluno, para 4 notas bimestrais.

#include <stdio.h>
int main(){
    float NOTA1, NOTA2, NOTA3, NOTA4, MEDIA;
    printf("Digite a nota sua do primeiro bimestre: \n");
    scanf("%f", &NOTA1);
    printf("Digite a sua nota do segundo bimestre: \n");
    scanf("%f", &NOTA2);
    printf("Digite a sua nota do terceiro bimestre \n");
    scanf("%f", &NOTA3);
    printf("Digite a nota do quarto bimestre \n");
    scanf("%f", &NOTA4);
    MEDIA = (NOTA1 + NOTA2 + NOTA3 + NOTA4) / 4;
    printf("A sua media final é %.2f", MEDIA);
    return 0;
}