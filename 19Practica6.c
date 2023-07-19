//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir un programa que se utilice para calcular el precio final de venta de coches de segunda mano de un concesionario.
Para ello, el programa debe pedir al usuario que introduzca el precio base del vehiculo, el numero de kilometros y su consumo

-Si los kilometros son inferiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 20%.
-Si los kilometros son superiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 10%.
-Si el consumo es superior a 5, incrementar el precio base un 5%.*/

//Ejecucion del programa
int main()
{
    //Declaracion de variables por tipo de dato
    int precio_base,kilometros;
    float consumo,precio_final;

    //Muestra en pantalla lo que se requiere pedir al usuario
    //Y utilizara %d y %f para poder registrar los datos obtenidos
    printf("Introduce el precio base del vehiculo\n");
    scanf("%d",&precio_base);
    printf("Introduce los kilometros\n");
    scanf("%d",&kilometros);
    printf("Introduce el consumo\n");
    scanf("%f",&consumo);

    //Se utilizara una estructura de control condicional para determinar la posible respuesta
    if(kilometros<20000 && consumo<=5){
        precio_final = precio_base * 1.2;
    }
    else if(kilometros>20000 && consumo<=5){
        precio_final = precio_base * 1.1;
    }
    else if(consumo>5){
        precio_final = precio_base * 1.05;
    }

    //Mensaje Final del proceso anterior
    printf("El precio final del vehiculo es: %.2f",precio_final);
}

