//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribe un programa que pida un numero al usuario y muestre el dia de la semana al que equivale.
Si se introduce un numero fuera del rango valido (1-7), se debe mostrar un mensaje de error.*/

//Se iniciara el programa
int main()
{
    //Se declara la variable por medio de un tipo de dato
    int dia;
    //Muestra el mensaje en pantalla
    printf("Introduce el numero en el rango 1-7\n");
    scanf("%d",&dia);

    //Se utilizara el switch para determinar que respuesta dar al numero ingresado
    switch(dia){
    case(1):
        printf("Lunes");
        break;
    case(2):
        printf("Martes");
        break;
    case(3):
        printf("Miercoles");
        break;
    case(4):
        printf("Jueves");
        break;
    case(5):
        printf("Viernes");
        break;
    case(6):
        printf("Sabado");
        break;
    case(7):
        printf("Domingo");
        break;
    //Si no se cumple ningun numero. No dara respuesta.
    default:
        printf("Error Dia No Valido");
        break;
    }
}
