// Calcular o preço de venda de um carro que é formado pelo preço da montadora, mais 15% de lucro, mais 11% de IPI, mais 17% de ICMS; as porcentagens são aplicadas sobre o preço da montadora; apresente o preço de venda, o valor do lucro e o valor de cada um dos impostos (IPI e ICMS). Para o preço da montadora igual a R$ 130.000,00, o preço de venda é R$ 185.900,00, o lucro é R$ 19.500,00, o IPI é R$ 14.300,00 e o ICMS é R$ 22.100,00.
#include <stdio.h>

int main(){
    float MONTADORA, ICMS, LUCRO, IPI, TOTAL;
    printf("Qual o valor na montadora: \n");
    scanf("%f", &MONTADORA);
    ICMS = 0.17 * MONTADORA;
    IPI = 0.11 * MONTADORA;
    LUCRO = 0.15 * MONTADORA;
    TOTAL = LUCRO + ICMS + IPI + MONTADORA;
    printf("O valor da venda final é: R$%.2f", TOTAL);
    return 0;
}