#include <stdio.h>
#include <math.h>

int main() {
	int codigo, quantidade;
	double valor;
	scanf("%d%d", &codigo, &quantidade);
	
	switch(codigo){
		case 1: 
			valor = quantidade*4.00;
			printf("Total: R$ %.2lf\n", valor); 
		break;
		case 2: 
			valor = quantidade*4.50;
			printf("Total: R$ %.2lf\n", valor); 
		break;
		case 3: 
			valor = quantidade*5.00;
			printf("Total: R$ %.2lf\n", valor); 
		break;
		case 4: 
			valor = quantidade*2.00;
			printf("Total: R$ %.2lf\n", valor); 
		break;
		case 5: 
			valor = quantidade*1.50;
			printf("Total: R$ %.2lf\n", valor); 
		break;
	}
	return 0;	
}