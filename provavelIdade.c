#include <stdio.h>
int main () {
	int idade = 0, anoNasc = 0, anoAtual = 0;
	printf("Insira o ano em que estamos: ");
	scanf("%d", &anoAtual);
	printf("Insira seu ano de nascimento: ");
	scanf("%d", &anoNasc);
	idade = anoAtual - anoNasc;
	printf("Você tem %d anos!", idade);
	return 0;
}
