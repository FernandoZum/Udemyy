//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include "44Operaciones.h"
#include "44Operaciones.c"

//Inicio de la ejecucion del programa
int main()
{
    //Definir variables por tipos de datos
    int o1,o2;
    int rsuma,rresta,rmult;
    float rdiv;

    //Mensajes que se mostraran en pantalla del usuario y guardara valores posteriormente
    printf("Introduce el operando 1\n");
    scanf("%d",&o1);
    printf("Introduce el operando 2\n");
    scanf("%d",&o2);
    
    //Diferentes variables donde se podra calcular el resultado
    rsuma = sumar(o1,o2);
    rresta = restar(o1,o2);
    rmult = multiplicar(o1,o2);
    rdiv = dividir(o1,o2);

    //Mensajes al final del programa que mostrara todos los resultados que se calcularon
    printf("Suma: %d\n", rsuma);
    printf("Resta: %d\n", rresta);
    printf("Multiplicacion: %d\n",rmult);
    printf("Division: %.1f\n", rdiv);
}
