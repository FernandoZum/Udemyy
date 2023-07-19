//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Desarrollar un programa que pida por teclado una cadena y un caracter
y devuelva si dicho caracter se encuentra en la cadena y si es asi
la posicion de la primera aparicion del mismo*/

//Iniciara el programa
int main()
{   
    //Se declararan las variables por el tipo de dato que se requiere
    char cadena[50];
    char caracter;

    //Se mostrara en pantalla el mensaje y guiara al usuario lo que se pide
    printf("Introduce una cadena\n");
    gets(cadena);
    printf("Introduce un caracter\n");
    caracter = getchar();

    //Se declara la variable como tipo entero
    int i = 0;
    int pos = -1;

    //Se utiliza una estructura repetitiva
    while(cadena[i] !='\0' && pos == -1){
        //Se maneja una estructura de condicion
        if(cadena[i] == caracter){
            pos = i;
        }
        //Se obtiene un contador
        i = i + 1;
    }
    //Se manejara todo el programa por medio de una estructura condicional
    if(pos !=-1){
        printf("El caracter %c se encuentra en la cadena %s en la posicion %d",caracter,cadena,pos);
    }
    else{
        printf("El caracter %c no se encuentra en la cadena %s",caracter,cadena);
    }
}
