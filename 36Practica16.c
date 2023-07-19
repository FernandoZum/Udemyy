//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crear un programa que pida al usuario los nombres, edades y alturas de los jugadores
de un equipo de baloncesto(5 jugadores).
Posteriormente le presentara un menu que le permita:
-Listar los nombres y alturas de los jugadores.
-Buscar un jugador por su nombre y presentar su altura y su edad.
-Indicar el nombre y la edad del jugador mas alto del equipo.*/

//Ejecuta el programa
int main()
{
    //Inicia declarando variables de acuerdo a una estructura en general
    struct jugador{
        char nombre[50];
        int edad;
        float altura;
    };

    //Pone en primer lugar la estructura a realizar
    struct jugador jugadores[5];

    //Se iniciara el programa con una estructura repetitiva
    for(int i=0; i<5; i++){
        //Mostrara al usuario que datos registrar dentro del programa
        printf("Introduce el nombre del jugador %d\n",i+1);
        gets(jugadores[i].nombre);
        printf("Introduce la edad del jugador %d\n",i+1);
        scanf("%d",&jugadores[i].edad);
        printf("Introduce la altura del jugador %d\n",i+1);
        scanf("%f",&jugadores[i].altura);

        //Limpia un poco la memoria
        fflush(stdin);
    }

    //Se declara a la variable como -1
    int opcion = -1;

    //Se agrega una estructura repetitiva
    while (opcion !=0){
        printf("Introduce la opcion que deseas utilizar: \n1. Listar Jugador\n2. Buscar Jugador\n3. Jugador mas alto\n0. Salir\n");
        scanf("%d",&opcion);
        fflush(stdin);

        //Se agregan secuencias condicionales para que el programa pueda seguir
        if(opcion == 1){
            //Se agrega una estructura repetitiva
            for(int i=0;i<5;i++){
                printf("Jugador de nombre %s y altura %.2f\n",jugadores[i].nombre, jugadores[i].altura);
            }
        }
        //Se agrega una estructura condicional
        if(opcion == 2){
            //Se define la variable
            char nombre_jugador[50];
            printf("Introduce el nombre del jugador que deseas buscar\n");
            gets(nombre_jugador);
            int encontrado = 0;

            //Se agrega una secuencia repetitiva
            for(int i=0;i<5;i++){
                //Se agrega una secuencia condicional igualado a 0
                if(strcmp(jugadores[i].nombre,nombre_jugador) == 0){
                    encontrado = 1;
                    //Presenta en pantalla las respuestas registradas
                    printf("La edad del jugador es %d y su altura %.2f\n",jugadores[i].edad,jugadores[i].altura);
                }
            }
            //Se agrega una sentencia condicional igualado a 0
            if(encontrado == 0){
                printf("Jugador no encontrado\n");
            }
        }
        
        if(opcion == 3){
            //Se declaran las variables de acuerdo de todo tipo de dato
            float mayor_altura = jugadores[0].altura;
            char nombre_mayor_altura[50];
            int edad_mayor_altura = jugadores[0].edad;
            strcpy(nombre_mayor_altura,jugadores[0].nombre);
            //Se agrega una secuencia repetitiva
            for(int i=1;i<5;i++){
                //Se agrega una secuencia condicional
                if(jugadores[i].altura > mayor_altura){
                    strcpy(nombre_mayor_altura,jugadores[i].nombre);
                    //Declaracion de difetentes variables con su calculo
                    edad_mayor_altura = jugadores[i].edad;
                    mayor_altura = jugadores[i].altura;
                }
            }
            //Mostrara en pantalla los resultados finales
            printf("El nombre del jugador de mayor altura es %s y su edad es %d\n",nombre_mayor_altura,edad_mayor_altura);

        }
            //Estructura condicional que mostrara cuando no se cumpla la condicion
            if(opcion!=0 && opcion!=1 && opcion!=2 && opcion!=3){
                printf("Opcion Incorrecta");
            }
    }
    
}
