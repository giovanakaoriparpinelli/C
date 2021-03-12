/*
LT02_EX10: Faça um programa em Linguagem C que peça o mês do ano (um número de 1 a 12). 
O algoritmo deve apresentar a mensagem de quantos dias o mês tem, ou “mês inválido”, caso digite um mês inválido.
*/

#include <stdio.h>
int main () {
    int mes = 0;
    printf("Insira um mês do ano: ");
    scanf("%d", &mes);
    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês tem 31 dias");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês tem 30 dias");
            break;
        case 2:
            printf("O mês costuma ter 28 dias, porém em anos bissextos ele tem 29 dias");
            break;
        default:
            printf("Mês inválido. Tente novamente");
            break;
    }
    return 0;
}
