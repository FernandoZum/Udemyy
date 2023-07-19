//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que pida 4 cadenas por teclado y las
muestre por la salida separadas por un "-"*/

//Ejecucion del Programa
int main()
{
    //Declaracion de variables por tipos de datos
    char cadena1[50],cadena2[50],cadena3[50],cadena4[50];
    
    //Imprimira y dara la instruccion al usuario de ingresar cadenas
    printf("Introduce la cadena 1\n");
    gets(cadena1);
    printf("Introduce la cadena 2\n");
    gets(cadena2);
    printf("Introduce la cadena 3\n");
    gets(cadena3);
    printf("Introduce la cadena 4\n");
    gets(cadena4);

    //Imprimira los valores de cada cadena para dar una solucion final
    printf("%s-%s-%s-%s",cadena1,cadena2,cadena3,cadena4);
}
