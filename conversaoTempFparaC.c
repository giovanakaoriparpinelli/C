#include <stdio.h>
int main () {
	float tempC = 0, tempF = 0;
	printf("Insira a temperatura em F: ");
	scanf("%f", &tempF);
	tempC = 5*(tempF-32)/9;
	printf("A temperatura em C é: %f", tempC);
	return 0;
}
