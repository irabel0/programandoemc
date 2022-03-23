#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");

    int num;
    printf("Informe o número: ");
    scanf("%d",&num);

    if (num > 20){
        printf("Maior que 20\n");
    }
    else if (num == 20){
        printf("Número 20\n");
    }
    else{
        printf("Menor que 20\n");
    }

}