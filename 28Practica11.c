//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Cargar por teclado y almacenar en un vector el peso de 5 personas. Obtener el promedio de los mismos. 
Contar cuantas personas pesan mas que el promedio y cuantas pesan menos.*/

//Se iniciara el programa
int main()
{
    //Se declararan las variables por medio de tipos de datos
    float pesos[5];
    float suma=0;

    //Se utilizara una sentencia repetitiva 
    for(int i=0;i<5;i++){
        
        //Presentara un mensaje en pantalla y almacenara los datos que sean ingresados
        printf("Introduce un peso para almacenarlo\n");
        scanf("%f",&pesos[i]);
        //En el proceso estara un contador
        suma=suma+pesos[i];
    }
    //Se definira las variables por tipos de datos
    float promedio = suma/5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    //Se incluira una sentencia repetitiva
    for(int i=0;i<5;i++){
        //Se incluira una sentencia condicional para un contador
        if(pesos[i] >= promedio){
            cont_mayor_igual++;
        }
        //Si no cuenta con el proceso dara otra respuesta y tendra otro contador
        else{
            cont_menor++;
        }
    }
    //Presentara los datos finales que se dieron
    printf("El promedio de pesos es: %.2f",promedio);
    printf("\nEl numero de pesos mayores o iguales que el promedio es: %d y el numero de pesos menores que el promedio es: %d",cont_mayor_igual,cont_menor);
}
