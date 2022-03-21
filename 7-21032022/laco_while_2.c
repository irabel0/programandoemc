#include <stdio.h>

int main(){

    system("clear");

    int opt = 0;
    printf("\nDigite um número para sair e pressione ENTER!\n");
    scanf("%d", &opt);

    while(opt != 9){
        system("clear");
        printf("\nVOCÊ ERROU!\n");
        printf("\nTente novamente...\n");
        scanf("%d", &opt);

        printf("FINALMENTE KKKKKKKKK\n");
    }

    return 0;
}