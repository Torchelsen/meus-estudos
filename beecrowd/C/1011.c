#include <stdio.h>
const double PI = 3.14159;
int main() {
	double raioEsfera, volumeEsfera;
	scanf("%lf", &raioEsfera);
	
	volumeEsfera =  (4.0/3)*PI*(raioEsfera*raioEsfera*raioEsfera);
	printf("VOLUME = %.3lf\n", volumeEsfera);

	return 0;	
}