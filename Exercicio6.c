#include <stdio.h>
#include <locale.h>
int main(){
	float valor, prestacao, tempo, juros;
	setlocale(LC_ALL,"");
	printf("Digite o valor da prestação: ");
	scanf("%f", &valor);
	printf("Digite o tempo de atraso em dias: ");
	scanf("%f", &tempo);
	printf("Digite o juros da prestção: ");
	scanf("%f", &juros);
	prestacao = valor + ( valor * (juros/100) * tempo);
	printf("O preço: %.2f", prestacao);
	return 0;
}
