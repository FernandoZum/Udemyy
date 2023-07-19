//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que lea un fichero llamado numeros.txt que contiene
una lista de numeros (uno en cada fila) y devuelva la suma de dichos numeros*/

//Inicio del programa a ejecutar
int main()
{
    //Se abre un archivo de texto donde se pondra el texto
    FILE *f;
    //El nombre del archivo del texto
    f = fopen("numeros.txt","r");

    //Se declaran las variables int
    int suma = 0, numero;

    //Se agrega una sentencia repetitiva dentro del archivo a elaborarse
    while(feof(f) == 0){
        //Leera dentro del archivo
        fscanf(f,"%d",&numero);

        //Se opera lo que agrego el usuario
        suma = suma+numero; 
    }

    //Se presenta el mensaje al final del proceso con las respuestas dadas
    printf("La suma de todos los numeros del fichero es: %d\n",suma);

    //Se cierra el archivo
    fclose(f);
}
