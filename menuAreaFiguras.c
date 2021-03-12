/*
LT02_EX11: Faça um programa em Linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela. Pense e treine:
OBS1.: e se ao invés de 1, 2 e 3 o menu apresentar as opções A, B e C. Quais mudanças deveriam ser feitas?
OBS2: se você fez o exercício usando IFs, tente fazer usando switch-case. E vice versa.
*/

#include <stdio.h>
int main () {
    int opcao = 0;
    float area = 0,
          base = 0,
          altura = 0,
          raio = 0;
    printf("Menu\n");
    printf("1. Área de um triângulo\n");
    printf("2. Área de um círculo\n");
    printf("3. Área de um cubo\n");
    printf("Qual área você deseja obter? ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Digite a medida da base: ");
            scanf("%f", &base);
            printf("Digite a medida da altura: ");
            scanf("%f", &altura);
            area = (base*altura) / 2;
            break;
        case 2: 
            printf("Digite a medida do raio: ");
            scanf("%f", &raio);
            area = (raio*raio) * 3.14;
            break;
        case 3:
            printf("Digite a medida da base: ");
            scanf("%f", &base);
            printf("Digite a medida da altura: ");
            scanf("%f", &altura);
            area = (base*altura) * 6;
            break;
    }printf("A medida da área da figura escolhida é %.2f", area);
    return 0;
}
