//Em uma indústria de parafusos, um algoritmo determina se a produção está boa ou ruim. Uma produção é ruim quando o número de parafusos com defeito for maior do que 10% do total produzido. Faça um algoritmo que peça o número total de parafusos produzidos e, em seguida, peça o número de parafusos com defeito. O algoritmo, então, deve calcular o limite de peças com defeito permitidas (com base no total de peças produzidas e a porcentagem limite) e apresentar se a produção está boa ou ruim
#include <stdio.h>
#include <math.h>

int main(){
    int PARAF, PARAFR;
    printf("Digite o numero total de parafusos: \n");
    scanf("%i", &PARAF);
    printf("Digite a quantidade de parafusos com defeito: \n");
    scanf("%i", &PARAFR);
    if (PARAFR > 0.1 * PARAF) {
     printf("A producao esta ruim");
    } else {
     printf("A producao esta boa");
    }
return 0;
}