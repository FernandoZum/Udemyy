//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Se iniciara el programa
int main()
{
    //Se utilizara una estructura para definir las variables
    struct mi_registro{
        int dato_entero;
        float dato_float;
        char dato_cadena[30];
        int dato_vector[10];
    };

    //Con la estructura se definira con valores
    struct mi_registro variable;

    variable.dato_entero = 20;
    variable.dato_float = 5.5;
    //Se utiliza esta funcion para copiar la cadena
    strcpy(variable.dato_cadena,"nueva cadena");
    variable.dato_vector[0] = 4;

    //Imprimira el mensaje con el resultado registrado
    printf("El dato de tipo float de mi registro es: %f\n", variable.dato_float);

    //Con la estructura se relacionara con un vector
    struct mi_registro vector[10];

    //Dando al vector el valor de un numero entero
    vector[0].dato_entero = 7;

    //Dara un resultado fijo y concreto en todo
    printf("El dato de tipo entero del primer elemento del vector es: %d\n", vector[0].dato_entero);
}
