/*Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función.*/
#include <stdio.h>

int main () {
 int size=0, numbs[]={1,2,3,4,5};
 size = sizeof(numbs)/sizeof(numbs[1]);

  avrg(numbs,size);
 return 0; 
}

void avrg(int numbs[], int size) {
int avrg1=0;
for (int i=0;i<size;i++) {
    avrg1+=numbs[i];
 }
 avrg1/=size;
 printf("el promedio de los numeros es: %d\n",avrg1);
}

