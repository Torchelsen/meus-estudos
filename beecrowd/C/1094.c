#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n=0, quantia=0;
  double coelho=0, sapo=0, rato=0, total=0;
  double percCoelhos=0, percRatos=0, percSapos=0;
  char cobaia;

  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d %c", &quantia, &cobaia);
    
    switch(cobaia){
      case 'C': coelho=coelho+quantia;
      break;
      case 'R': rato=rato+quantia;
      break;
      case 'S': sapo=sapo+quantia;
      break;
    }
  }
  total= coelho+rato+sapo;
  percCoelhos= (coelho/total)*100;
  percRatos= (rato/total)*100;
  percSapos= (sapo/total)*100;
  printf("Total: %.0lf cobaias\n", total);
  printf("Total de coelhos: %.0lf\n", coelho);
  printf("Total de ratos: %.0lf\n", rato);
  printf("Total de sapos: %.0lf\n", sapo);
  printf("Percentual de coelhos: %.2lf %\n", percCoelhos);
  printf("Percentual de ratos: %.2lf %\n", percRatos);
  printf("Percentual de sapos: %.2lf %\n", percSapos);
  
  return 0;
  
  
}