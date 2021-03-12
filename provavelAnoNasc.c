#include <stdio.h>
int main () {
	int idade = 0, anoNasc = 0, anoAtual = 0;
	printf("Insira o ano em que estamos: ");
	scanf("%d", &anoAtual);
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	anoNasc = anoAtual - idade;
	printf("Você nasceu em: %d!", anoNasc);
	return 0;
}
