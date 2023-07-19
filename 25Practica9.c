//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

/*Desarrolla un programa que solicite la carga de un numero al usuario.
A continuacion, debera pedir las notas de ese numero de alumnos, 
y mostrar por pantalla el numero de alumnos aprobados y suspendidos.*/

//Se iniciara el programa
int main()
{
    //Se declaran las variables por tipos de datos
    int n, contador_aprobados=0, contador_suspendidos=0;
    float nota;

    //Se presentara el mensaje en pantalla
    printf("Introduce el numero de alumnos\n");
    //Se registrara los datos ingresados
    scanf("%d",&n);

    //Se utiliza una sentencia repetitiva 
    for(int i=1; i<=n; i++){
        //Se pide la usuario ingresar los datos que se requieren y luego registrar
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);

        //Se utiliza una sentencia condicional
        //Si cumple activa el contador
        if(nota>=5){
            contador_aprobados++;
        }
        //Si no se cumple activara el otro contador
        else{
            contador_suspendidos++;
        }
    }
    
    //Se presenta al final los resultados que se esperan 
    printf("El numero de alumnos aprobados es: %d y el de alumnos suspendidos es: %d\n",contador_aprobados,contador_suspendidos);
}
