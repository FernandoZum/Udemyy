//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*En un hotel la informacion de las habitaciones se guarda en un vector bidimensional.
Cada posicion del vector es a su vez otro vector en el que la primera posicion indica el numero
de habitacion y las tres siguientes posiciones, el precio de la habitacion en temporada baja, media y alta.*/

//Se iniciara la ejecucion del programa
int main()
{
    //Se declara las variables por tipos de datos
    int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_temp_baja = 0, suma_temp_media = 0, suma_temp_alta = 0;

    //Se utilizara estructuras repetitivas que ayuden a definir al programa
    for (int i=0; i<3; i++){
        for (int j=0; j<4; j++){
            //Se utilizara sentencias de control condicionales para encontrar a la posible solucion
            if (j==1){
                suma_temp_baja = suma_temp_baja + informacion[i][j];
            }
            if (j==2){
                suma_temp_media = suma_temp_media + informacion[i][j];
            }
            if (j==3){
                suma_temp_alta = suma_temp_alta + informacion[i][j];
            }
            
        }
        
    }
    //Se encontrara los tipos de datos que se llegen a necesitar para encontrar la respuesta
    float promedio_temp_baja = suma_temp_baja/3;
    float promedio_temp_media = suma_temp_media/3;
    float promedio_temp_alta = suma_temp_alta/3;

    //Imprimira las respuestas finales que se desea buscar
    printf("Promedio Temporada Baja: %.2f\nPromedio Temporada Media: %.2f\nPromedio Temporada Alta: %.2f",promedio_temp_baja,promedio_temp_media,promedio_temp_alta);
}
