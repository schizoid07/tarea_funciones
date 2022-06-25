/*Ejercicio 1. Escribir una funcion que sume dos numeros. Implemente un programa
que la utilice.*/
#include <stdio.h>

float suma(float x, float y);

int main () {
	float a,b;
	printf("\nIntroduzca el primer numero: "); scanf("%f",&a);
	printf("\nIntroduzca el segundo numero: "); scanf("%f",&b);
	
	suma(a,b);
	
	return 0;
}

float suma(float x, float y) {

	x=x+y;
	printf("\nEl resultado de la suma es: %2f",x);
}