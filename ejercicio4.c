#include <stdio.h>
#include <math.h>

float raiz_real1(float a, float b, float c);


int main () {
  float a=0,b=0,c=0;
printf("Introduzca el valor del numero a: "); scanf("%f",&a);
printf("Introduzca el valor del numero b (debe ser el mayor): "); scanf("%f",&b);
printf("Introduzca el valor del numero c: "); scanf("%f",&c);
raiz_real1(a,b,c);
return 0;
}

float raiz_real1(float a, float b, float c) {
  float x1=((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
  float x2=((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
  printf("\nel valor de x1 es: %2f",x1);
  printf("\nel valor de x2 es: %2f",x2);
}


