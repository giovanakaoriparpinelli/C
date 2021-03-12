#include <stdio.h>
int main () {
    float precoMont = 0, 
          lucro = 0,
          ipi = 0,
          icms = 0,
          precoVenda = 0,
          imposto = 0;
    printf("Preço da montadora: ");
    scanf("%f", &precoMont);
    printf("Lucro: ");
    scanf("%f", &lucro);
    printf("IPI: ");
    scanf("%f", &ipi);
    printf("ICMS: ");
    scanf("%f", &icms);
    precoVenda = precoMont + (0.15*lucro) + (0.11*ipi) + (0.17*icms);
    imposto = precoMont - precoVenda;
    printf("O valor de venda do carro é: %f\nO valor dos impostos são de: %f", precoVenda, imposto);
    return 0;
}

//variáveis = precoMont, lucro, ipi, icms, precoVenda, imposto

//entrada = precoMont, lucro, ipi, icms

//processamento = calcular preço de venda do carro
//(precoVenda = precoMont + 15%lucro + 11%IPI + 17%ICMS),
//e calcular o valor dos impostos

//saida = precoVenda, impostos
