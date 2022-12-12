#include <stdio.h>

int main(){
	int leitura;
	scanf("%d", &leitura);
	if(leitura==61){
		printf("Brasilia\n");
	}else if(leitura==71){
		printf("Salvador\n");
	}else if(leitura==11){
		printf("Sao Paulo\n");
	}else if(leitura==21){
		printf("Rio de Janeiro\n");
	}else if(leitura==32){
		printf("Juiz de Fora\n");
	}else if(leitura==19){
		printf("Campinas\n");
	}else if(leitura==27){
		printf("Vitoria\n");
	}else if(leitura==31){
		printf("Belo Horizonte\n");
	}else{
		printf("DDD nao cadastrado\n");
	}
	return 0;
}
