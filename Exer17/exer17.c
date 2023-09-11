// Declare de três constantes, cada uma possuindo um tipo e valor diferente.
#include <stdio.h>

int main() {
    const int DUZIA = 12;       
    const float TEMPCORP = 36.5;       
    const char INTERROGACAO = '?'; 
    printf("Constante inteira: %i\n", DUZIA);
    printf("Constante de ponto flutuante: %.2f\n", TEMPCORP);
    printf("Constante caractere: %c\n", INTERROGACAO);
    return 0;
}
