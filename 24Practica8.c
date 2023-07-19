//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que muestre por pantalla todos los multiplos de 3 entre 1 y 100*/

//Ejecucion del Programa
int main()
{
    //Se utilizara una sentencia repetitiva
    for (int i=1; i<=100; i++){
        //Se utilizara una sentencia de control
        if(i%3 == 0){
            //Mostrara en pantalla todos los numeros
            printf("%d\n",i);
        }
    }
}
