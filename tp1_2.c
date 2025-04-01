#include <stdio.h>

int cuadrado1(int num) {
    return num * num;
}

void cuadrado2(int num) {
    int resultado = num * num;
    printf("resultado de la segunda funcion 'cuadrado':%d\n", resultado);
}

void mostrar_direccion_y_contenido(int num) {
    
    printf("Contenido de la variable: %d\n", num);
    printf("Direccion de memoria de la variable: %p\n", &num);
}

void invertir(int a, int b){
    int auxiliar = a;
    a = b;
    b = auxiliar;

    printf("\nel valor de 'a' es de: %d " , a);
    printf("\nel valor de 'b' es de: %d", auxiliar);
    
}

void orden(int a,int b){
    if (a > b)
    {
        int auxiliar = a;
        a = b;
        b = auxiliar;

        printf("\nel orden es %d , %d", a,b);
    }else{
        printf("\nel orden es %d , %d", a,b);
    }
}

int main (){

    int numero ;
    printf("ingrese un numero:");
    scanf("%d\n",&numero);

    int funcionCuadrado = cuadrado1(numero);
    printf("primera funcion cuadrado %d\n", funcionCuadrado);
    cuadrado2(numero);

    int a;
    int b;
    printf("\nIngrese un valor para la variable 'a':");
    scanf("%d\n" ,&a);
    printf("ingrese un valor para la variable 'b':");
    scanf("%d\n",&b);

    mostrar_direccion_y_contenido(numero);

    invertir(a,b);

    orden(a,b);   

    return 0;
}