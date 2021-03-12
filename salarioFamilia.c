#include <stdio.h>
int main () {
    float salario = 0, salarioFam = 0;
    int numDepend = 0;
    printf("Insira o valor do salário: ");
    scanf("%f", &salario);
    printf("Insira o número de dependentes: ");
    scanf("%d", &numDepend);
    salarioFam = (0.2 * salario)*numDepend;
    printf("O valor do salário família é: %f", salarioFam);
    return 0;
}

//entrada = salario, numDepend

//processamento = calcular salario família (0.2*numDepend)

//saida = valor do salario familia do funcionario (2% do
//salário por dependente)
