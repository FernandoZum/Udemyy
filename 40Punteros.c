//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se comenzara a iniciar el programa
int main()
{
    //Se declaran variables y se declara el puntero a utilizarse
    int numero = 6;
    int *punteroANumero = &numero;

    //Presentara en pantalla del usuario
    printf("El puntero punteroANumero contiene la direccion de memoria: %p\n",&punteroANumero);
    printf("El valor de la variable situada en la direccion de memoria a la que apunta es: %d\n",*punteroANumero);

    //Se empleara una cadena donde se definira tipo caracter
    char cadena[30] = "esta es una cadena de prueba";
    char *punteroACadena = &cadena[0];

    //Se empleara una sentencia repetitiva para poder mostrar el puntero
    for(int i=0; i<30; i++){
        printf("%c",*(punteroACadena+i));
    }
    printf("\n");

    //Se definira el vector, asi mismo como vector tipo puntero para poder guardar en la memoria
    int vector[5] = {1,2,3,4,5};
    int *punteroAVector = &vector[0];

    //Se aplica una sentencia repetitiva
    for(int i=0; i<5; i++){
        printf("%d",*(punteroAVector+i));
    }
    //Mostrara en pantalla separado 
    printf("\n");

    //Se aplicara una estructura donde se define las variables
    struct mi_registro{
        int num;
        char car;
    };

    //Se aplica otra estructura para las diferentes variabes
    struct mi_registro r1;
    //Se calcula de lo que se requiere buscar
    struct mi_registro *r2 = &r1;
    (*r2).num = 5;
    r2->car= 'a';

    //Mostrara al final del programa todos los datos guardados y registrados como respuestas finales de todo el proceso
    printf("El campo num de la estructura a la que apunta r2 es: %d\n",(*r2).num);
    printf("El campo car de la estructura r1 es: %c\n",r1.car); 
}
