#include <stdio.h> 
#include <stdlib.h> 

void main() {

    char nome[30]; 
    int idade, bemAlimentado, resfriado; 
    float peso; 
    
    printf("Informe o nome:"); 
    scanf("%s", &nome); 
    
    printf("Informe o peso:"); 
    scanf("%f", &peso); 
    
    printf("Informe a idade:"); 
    scanf("%d", &idade); 
    
    printf("Esta bem alimentado? <1-5IM / 0-NA0>"); 
    scanf("%d", &bemAlimentado); 
    
    printf("Esta resfriado? <1-5IM / 0-NA0>"); 
    scanf("%d", &resfriado); 
    
        if (peso >= 50 && (idade >= 16 && idade <= 69) && bemAlimentado && !resfriado){
            printf("0 voluntario IS esta apto!", nome); 
        }        
        else{ 
            printf("0 voluntario %s NAO esta apto", nome); 
        }
}