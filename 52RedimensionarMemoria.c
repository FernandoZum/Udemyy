//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Inicia el programa
int main()
{
    //Funciones malloc y calloc
    //Se definira las variables por medio de tipo de dato
    int *vector, n;
    //Mostrara al usuario lo que se le pide
    printf("Introduce el numero de elementos del vector\n");
    scanf("%d",&n);

    //vector = malloc(n*sizeof(int));
    vector = calloc(n,sizeof(int));

    //Se elabora una estructura condicional para identificar una igualdad
    if(vector == NULL){
        printf("Error al intentar reservar la memoria\n");
    } 
    //Caso contrario no se identifica la igualdad
    else {
        //Se utilizara una estructura repetitiva
        for(int i=0; i<n; i++){
            vector[i] = i;
        }
    }
    //Se declara variables para la funcion realloc
    int n2 = n + 3;

    //realloc
    int *vector2 = realloc(vector,n2);

    //Se aplica una estructura condicional para identificar que imprimira y caso contrario que no imprimira
    if(vector2 == NULL){
        printf("Error al intentar reservar la memoria\n");
    }
    else{
        vector = vector2;
    }

    //Se aplicara una estructura repetitiva para luego mostrar en pantalla las respuestas
    for(int i=0; i<n2; i++){
        printf("%d\n",vector[i]);
    }
}
