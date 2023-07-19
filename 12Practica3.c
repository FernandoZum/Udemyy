//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa que pida al usuario el valor de la base y
altura de un rectangulo y con ellos calcule su área. A=bxh*/

//Se iniciara el programa
int main()
{
    //Se define las variables por el tipo de dato float
    float base,altura;
    //Se pide al usuario que ingrese la base
    printf("Introduzca la base del rectangulo\n");
    scanf("%f",&base);
    //Se pide al usuario que ingrese la altura
    printf("Introduzca la altura del rectangulo\n");
    scanf("%f",&altura);

    //Se declara la base de tipo float mientras esta se calcula
    float area = base*altura;

    //Respuesta Final del programa
    printf("El area del rectangulo de base %.2f y altura %.2f es: %.2f",base,altura,area);
}
