//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Se desea realizar un programa que permita controlar la entrada de los asistentes a un museo.
Para ello el programa ira solicitando, por cada grupo de asistentes, informacion de la hora de acceso,
el numero de personas que forman el grupo y las edades de cada una de ellas. Una vez introducida
la informacion, el programa mostrara el precio total de la entrada grupal. 

La informacion de la entrada se almacenara en una estructura de datos formada por los siguientes miembros:
- Hora de Entrada
- Numero de Asistentes
- Precio total

A su vez, la hora de entrada sera una estructura anidada donde se almacenara la siguiente informacion:
- Hora
- Minuto*/

//Se ejecutara el programa
int main()
{
    //Se realizara una estructura para poder definir las variables con su tipo de dato
    struct hora_entrada{
        int hora;
        int minuto;
    };
    
    //Se realizara otra estructura para poder definir bien las variables
    struct entrada{
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    //Se tendra una estructura de la entrada
    struct entrada el;

    //Se definira continuar como caracter
    char continuar = 'S';

    //Se empleara una estructura repetitiva
    while(continuar == 'S'){

        //Se mostrara en pantalla para indicar al usuario que ingresar
        printf("Introduce la hora de entrada\n");
        scanf("%d",&el.hora1.hora);
        printf("Introduce el minuto de entrada\n");
        scanf("%d",&el.hora1.minuto);
        printf("Introduce el numero de asistentes\n");
        scanf("%d",&el.asistentes);

        int total=0;

        //Se utilizara una sentencia repetitiva con el cual cumplira una codicion. Con un contador
        for(int i=0; i<el.asistentes; i++){

        //Se empleara la sentencia condicional con la variable definida para obtener los datos al final del programa
        int edad;
        printf("Introduce la edad del asistente %d\n", (i+1));
        scanf("%d",&edad);
        if(edad < 6){
            total=total + 0;
        }
        else if(edad >=6 && edad <=15){
            total=total + 5;
        }
        else if((edad >=16 && edad <=26) || edad > 65){
            total=total + 8;
        }
        else {
            total=total + 10;
        }
        }
        if(el.asistentes >= 5){
            el.precio = total - total*0.1;
        }
        else{
            el.precio = total;
        }
        
        //Se presentara todas las respuestas dadas al final del programa
        printf("Hora de entrada del grupo %d\n",el.hora1.hora);
        printf("Minuto de entrada del grupo %d\n",el.hora1.minuto);
        printf("Precio de las entradas del grupo %.2f\n",el.precio);

        //Se presentara al final un menu donde se preguntara si se desea comenzar nuevamente con el programa
        printf("Quieres Continuar con otro Grupo?(S/N)\n");
        scanf("%c",&continuar);
        while(continuar == '\n'){
            scanf("%c",&continuar);
        }
    }
}
