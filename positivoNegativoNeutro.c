/*
LT02_EX05: Faça um programa em linguagem C que peça um número inteiro. Em seguida, 
o programa deve apresentar uma mensagem conforme a seguinte regra: 
a. Se o valor for positivo: “Valor positivo”; 
b. Se o valor for negativo: “Valor negativo”; 
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.
*/

#include <stdio.h>
int main () {
    int num = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if(num > 0){
        printf("Valor positivo");
    }else if(num < 0){
        printf("Valor negativo");
    }else{
        printf("Valor neutro");
    }
    return 0;
}
