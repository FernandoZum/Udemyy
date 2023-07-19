//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Inicia el programa
int main()
{
    //Se utiliza las funciones malloc y calloc
    int *vector, n;
    printf("Introduce el numero de elementos del vector\n");
    scanf("%d",&n);

    //vector = malloc(n*sizeof(int));
    vector = calloc(n,sizeof(int));

    //Sentencia condicional
    if(vector == NULL){
        printf("Error al intentar reservar la memoria\n");
    } 
    else {
        //Sentencia repetitiva
        for(int i=0; i<n; i++){
            vector[i] = i;
        }
    }
    //Declaracion de variables
    int n2 = n + 3;

    //realloc
    int *vector2 = realloc(vector,n2);

    //Sentencia condicional
    if(vector2 == NULL){
        printf("Error al intentar reservar la memoria\n");
    }
    else{
        vector = vector2;
    }

    //Sentencia repetitiva
    for(int i=0; i<n2; i++){
        printf("%d\n",vector[i]);
    }

    //free 
    free(vector);
    vector = NULL;
}
