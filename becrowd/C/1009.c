#include <stdio.h>
int main() {
	char nomeVendedor[50];
	double salarioFixo, totalVendas, salarioFinal;
	scanf("%s", &nomeVendedor);
	scanf("%lf", &salarioFixo);
	scanf("%lf", &totalVendas);
	
	salarioFinal = salarioFixo + (totalVendas*0.15);
	printf("TOTAL = R$ %.2lf\n", salarioFinal);

	return 0;	
}