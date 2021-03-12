#include <stdio.h>
int main () {
    float raio = 0, area = 0;
    printf("Insira o raio da circunferência: ");
    scanf("%f", &raio);
    area = (raio*raio)*3.14;
    printf("A área da circunferência é: %.2f", area);
    return 0;
}
