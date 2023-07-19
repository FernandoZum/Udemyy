//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Declarar un registro llamado producto con los siguientes campos:
- Codigo, de tipo entero.
- Descripcion, de tipo vector de caracteres.
- Precio, de tipo real.
Definir un puntero de tipo producto y luego reservar espacio en memoria para
almacenar una variable de tipo producto.
Inicializar los campos del registro creado dinamicamente.
Imprimir los campos del registro.
Liberar el espacio dinamico reservado.*/

//Estructura para la definicion de variables
struct producto{
    int codigo;
    char descripcion[50];
    float precio;
};

//Se ejecutara el programa 
int main()
{
    //Estructura con puntero y declaracion
    struct producto *prod;
    //Se utiliza la funcion malloc
    prod = malloc(sizeof(struct producto));

    //Se presentara el siguiente menu al usuario para que pueda ingresar los datos
    printf("Introduce el codigo\n");
    scanf("%d",&prod->codigo);
    printf("Introduce la descripcion\n");
    scanf("%s",&prod->descripcion);
    printf("Introduce el precio\n");
    scanf("%f",&prod->precio);

    //Imprimira los valores con las respuestas finales ya calculadas
    printf("Codigo del articulo: %d\n", prod->codigo);
    printf("Descripcion: %s\n", prod->descripcion);
    printf("Precio: %.2f\n", prod->precio);
    
    //Libera poco a poco la memoria y puede tener otros diferentes procesos
    free(prod);
    prod = NULL;
}
