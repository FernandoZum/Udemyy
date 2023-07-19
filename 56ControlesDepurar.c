//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include "56Operaciones.h"
#include "56Operaciones.c"

//Se inicia el programa
int main()
{
    //Se declara variables
    int n_op;
    
    //Mensaje que saldra en la pantalla del usuario y registrara los datos ingresados por el usuario
    printf("Introduce el numero de operaciones a realizar\n");
    scanf("%d",&n_op);

    //Sentencia repetitiva
    for(int i=0; i<n_op; i++){
        //Creacion del menu para poder manejarlo
        int op1,op2;
        printf("Introduce operando 1\n");
        scanf("%d",&op1);
        printf("Introduce operando 2\n");
        scanf("%d",&op2);

        //Se aplicara las diferentes operaciones
        int s = sumar(op1,op2);
        int r = restar(op1,op2);

        //Imprimira al final del programa las soluciones dadas
        printf("Suma = %d, Resta = %d\n",s,r);
    }
    //Despedira al programa
    printf("FIN");
}
