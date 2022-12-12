#include <stdio.h>

int main(){
	int leitura, ano, mes, dia;
	
	scanf("%d", &leitura);
	ano = leitura/365;
	mes = (leitura%365)/30;
	dia = ((leitura%365)%30);
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	return 0;
}
