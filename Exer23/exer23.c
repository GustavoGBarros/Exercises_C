//Calcular a quantidade de latas de tinta necessária para pintar um tanque cilíndrico de combustível e o custo do material para o serviço de pintura. A altura e o raio do tanque são fornecidos pelo usuário. O preço da lata de tinta é fornecido pelo usuário. Considere que cada lata contém 5 litros de tinta e que cada litro de tinta pinta 3 metros quadrados da área do tanque. Por exemplo: Para um tanque de 3,06 metros de altura e 1,22 metros de raio, considerando o preço de R$ 50,00 por lata de tinta, são necessárias 2,19 latas de tinta e o custo é de R$ 109,36.
#include <stdio.h>
#include <math.h>

int main(){
    float ALTURA, RAIO, PRECO, PRECOTOTAL, AREA;
    printf("Digite a altura: \n");
    scanf("%f", &ALTURA);
    printf("Digite o raio: \n");
    scanf("%f", &RAIO);
    printf("Digite o preço de cada lata: \n");
    scanf("%f", &PRECO);
    AREA = 2 * M_PI * RAIO * (ALTURA + RAIO);
    PRECOTOTAL = (AREA / 15) * PRECO;
    printf("O custo total é %.2f", PRECOTOTAL);
    return 0;
}