//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribe un Programa que pida al usuario 3 caracteres y los 
muestre por consola separados por guiones*/

//Iniciara el programa
int main()
{
    //Se declara las variables con el tipo de dato char
    char c1,c2,c3;

    //Se mostrara en pantalla
    printf("Introduce 3 caracteres\n");
    //Leera el programa los datos ingresados por el usuario
    scanf("%c %c %c",&c1,&c2,&c3);

    //Se utiliza %c
    printf("%c-%c-%c",c1,c2,c3);
}
