#include <stdio.h>

int main() {
int n=0, p=0, q=0, resultado=0;
char c;
  scanf("%d\n", &n);

  if(n>=1 && n<=500000){
    scanf("%d %c %d", &p, &c ,&q);
    switch(c){
      case '+': resultado= p+q; break;
      case '*': resultado= p*q; break;
    }
    if(p>=0 && p<=1000 && q>=0 && q<=1000){
      if(resultado<=n){
        printf("OK\n");
      }else{
        printf("OVERFLOW\n");
      }
    }
  return 0;
  }
}