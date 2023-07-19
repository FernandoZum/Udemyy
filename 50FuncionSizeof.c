//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Iniciara el programa
int main()
{
    //Se declara las variables mediante la funcion de sizeof
    int n_int = sizeof(int);
    int n_char = sizeof(char);
    int n_long = sizeof(long);

    //Se crea una estructura para poder declarar variables 
    struct estructura{
        int entero;
        char caracteres[10];
    };

    //Se crea otra estructura para poder definir variables
    int n_struct = sizeof(struct estructura);
    float vector[5];
    int n_vector = sizeof(vector);

    //Mostrara en pantalla las respuestas
    printf("Tamano de 1 entero = %d\n", n_int);
    printf("Tamano de 1 char = %d\n", n_char);
    printf("Tamano de 1 long = %d\n", n_long);
    printf("Tamano de la estructura = %d\n", n_struct);
    printf("Tamano del vector = %d\n", n_vector);
}
