#include <stdio.h>
#include <math.h>

int main() {
	double N1, N2, N3, N4, media, notaExame, mediaFinal;
	scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
	
	media = (N1*0.20)+(N2*0.30)+(N3*0.40)+(N4*0.10);
	printf("Media: %.1lf\n", media);
	
	if(media>=7.0){
		printf("Aluno aprovado.\n");
	}else if(media>=5.0 && media<=6.9){
		printf("Aluno em exame.\n");
		scanf("%lf",&notaExame);
		printf("Nota do exame: %.1lf\n", notaExame);
		mediaFinal = (notaExame + media)/2;
		if(mediaFinal>=5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", mediaFinal);
		}else{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", mediaFinal);
		}
	}else{
		printf("Aluno reprovado.\n", media);
	}
	return 0;	
}