#include <stdio.h>

int main(){

    printf("Hola Mundo");

    int numero = 10;
    int *pnumero = &numero;

 printf("Contenido del puntero: %d\n", *pnumero);
 printf("Direccion de memoria almacenada por el puntero: %p\n", pnumero);
 printf("Direccion de memoria de la variable: %p\n", &numero);
 printf("Direccion de memoria del puntero: %p\n", &pnumero);
 printf("Tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(numero));
    


    return 0;
}