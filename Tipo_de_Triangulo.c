#include <stdio.h>

int main() {
 float l1, l2, l3;
 printf("Digite o tamanho dos lados do triangulo\n");
 scanf("%f %f %f", &l1, &l2, &l3);
 if(l1>=l2+l3 || l2>=l1+l3 || l3>=l1+l2){
   printf("Nao forma um triangulo");
 }
   else if(l1==l2 && l1==l3){
     printf("Triangulo equilatero");
   }
     else if(l1==l2 || l1==l3 || l2==l3){
       printf("Triangulo isosceles");
     }
       else {
        printf("Triangulo escaleno");
     }
  return 0;
}
