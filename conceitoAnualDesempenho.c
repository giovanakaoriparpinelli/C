/*
LT02_EX08: Escreva um algoritmo em pseudocódigo que leia o conceito anual de um aluno em uma disciplina e informe o 
desempenho dele. Se for um conceito inválido escreva uma mensagem informando o ocorrido. 
Exemplo: 
'A' - Conhecimento Pleno, 
'B' - Conhecimento Parcialmente Pleno, 
'C' - Conhecimento Suficiente, 
'D' - Conhecimento Insuficiente. 
'<Qualquer outro caracter>': Conceito Inválido.
*** este exercícios deve ser feito 2x: LT02_EX08a usando apenas Ifs; LT02_EX08b usando switch case.
*/

//usando if else

#include <stdio.h>
int main () {
    char conceito;
    scanf("%c", &conceito);
    if(conceito == 'A' || conceito == 'a'){
        printf("Conhecimento Pleno");
    }else if(conceito == 'B' || conceito == 'b'){
        printf("Conhecimento Parcialmente Pleno");
    }else if(conceito == 'C' || conceito == 'c'){
        printf("Conceito Suficiente");
    }else if(conceito == 'D' || conceito == 'd'){
        printf("Conceito Insuficiente");
    }else{
        printf("Conceito Inválido");
    }return 0;
}

//ou se preferir usar switch case

#include <stdio.h>
int main () {
    char con;
    scanf("%c", &con);
    switch(con){
        case 'A':
        case 'a':
            printf("Conhecimento Pleno");
            break;
        case 'B':
        case 'b':
            printf("Conhecimento Parcialmente Pleno");
            break;
        case 'C':
        case 'c':
            printf("Conceito Suficiente");
            break;
        case 'D':
        case 'd':
            printf("Conceito Insuficiente");
            break;
        default:
            printf("Conceito Inválido");
            break;
    }
    return 0;
}
