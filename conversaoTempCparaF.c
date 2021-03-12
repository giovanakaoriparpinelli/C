#include <stdio.h>
int main () {
	float tempC = 0, tempF = 0;
	printf("Insira a temperatura em C: ");
	scanf("%f", &tempC);
	tempF = (9 * tempC / 5) + 32;
	printf("A temperatura em F é: %f", tempF);
	return 0;
}
