//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#include <time.h>

//Se iniciara el programa
int main()
{
    //Se muestra cada ejemplo con su respectiva libreria

    //ctype.h: isdigit
    printf("%d\n",isdigit('r'));
    //math.h: sqrt
    printf("%.2f\n",sqrt(7));
    //limits.h: INT_MAX
    printf("%d\n",INT_MAX);
    //stdlib.h: rand
    srand(time(NULL));
    printf("%d\n",rand() % 11);
    //string.h: strlen
    printf("%d\n",strlen("cadena de prueba"));
    //time.h: time, difftime
    time_t comienzo,final;
    comienzo = time(NULL);
    
    //Se emplea una estructura repetitiva
    for(int i=0; i<10; i++){
        printf("-");
    }
    
    //Fin del programa
    final = time(NULL);
    printf("%f\n", difftime(comienzo,final));
}
