//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Inicio del programa
int main()
{
    //Se declara la variable por medio de un tipo de dato
    int n = 2;

    //Se iniciara una estructura de control switch para determinar el mensaje el cual mostrar
    switch (n>0){
    case(1):{
        printf("N es mayor de 0");
        break;
    }
    case(0):{
        printf("N no es mayor de 0");
        break;
    }
    }
}
