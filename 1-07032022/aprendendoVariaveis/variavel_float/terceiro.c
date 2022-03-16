#include <stdio.h>
#define PI 3.14159

int main()

{
    float raio, area;
    printf("Digite o valor do raio do círculo e pressione ENTER\n");
    scanf("%f", &raio);
    printf("Raio digitado: %12.2f\n", raio);
    area = (PI * raio * raio);
    printf("Área do círculo: %f\n", area);
    return 0;

}