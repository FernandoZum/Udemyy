//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Crear un vector de 5 numeros reales introducidos por teclado. 
A continuacion, declarar un puntero al vector y calcular la media de sus
elementos empleando dicho puntero.*/

//Se iniciara el programa
int main()
{
    //Se define al vector como tipo float
    float vector[5];

    //Se agrega una estructura repetitiva
    for(int i=0; i<5; i++){
        //Con la estructura repetitiva se presentara el mensaje en la pantalla
        printf("Introduce un numero real\n");
        scanf("%f",&vector[i]);
    }

    //Se define las variables como tipo float
    float *puntero = &vector[0];
    float media = 0;

    //Se utilizara otra estructura repetitiva
    for(int i=0; i<5; i++){
        //Se empleara el calculo para encontrar la respuesta final
        media = media + *(puntero+i);
    }
    media = media/5;

    //Se presentara al final del programa los valores que dieron durante todo el proceso del programa
    printf("La media de los valores del vector es %.2f\n",media);
}
