#include <stdio.h>
int main() {
	int peca1, peca2, numeroPecas1, numeroPecas2;
	double valorPeca1, valorPeca2, valorPagar;
	scanf("%d %d %lf", &peca1, &numeroPecas1, &valorPeca1);
	scanf("%d %d %lf", &peca2, &numeroPecas2, &valorPeca2);
	
	valorPagar =  (numeroPecas1*valorPeca1)+(numeroPecas2*valorPeca2);
	printf("VALOR A PAGAR: R$ %.2lf\n", valorPagar);

	return 0;	
}