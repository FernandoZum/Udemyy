//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Inicio del programa
int main()
{
    //Funciones malloc y calloc
    //Se declara variable 
    int *vector, n;

    //Se presentara en pantalla al usuario
    printf("Introduce el numero de elementos del vector\n");
    scanf("%d",&n);

    //vector = malloc(n*sizeof(int));
    vector = calloc(n,sizeof(int));

    //Se aplicara una estructura condicional
    if(vector == NULL){
        //Se imprimira el mensaje si cumple la condicion
        printf("Error al intentar reservar la memoria\n");
    //Si no se cumple la condicion mostrara otro mensaje
    } else{
        //Estructura Repetitiva donde se imprimira con el vector
        for(int i=0; i<n; i++){
            printf("Elemento en la posicion %d es %d\n",i,vector[i]);
        }
    }
}
