/*
LT02_EX01: Criar um algoritmo que leia 2 números. Caso o primeiro número lido seja maior que o segundo, 
imprima na tela o primeiro número menos o segundo, caso contrário mostre a soma dos dois números.
*/

#include <stdio.h>
int main() {
    int n1 = 0,
        n2 = 0,
        result = 0;
    scanf("%d" "%d", &n1, &n2);
    if(n1 > n2){
        result = n1 - n2;
    }else{
        result = n1 + n2;
    }
    printf("%d", result);
    return 0;
}
