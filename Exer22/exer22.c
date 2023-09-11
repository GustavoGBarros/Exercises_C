// Calcular a quantidade de galões cheios de 5 litros de combustível necessária para uma viagem em um automóvel que faz 12 Km/l; o tempo gasto e a velocidade média na viagem são informados pelo usuário. Por exemplo: Para uma viagem de 3 horas na velocidade de 80 Km/h, são necessários 4 galões cheios.
#include <stdio.h>
#include <math.h>

int main(){
    float VMEDIA, DISTANCIA, TEMPO, GALOES;
    printf("Digite o tempo gasto: \n");
    scanf("%f", &TEMPO);
    printf("Qual foi a velocidade média dessa viagem? \n");
    scanf("%f", &VMEDIA);
    DISTANCIA = VMEDIA * TEMPO;
    GALOES = DISTANCIA / 60;
    GALOES = ceil(GALOES);
    printf("O total de galões é %.0f", GALOES);
    return 0;
}