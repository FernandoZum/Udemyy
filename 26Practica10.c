//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Desarrolla un programa que solicite constantemente la carga de un numero al usuario.
El programa finalizara cuando el usuario introduzca un 0, momento en el que se debe visualizar
la suma y el promedio de todos los numeros introducidos*/

//Se ejecutara el incio del programa
int main()
{
    //Se declaran las variables por tipo de datos
    int suma=0,contador=0,numero=-1;

    //Se utilizara una sentencia repetitiva la cual ayudara al proceso
    while (numero !=0){
        //Se obtiene un mensaje que mostrara en pantalla y posteriormente registrara el dato que se obtiene 
        printf("Introduce un numero\n");
        scanf("%d",&numero);
        //Se iniciara un contador para luego determinar el promedio
        contador++;
        suma += numero;
    }
    //El promedio usara un tipo de valor tipo float para los decimales
    float promedio = suma/contador;
    //Se presentara el mensaje final y a lo que se llego
    printf("La suma de todos los numeros es: %d y el promedio es: %.2f",suma,promedio);
}
