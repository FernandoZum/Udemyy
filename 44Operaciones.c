#include <stdio.h>
#include <stdlib.h>
#include "44Operaciones.h"
#include "44InclusionLibrerias.c"

int sumar(int op1, int op2){
    return op1+op2;
}
int restar(int op1, int op2){
    return op1-op2;
}
int multiplicar(int op1, int op2){
    return op1*op2;
}
float dividir(int op1, int op2){
    if(op2 == 0){
        return 0;
    }
    else {
        return (float)op1/op2;
    }
}
