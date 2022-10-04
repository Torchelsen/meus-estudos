#include <stdio.h>

int main() {
	int N, horas, minutosInicial, segundos, minutosFinal;
	scanf("%d", &N);
	
	segundos = N % 60;
	minutosInicial = N / 60;
	horas = minutosInicial / 60;
	minutosFinal = minutosInicial % 60;


	printf("%d:%d:%d\n", horas, minutosFinal, segundos);
	
	return 0;	
}