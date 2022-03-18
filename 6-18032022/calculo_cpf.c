#include <stdio.h>

int main(){
    
    int peso10 = 10, peso11 = 11, total = 0, resto = 0;
    char cpf[11];

    system("clear");
    printf("Digite os 11 dígitos do CPF (sem pontuação): ");
    scanf("\n%s", cpf);

    int iCpf[11];
    for (int x = 0; x <= 10; x++)
    {
        iCpf[x] = cpf[x] - 48;
    }

    for (int i = 0; i <= 8; i++)
    {
        printf("%d\n", cpf[i]*peso10);
        peso10--;
        
    }

    return 0;

}