//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Se iniciara el proceso
int main()
{
    //Se declaran las variables por tipos de datos
    int m[3][2] = {{0,1},{2,3},{4,5}};

    //printf("%d\n",m[1][1]);
    //definira la matriz
    m[2][0] = 40;

    //Se utilizara una sentencia repetitiva para este proceso a ejecutar
    for(int i=0; i<3; i++){
        //Se utilizara asi mismo otra sentencia repetitiva
        for(int j=0; j<2; j++){
            //Se imprimira el mensaje de acuerdo a lo que se busca
            printf("%d ",m[i][j]);
        }
        //Por ultimo se imprime separando cada uno
        printf("\n");
    }
}
