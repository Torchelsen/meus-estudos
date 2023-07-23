#include <stdio.h>

int main() {
	int tempoGasto, velocidadeMedia;
	double distanciaPercorrida, gastoCombustivel;
	scanf("%d", &tempoGasto);
	scanf("%d", &velocidadeMedia);
	
	distanciaPercorrida = tempoGasto * velocidadeMedia;
	gastoCombustivel = distanciaPercorrida/12;
	printf("%.3lf\n", gastoCombustivel);
	
	return 0;	
}