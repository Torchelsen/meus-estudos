#include <stdio.h>

int main(){
	double salAtual, salNovo, percentual;
	
	scanf("%lf", &salAtual);
	
	if(salAtual>=0 && salAtual<=400.00){
		salNovo=salAtual*1.15;
		percentual=(((salNovo-salAtual)*100)/salAtual);
		printf("Novo salario: %.2lf\n", salNovo);
		printf("Reajuste ganho: %.2lf\n", salNovo-salAtual);
		printf("Em percentual: 15 %%\n", percentual);
	}else if(salAtual>400.00 && salAtual<=800.00){
		salNovo=salAtual*1.12;
		percentual=(((salNovo-salAtual)*100)/salAtual);
		printf("Novo salario: %.2lf\n", salNovo);
		printf("Reajuste ganho: %.2lf\n", salNovo-salAtual);
		printf("Em percentual: 12 %%\n", percentual);
	}else if(salAtual>800.00 && salAtual<=1200.00){
		salNovo=salAtual*1.10;
		percentual=(((salNovo-salAtual)*100)/salAtual);
		printf("Novo salario: %.2lf\n", salNovo);
		printf("Reajuste ganho: %.2lf\n", salNovo-salAtual);
		printf("Em percentual: 10 %%\n", percentual);
	}else if(salAtual>1200.00 && salAtual<=2000.00){
		salNovo=salAtual*1.07;
		percentual=(((salNovo-salAtual)*100)/salAtual);
		printf("Novo salario: %.2lf\n", salNovo);
		printf("Reajuste ganho: %.2lf\n", salNovo-salAtual);
		printf("Em percentual: 7 %%\n", percentual);
	}else if(salAtual>2000.00){
		salNovo=salAtual*1.04;
		percentual=(((salNovo-salAtual)*100)/salAtual);
		printf("Novo salario: %.2lf\n", salNovo);
		printf("Reajuste ganho: %.2lf\n", salNovo-salAtual);
		printf("Em percentual: 4 %%\n", percentual);
	}
	return 0;
}
