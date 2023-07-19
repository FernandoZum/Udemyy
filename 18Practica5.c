//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa que pida al usuario su nota y compruebe si ha suspendido (<5),
si ha sacado un suficiente (5), un bien (6), un notable (7-8) o un sobresaliente (9-10)*/

//Inicio de ejecuccion del programa
int main()
{
    //Se declara la variable a utilizar por medio de un tipo de dato int
    int nota;

    //Se mostrara el mensaje en pantalla
    printf("Introduce la nota del alumno\n");
    //Se utiliza el %d para leer y registrar el valor ingresado
    scanf("%d",&nota);

    //Se utiliza una estructura condicional para imprimir los diferentes resultados
    if(nota < 5){
        printf("Suspendio");
    }
    else if(nota == 6){
        printf("Bien");
    }
    else if(nota == 7 || nota == 8){
        printf("Notable");
    }
    else if(nota == 9 || nota == 10){
        printf("Sobresaliente");
    }
    //Si no se llega a cumplir el rango de la nota. Mostrara el mensaje en pantalla
    else{
        printf("Nota Introducida no valida");
    }
}
