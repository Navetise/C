#include <stdio.h>
#include <math.h>
int main(){
  double  a, b, c, D, x1, x2;
  printf("Digite os valores de (a, b e c) na equacao: ax^2 + bx + c = 0\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  
  if(a==0){printf("Nao e uma equacao de segundo grau\n");}
      else if (a!=0){
        D = pow(b, 2) - 4*a*c;
          if(D<0){
          printf("A equacao nao possui raizes reais\n");
          }
          else if (D>=0){
            x1 = (-b + sqrt(D))/(2*a);
            x2 = (-b - sqrt(D))/(2*a);
          printf("x1 = %lf e x2 = %lf\n", x1, x2);
        }
      }
  return 0;
}
