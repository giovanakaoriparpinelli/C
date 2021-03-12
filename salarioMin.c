/*
LT02_EX02: Faça um programa em linguagem C que peça o salário de um funcionário. Se o salário for menor do que R$ 1.045, 
o programa deve apresentar a mensagem “você ganha menos do que um salário mínimo”. Do contrário, o programa deve 
apresentar a mensagem “você ganha pelo menos um salário mínimo”.
*/

#include <stdio.h>
int main () {
    float salario = 0;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    if(salario < 1045.00){
        printf("Você ganha R$%.2f, então ganha menos do que um salário mínimo!", salario);
    }else{
        printf("Você ganha R$%.2f, então ganha pelo menos um salário mínimo!", salario);
    }
    return 0;
}
