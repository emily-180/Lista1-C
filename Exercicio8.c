#include <stdio.h>
#include <locale.h>
int main(){
	
	float tempo, litros, distancia, velocidadeM;
	setlocale(LC_ALL,"");
	printf("Digite a velocidade média: ");
	scanf("%f", &velocidadeM);
	printf("Digite o tempo gasto: ");
	scanf("%f", &tempo);
	distancia = tempo * velocidadeM;		
	litros = distancia / 15;
	printf("Distancia: %.2f", distancia,"Km \n");
	printf("Velocidade: %.2f", velocidadeM,"Km/h \n");	
	printf("Tempo: %.2f", tempo,"h");
	printf("Litros: %.2f", litros,"L");
	return 0;
}
