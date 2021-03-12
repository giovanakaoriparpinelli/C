/*
LT02_EX04: Crie um programa em linguagem C que leia 3 números inteiros diferentes e imprima os números em ordem crescente.
*/

#include <stdio.h>
int main() {
    int n1 = 0,
        n2 = 0,
        n3 = 0;
    scanf("%d" "%d" "%d", &n1, &n2, &n3);
    if(n1 < n2){
        if(n1 < n3){
            printf("%d - ", n1);
            if(n2 < n3){
                printf("%d - %d", n2, n3);
            }else{
               printf("%d - %d", n3, n2); 
            }
        }else{
            printf("%d - %d - %d", n3, n1, n2);
        }
    }else{
        if(n2 < n3){
            printf("%d - ", n2);
            if(n1 < n3){
                printf("%d - %d", n1, n3);
            }else{
                printf("%d - %d", n3, n1);
            }
        }else{
            printf("%d - %d - %d", n3, n2, n1);
        }
    }
    return 0;
}
