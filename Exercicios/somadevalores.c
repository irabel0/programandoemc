#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");

    int x, y, soma;

    printf("Operação Aritimética: SOMA!\n\n");

    printf("Informe o primeiro número: ");
    scanf("%d", &x);
    
    printf("\nInforme o segundo número: ");
    scanf("%d", &y);

    soma = x + y;

    printf("\nResultado da soma: %d\n\n", soma);

}