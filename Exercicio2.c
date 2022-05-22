#include <stdio.h>

int main(){
	int polegada;
	float conversao;
	printf("Digite a quantidade de polegadas: ");
	scanf("%d", &polegada);
	conversao = polegada * 2.54;
	printf("Polegada convertida: %.2f", conversao);
	return 0;
}

