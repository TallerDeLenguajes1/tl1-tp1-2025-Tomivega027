#include <stdio.h>

int main(){

    printf("Hola Mundo");

    int numero = 10;
    int *pnumero = &numero;

    printf("El contenido del puntero: %d\n", *pnumero);
    printf("La direccion de memoria almacenada por el puntero: %p\n",pnumero);
    printf("La direccion de memoria de la variable: %p\n", numero);
    printf("La direccion de memoria del puntero: %p\n", &pnumero);
    printf("5) El tamaño de memoria utilizado por la variable: %zu bytes\n", sizeof(numero));
    


    return 0;
}