//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Escribir una funcion que reciba como parametros un vector de enteros(por referencia)
y la longitud del vector y un numero (por valor).

La funcion debe multiplicar cada elemento del vector por el numero.*/

//Se empleara esta funcion como tipo de puntero, declaracion de variable y sin que regrese ningun valor
void multiplica_vector(int *vector,int nElem, int numero);

//Comienza el programa
int main()
{
    //Se define la variable del vector para utilizarlo como una funcion
    int vector[10] = {1,2,3,4,5,6,7,8,9,10};
    multiplica_vector(&vector[0],10,3);

    //Se aplica una estructura repetitiva posteriormente se mostrara
    for(int i=0; i<10; i++){
        printf("%d",vector[i]);
    }
}

//Se aplica esta funcion junto a una estructura repetitiva y asi poder operar con punteros
void multiplica_vector(int *vector, int nElem, int numero){
    for(int i=0; i<nElem; i++){
        *(vector+i) = *(vector+i) * numero;
    }
}
