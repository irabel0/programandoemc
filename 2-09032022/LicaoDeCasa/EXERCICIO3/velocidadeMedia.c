#include <stdio.h>

int main()

{
//--------------------------------------------------------------------//
    int velMedia, dist, temp;                                         //
//--------------------------------------------------------------------//
    printf("Insira a distancia em quilometros e pressione ENTER\n");  //
    scanf("%d", &dist);                                               //
//--------------------------------------------------------------------//
    printf("Insira o tempo em horas e pressione ENTER\n");            //      
    scanf("%d", &temp);                                               //
//--------------------------------------------------------------------//
    velMedia = dist / temp;                                           //    
//--------------------------------------------------------------------//
    printf("Velocidade Media: %d km/h\n", velMedia);                  //
//--------------------------------------------------------------------//
    return 0;                                                         //
//--------------------------------------------------------------------//
}