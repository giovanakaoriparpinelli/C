/*
LT02_EX09: Em uma indústria de parafusos, um algoritmo determina se a produção está boa ou ruim.
Uma produção é ruim quando o número de parafusos com defeito for maior do que 10% do total produzido. 
Faça um programa em linguagem C que peça o número total de parafusos produzidos e, em seguida, peça o 
número de parafusos com defeito. O programa, então, deve calcular o limite de peças com defeito permitidas 
(com base no total de peças produzidas e a porcentagem limite) e apresentar se a produção está boa ou ruim.
*/

#include <stdio.h>
int main () {
    int totalProd = 0, defeito = 0;
    printf("Insira o número total de parafusos produzidos: ");
    scanf("%d", &totalProd);
    printf("Insira o número total de parafusos com defeito: ");
    scanf("%d", &defeito);
    if(defeito > 0.1 * totalProd){
        printf("Produção Ruim!");
    }else{
        printf("Produção Boa!");
    }return 0;
}
