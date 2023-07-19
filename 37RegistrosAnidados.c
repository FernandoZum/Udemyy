//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se iniciara el programa
int main()
{
    //Se definira las variables en una estructura y con su tipo de dato que se requiere
    struct tipo1{
        int entero1;
        char caracter1;
    };

    //Se definira las variables en una segunda estructura
    struct tipo2{
        float real1;
        struct tipo1 variable1;
    };

    //De esta manera podemos definir de manera correcta de lo que se quiere buscar
    struct tipo2 variable2 = {5.5,{7,'C'}};

    //Se mostrara en pantalla
    printf("%d",variable2.variable1.entero1);
    
}
