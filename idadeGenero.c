/*
LT02_EX07: Faça um programa em linguagem C que leia a idade e o gênero de uma pessoa (‘f’ para feminino e ‘m’ para masculino) - 
deve ser UM caracter em minúsculo. Se o usuário for do sexo feminino, apresentar a mensagem “Olá senhora, você tem ??? anos.  
“. Do contrário, apresentar a mensagem “Olá senhor, você tem ??? anos.“ Trocar X pela idade digitada pelo usuário. 
*/

#include <stdio.h>
int main () {
    int idade = 0;
    char genero = 'x';
    printf("Insira sua idade: ");
    scanf("%d%*c", &idade); //use "%*c", isso ignora o ENTER que você der, assim, lendo normalmente sua próxima variavel do tipo char
    printf("Insira seu gênero: ");
    scanf("%c", &genero);
    if(genero == 'f'){
        printf("Olá senhora, você tem %d anos.", idade);
    }if(genero == 'm'){
        printf("Olá senhor, você tem %d anos.", idade);
    }
    return 0;
}
