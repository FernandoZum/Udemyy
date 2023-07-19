//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que dado un vector de entero de 10 elementos. 
Mostrar el valor maximo y el valor minimo.*/

//Se iniciara el proceso del programa
int main()
{
    //Se fundamentaran las variables en los tipos de datos
    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};
    int maximo = vector[0];
    int minimo = vector[0];

    //Se utilizara una sentencia repetitiva
    for(int i=1;i<10;i++){
        //Se utilizara una sentencia de control condicional
        if(vector[i]>maximo){
            maximo = vector[i];
        }
        //Para mas precision se utilizara otra sentencia de control condicional
        if(vector[i]<minimo){
            minimo = vector[i];
        }
    }

    //Presentara un mensaje final con las respuestas dadas
    printf("Valor maximo: %d\nValor minimo: %d",maximo,minimo);
}
