#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	float n1, n2, n3, soma;
	printf("Digite três valores: ");
	scanf("%f%f%f", &n1,&n2,&n3);
	soma= n1+n2+n3;
	printf("A soma: %.1f", soma);
	return 0;
}
