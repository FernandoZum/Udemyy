//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Iniciara la ejecucion de programa
int main()
{
    //Se declarara las variables por medio de tipos de datos
    int numero = 3;
    int numero2 = 7;
    int numero3 = 1;

    //Se utilizara una estructura de control condicional
    if(numero > 0 && numero2 > 0){
        if(numero3 > 0){
            printf("Los tres numeros son positivos\n");
        }

    }
    //Si no se llegara a cumplir
    else if(numero > 0 || numero2 > 0){
        printf("Alguno de los numeros es positivo\n");
    }
    else {
        printf("Ninguno de los dos son positivos\n");
    }

    //Fin del programa
    printf("Fin del Programa\n");
}

