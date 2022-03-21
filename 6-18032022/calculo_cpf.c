#include <stdio.h>

int main(){
    
    int peso10 = 10, peso11 = 11, total = 0, resto = 0, confere;
    char cpf[11];

    system("clear");
    printf("Digite os 11 dígitos do CPF (sem pontuação): ");
    scanf("\n%s", cpf);

    int iCpf[11];
    for (int x = 0; x <= 10; x++)
    {
        iCpf[x] = cpf[x] - 48;
    }

    //----------9 digitos-------------------//

    for (int i = 0; i <= 8; i++)
    {
        total += iCpf[i]*peso10;
        peso10--;
    }

    resto = total%11;

    if (resto < 2){
        iCpf[9] = 0;
    }
    else {
        iCpf[9] = 11 - resto;
    }

    total = 0;
    resto = 0;

    //------------10 digitos-----------------//
    
    for (int i = 0; i <= 9; i++)
    {
        total += iCpf[i]*peso11;
        peso11--;
    }

    resto = total%11;

    if (resto < 2){
        iCpf[10] = 0;
    }
    else {
        iCpf[10] = 11 - resto;
    }

    for (int i = 0; i <= 10; i++){
        printf("%d", iCpf[i]);       
    }

    printf("\n");

    return 0;

}