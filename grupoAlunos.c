#include <stdio.h>
int main () {
    int alunos = 0, 
        grupos = 0,
        resto = 0;
    printf("Insira o numero total de alunos: ");
    scanf("%d", &alunos);
    grupos = alunos / 4;
    resto = alunos % 4;
    printf("Será possível formar %d grupos de 4 alunos, mas ainda irão sobrar %d alunos", grupos, resto);
    return 0;
}

//variáveis = alunos, grupos, resto

//entrada = alunos 

//processamento = ver quantos grupos de 4 alunos são possíveis,
//e quantos alunos irão ficar de fora 
//(grupos = alunos / 4) e (resto = alunos % 4)

//saida = grupos, e resto
