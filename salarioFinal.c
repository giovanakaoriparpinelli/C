#include <stdio.h>
int main () {
    float quantHoraTrab = 0,
          quantHoraExt = 0,
          quantHoraAus = 0,
          salMin = 0,
          vHoraTrab = 0,
          vHoraExt = 0,
          descontoInss = 0,
          salBruto = 0,
          salLiq = 0;
    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%f", &quantHoraTrab);
    printf("Insira a quantidade de horas extras: ");
    scanf("%f", &quantHoraExt);
    printf("Insira a quantidade de horas ausentes: ");
    scanf("%f", &quantHoraAus);
    printf("Insira o valor do salário mínimo: ");
    scanf("%f", &salMin);
    vHoraTrab = salMin * 0.04;
    vHoraExt = (vHoraTrab * 0.5) + vHoraTrab;
    salBruto = (quantHoraTrab * vHoraTrab) + (quantHoraExt * vHoraExt) - (quantHoraAus * vHoraTrab);
    descontoInss = (salBruto *0.11);
    salLiq = salBruto - descontoInss 
    printf("O valor final do salário é de: R$%.2f", salLiq);
    return 0;
}

//variaveis = quantHoraTrab, quantHoraExt, quantHoraAus, vHoraTrab, vHoraExt, salMin, desconto, salBruto, salLiq

//entrada = quantHoraTrab, quantHoraExt, quantHoraAus, salMin

//processamento = calcular o salario final, sendo que
	//vHoraTrab = salMin * 0.04
	//vHoraExt = (vHoraTrab * 0.5) + vHoraTrab
	//salBruto = (quantHoraTrab * vHoraTrab) + (quantHoraExt * vHoraExt) - (quantHoraAus * vHoraTrab) 
	//descontoInss = (salBruto * 0.11)
	//salLiq = salBruto - descontoInss 

//saida = salLiq
