//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Se desea realizar un programa que almacene la informacion de un motor de combustion 
interna y posteriormente muestre la cilindrada de dicho motor en CV. La informacion del motor
se almacenara en una estructura con los siguientes miembros y tipos de datos:

- Identificador del motor: Valor numerico que identifica el motor de toma unica.
- Cilindro: Estructura de datos anidada.
- Numero de cilindros: Numero entero que indica el numero de cilindros del motor.
- Cilindrada: Numero real que se calculara en el programa. 

A su vez, cilindro sera una estructura anidada que conste de los siguientes miembros:

- Diametro: Numero real (en milimetros)
- Carrera: Numero real (en milimetros)

La informacion del cilindro se almacenara en milimetros. El programa podra los datos del
motor al usuario y calculara la cilindrada, que almacenara en la misma estructura de datos
en la siguiente formula.*/

//Iniciara a ejecutar el programa
int main()
{
    //Iniciara la estructura definiendo las variables con diferentes tipos de datos
    struct cilindro{
        float diametro;
        float carrera;
    };
    //Se pondra otra estructura que marcara las otras variables a utilizar
    struct motor{
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };

    //Se utilizara una estructura para poder tener un proceso
    struct motor motor1;
    
    //Presentara en pantalla y guardara datos dentro del programa
    printf("Introduce el identificador\n");
    scanf("%d",&motor1.identificador);
    printf("Introduce el diametro del cilindro(mm)\n");
    scanf("%f",&motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro(mm)\n");
    scanf("%f",&motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d",&motor1.num_cilindros);

    //Se calculara mediante una formula con pow
    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;

    //Mostrara en pantalla todos las respuestas obtenidas
    printf("Identificador: %d\n",motor1.identificador);
    printf("Diametro(mm): %.2f\n",motor1.cilindro1.diametro);
    printf("Carrera(mm): %.2f\n",motor1.cilindro1.carrera);
    printf("No cilindros: %d\n",motor1.num_cilindros);
    printf("Cilindrada: %.2f\n",motor1.cilindrada);
}
