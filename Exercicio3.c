#include <stdio.h>

int main(){
	float n1, n2, n3, n4, divisao;
	printf("Digite quatro numeros: ");
	scanf("%f,%f,%f,%f", &n1, &n2, &n3, &n4);
	divisao = (n1 + n2) / (n3 + n4);
	printf("Resultado: %.2f", divisao);
	return 0;
}
