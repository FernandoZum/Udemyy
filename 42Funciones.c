//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se emplea la funcion void para no regresar valores
void suma(int num1, int num2, int *result);

//Inicia el programa
int main()
{
    //Se define variables de tipo de datos entero
    int num1,num2;
    //Se presentara mensajes dentro de la pantalla del usuario donde se guardara los datos
    printf("Introduce un numero\n");
    scanf("%d",&num1);
    printf("Introduce un numero\n");
    scanf("%d",&num2);

    //Se define una variable mas
    int result;

    //Se aplica la operacion de sumar de esta manera tener el resultado
    suma(num1,num2,&result);

    //Se mostrara el resultado de la suma
    printf("La suma es: %d\n",result); 
}
//Mediante void no regresara ningun tipo de dato
void suma(int num1, int num2, int *result){
    
    //De esta manera se utiliza la operacion con un puntero para guardar el dato dentro del programa
    *result = num1 + num2;
}
