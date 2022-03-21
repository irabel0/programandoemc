#include <stdio.h>

int main(){

    int decimal = 0, resto = 1, multiplicador =1, resultado = 0, displayDecimal;

    system("clear");

    printf("INICIANDO CONVERSOR ''DECIMAL -> BINÁRIO''\n");

    printf("\nDigite um número e tecle ENTER: ");
    scanf("%d", &decimal);

    displayDecimal = decimal;

    while(decimal != 0){
        resto = decimal % 2;
        decimal = decimal / 2;
        resultado = resultado + resto * multiplicador;
        multiplicador = multiplicador * 10;
    }

    printf("Decimal %d convertido em binário = ", displayDecimal);
    printf("%d", resultado);
    printf("\n");

    return 0;

}