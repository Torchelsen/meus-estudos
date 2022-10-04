#include <stdio.h>
int main() {
	int numeroFuncionario, horasTrabalhadas;
	double valorHora, salario;
	scanf("%d", &numeroFuncionario);
	scanf("%d", &horasTrabalhadas);
	scanf("%lf", &valorHora);
	
	salario = horasTrabalhadas * valorHora;
	printf("NUMBER = %d\n", numeroFuncionario);
	printf("SALARY = U$ %.2lf\n", salario);
	
	return 0;	
}