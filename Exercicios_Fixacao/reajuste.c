#include <stdio.h>
#include <stdlib.h>

void main(){

    system("clear");

    int cargo;
    float salAtual, reajuste;

    printf("Informe o cargo do funcionario: "); 
    scanf("%d", &cargo); 
    printf("Informe o salario atual: "); 
    scanf("%f", &salAtual); 

    if (cargo == 1) {
        reajuste = (salAtual * 7) / 100; 
    }
    else if (cargo == 2) {
        reajuste = (salAtual * 9) / 100; 
    }
    else if (cargo == 3) {
        reajuste = (salAtual * 5) / 100; 
    }
    else {
        reajuste = (salAtual * 12) / 100; 
    }

    printf("0 reajuste e: %f", reajuste); 
    printf("0 novo salario e: %f", salAtual + reajuste); 
    
}