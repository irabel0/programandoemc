#include <stdio.h>

int main()

{

    char car_name;                                                  //char = variável do tipo caractere; car_name = nome da variável
    printf("Digite o nome de um carro e pressione ENTER\n");        
    scanf("%c", &car_name);                                         //%c = Lê o primeiro caractere da variável "&"car_name
    printf("Nome informado: %c\n", car_name);                       
    return 0;

}