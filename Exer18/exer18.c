//Declare de uma variável do tipo inteiro chamada a, uma variável chamada b do tipo real e uma variável do tipo caracter chamada c. Usando o operador/comando de atribuição, escreva uma instrução para atribuir um valor qualquer para cada uma delas, separadamente.
#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    a = 2;
    b = 5.5;
    c = 'A';
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %.2f\n", b);
    printf("Valor de c: %c\n", c);
    return 0;
}