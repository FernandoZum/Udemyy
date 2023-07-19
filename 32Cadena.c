//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se ejecutara el programa 
int main()
{
    //Se definira las variables por tipo de datos de caracteres
    char cadena[100] = "esto es una cadena";//acaba en \0
    char cadena2[100] = "esto es una cadena\0";
    char cadena3[100] = {'e','s','t','o','\0'};

    //Se utilizara una sentencia repetitiva para poder definir mejor la cadena de caracteres
    for(int i=0; i<100; i++){
        printf("%c",cadena[i]);
    }
    //Mostrara en pantalla los datos registrados con espacio
    printf("\n");
    cadena[3]='A';
    printf("%c\n",cadena[3]);

    //Imprimira a continuacion una cadena
    printf("%s\n",cadena3);

    //Pedira al usuario ingresar una cadena siguiente para realizar la cadena
    printf("Introduce una cadena\n");
    gets(cadena3);
    printf("%s",cadena3);
}
