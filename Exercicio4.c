#include <stdio.h>

int main(){
	float n1, n2, n3, mult, divisao, n;
	printf("Digite 3 numeros: ");
	scanf("%f%f%f", &n1, &n2, &n3);
	printf("Digite um numero: ");
	scanf("%f", &n);
	mult = n1 * n2 * n3;
	divisao = mult / n;
	printf("Resultado: %.2f", divisao);
	return 0;
}
