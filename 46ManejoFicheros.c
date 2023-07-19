//Inclusion de Librerias
#include <stdio.h>
#include <stdlib.h>

//Comienzo del programa
int main()
{
    //Esta funcion se utiizara para abrir un archivo
    FILE *f;
    //Lectura
    f = fopen("prueba.txt","r");
    char *linea;
    
    //Estructura repetitiva
    while (feof(f)==0){
        fscanf(f,"%s",linea);
        printf("%s\n",linea);
    }
    //Cierre del programa
    fclose(f);
    
   
   //Escritura
   f = fopen("prueba.txt","w");
   char *caden= "Esta es una cadena de prueba";
   fprintf(f,"%s\n",caden);
   
   fclose(f);
    f = fopen("prueba.txt","a");
    //Cadena definida como tipo caracter y siendo luego puntero
    char *cadena = "Esta es otra cadena de prueba";
    //Mostrara en pantala la cadena
    fprintf(f,"%s\n",cadena);

    fclose(f);
}
