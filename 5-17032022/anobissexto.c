#include <stdio.h>

int main(){

    int qtd = 0, ano;

    for (ano = 1950; ano <= 2022; ano++)
    {

        if (ano % 4 == 0){
            printf("Ano Bissexto: %d\n", ano);
            qtd++;
        }
    
    }

    printf("Encontramos %d anos bissextos!\n", qtd);

    return 0;
}