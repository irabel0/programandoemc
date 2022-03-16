//Programa para calcular desconto salarial: se o salário do funcionário for maior do que R$5.000,00, haverá um desconto de 5%. Caso contrário, não haverá desconto.

#include <stdio.h>
#define limite 5000

int main()
{
    float salarioReal, salarioFinal, valorDesc, desconto;

    
      
    printf("Qual o salário do funcionário?\n");
    scanf("%f", &salarioReal);
    valorDesc = salarioReal * 0.05;
    salarioFinal = salarioReal - valorDesc;    

        if (salarioReal > limite)
        {
            printf("Seu salário é: R$ %.2f\n", salarioFinal);
            printf("Valor descontado: R$ %.2f\n", valorDesc);
        }
        else
        {
            printf("Não haverá desconto!\n");
        }

    return 0;    
}