//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Iniciara el programa
int main()
{
    /*Para Int*/
    //Se definira el valor con un tipo de dato int
    int numero = 6;
    int numero2 = 10;
    //Para int se escribira %d
    printf("El contenido de la variable tipo int es numero: %d y numero2: %d\n",numero,numero2);
    
    /*Para Char*/
    //Se definira el valor con un tipo de dato char
    char n;
    //Se mostrara el codigo en pantalla
    printf("Introduce un caracter\n");
    //Se leera el dato que se escriba
    scanf("%c",&n);
    //Imprimira la respuesta dada por el usuario. Para char se escribira %c. Se utiliza la variable anteriormente declarada.
    printf("El caracter introducido es: %c\n",n);

    /*Para Double*/
    //Se definira el valor con tipo de dato double
    double nume = 100.5;
    //Imprimira la respuesta en pantalla. Para double se uilizara %.2lf
    printf("El contenido de la variable tipo double es: %.2lf\n", nume);

    /*Para Float*/
    //Se definira el valor con tipo de dato float
    float numeros = 7.5;
    //Imprimira la respuesta en pantalla. Para float se escribira %f o si se requiere disminuir los decimales %.2f
    printf("El contenido de la variable tipo float es: %.2f\n",numeros);
}
