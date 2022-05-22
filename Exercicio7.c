#include <stdio.h>

int main(){
	float dolar, real;
	printf("Digite o valor em real: ");
	scanf("%f", &real);
	dolar = real * 2.30;
	printf("Dolar: %.2f", dolar);
	return 0;
}
