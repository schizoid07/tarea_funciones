/*Ejercicio 3. Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria*/
#include<stdio.h>
#include<string.h>
void concadenacion(char string1[],char string2[], char string3[]);

int main () {
char string1[]="hola", string2[]=" profe",string3[]=" pongame 20 :)";
concadenacion(string1,string2,string3);
}

void concadenacion(char string1[],char string2[], char string3[]) {
char string_aux[sizeof(string1)+sizeof(string2)+sizeof(string3)];  
strcat(string1,string2);
strcat(string1,string3);
strcpy(string_aux,string1);
printf("\nla oracion resultante seria: %s", string_aux);
strrev(string_aux);
printf("\nla oracion dada la vuelta seria: %s\n", string_aux);
}