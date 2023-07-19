//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que pida un numero entero entre 1 y 10. 
Y guarde en un fichero de texto de nombre tabla.txt la tabla de ese numero*/

//Iniciara el programa
int main()
{
    //Se declara la variable por int
    int numero;
    //Presentara el mensaje en pantalla de lo que se debe realizar y se guardara
    printf("Introduce un numero: \n");
    scanf("%d",&numero);

    //Abrira el archivo dentro de la computadora
    FILE *f;
    //Sera el nombre del archivo
    f = fopen("tabla.txt","w");
    
    //Se establece una estructura repetitiva posteriormente se mostrara el dato
    for(int i=0; i<=10; i++){
        fprintf(f,"%d\n",i*numero);
    }

    //Se cierra el ciclo y se cierra el archivo anteriormente abierto
    fclose(f);
}
