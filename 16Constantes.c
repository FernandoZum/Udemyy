//Inclusion de Liberias
#include <stdio.h>
#include <stdlib.h>

//Se definira PI para poder utilizarlo a lo largo del problema
#define PI 3.1416

//Se inciara el programa a ejecutar
int main()
{
    //Se declaran variables por medio de tipo de datos
    int radio;
    float resultado;

    //Se mostrara en pantalla
    printf("Introduce el radio del circulo");
    //Se leera el valor ingresado 
    scanf("%d",&radio);

    //Se realizara el calculo respectivo para poder definir el resultado
    resultado = radio*radio*PI;

    //Mostrara el resultado final de lo que se espera
    printf("El area del circulo es: %f",resultado);
}
