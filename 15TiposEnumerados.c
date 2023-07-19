//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se iniciara la ejecucion del programa
int main()
{
    //Conjunto de valores que aceptaran el tipo de dato a definir
    typedef enum {lunes,martes,miercoles,jueves,viernes,sabado,domingo}semana;

    //Para poder definir una variable
    semana dia_semana1 = 2;

    //Se usara el if y else para poder determinar el valor si es igual a 0
    //Si se llegara a cumplir se utilizara if
    if(dia_semana1 == 0){
        printf("Estamos a lunes\n");
    }
    //Si no se llegara a cumplir se utiizara else
    else{
        printf("No estamos a lunes\n");
    }
}
