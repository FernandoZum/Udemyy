//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se ejecutara el programa
int main()
{
    //int vector[10];
    //Se utilizara un vector
    int vector[10] = {0,1,2,3,4,5,6,7,8,9};

    //printf("%d\n",vector[3]);

    vector[9] = 100;
    vector[5] = 500;

    //Se utilizara una sentencia repetitiva
    for (int i=0; i<10; i++){
        //Mostrara todos los valores que se encuentren dentro del rango de for
        printf("%d\n",vector[i]);
    }
}
