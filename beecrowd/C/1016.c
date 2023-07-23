#include <stdio.h>

int main() {
	int distancia, tempoPorKm, tempoNecessario;
	scanf("%d", &distancia);
	
	tempoPorKm = 2;
	tempoNecessario = tempoPorKm * distancia;
	printf("%d minutos\n", tempoNecessario);
	
	return 0;	
}