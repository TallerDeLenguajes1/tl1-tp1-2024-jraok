#include <stdio.h>

int main(){
    printf("\nHola mundo\n");

    int variable = 10;
    int *puntero;
    puntero = &variable;

    printf("1) Contenido del puntero: %d\n", *puntero);
    printf("2) Direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("3) Direccion de memoria de la variable: %p\n", &variable);
    printf("4) Direccion de memoria del puntero: %p\n", &puntero);
    printf("5) Tamanio de memoria utilizado por la variable: % bytes\n", sizeof(variable));

    return 0;
}
