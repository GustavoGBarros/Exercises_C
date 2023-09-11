// Calcular a velocidade média para um veículo que percorre uma distância X em um tempo Y.
#include <stdio.h>

int main(){
    float DISTANCIA, VELOCIDADE, TEMPO;
    printf("Digite a distancia percorrida: \n");
    scanf("%f", &DISTANCIA);
    printf("Digite o tempo que percorreu: \n");
    scanf("%f", &TEMPO);
    VELOCIDADE = DISTANCIA / TEMPO;
    printf("A velocidade média é: %.2f", VELOCIDADE);
    return 0;
}