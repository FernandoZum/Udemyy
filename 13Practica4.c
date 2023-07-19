//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa que realice la conversion euros a pesetas. Para ello, 
pedira al usuario que introduzca los euros a convertir y mostrara por consola
la equivalencia en pesetas de dicha cantidad*/

//Inicio del programa
int main()
{   
    //Se declara la variable por medio de un tipo de dato float
    float euros;
    //Se mostrara en pantalla lo que pedira al usuario
    printf("Introduce los euros que quieres convertir\n");
    //Se leera lo que se pide por medio de %f    
    scanf("%f",&euros);
    //pesetas = euros * 166.386
    printf("%.2f euros equivalen a %.2f pesetas",euros,euros*166.386);

}
