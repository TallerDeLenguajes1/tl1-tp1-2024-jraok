#include <stdio.h>

float cuadrado(float x);
void cuadrado2(float numero);
void mostrar(float x);
void invertir(float a, float b);
void orden(float a, float b);

int main(){
	float numero, resultado, numero2;
	printf("\nIngrese el numero del que desea elevar al cuadrado:	\n");
	scanf("%d",&numero);
	resultado = cuadrado(numero);
	puts("Ejercicio 4-a");
    printf("\nEl cuadrado de %d es %.2f\n", numero, resultado);
	puts("Ejercicio 4-b");
	cuadrado2(numero);
	puts("Ejercicio 4-c");
	mostrar(numero);
	puts("Ejercicio 4-d");
	printf("\nIngrese un nuevo numero: ");
	scanf("%f",&numero2);
	invertir(numero,numero2);
	puts("Ejercicio 4-e");
	orden(numero,numero2);
	return 0;
}

void cuadrado2(float numero) {
  printf("\nEl cuadrado de %d es %.2f\n", numero, (numero * numero));
}

float cuadrado(float x){
	return (x*x);
}

void mostrar(float x){
	printf("\nDireccion de memoria de la variable: %p", &x);
	printf("\nContenido de la variable: %.2f",x);
}

void invertir(float a, float b){
	float aux = b;
	b =	a;
	a = b;
}

void orden(float a, float b){
	if (a>b || a == b){
		printf("\nLos numeros en orden ascendente son: %.2f - %.2f",a,b);
	}else{
		printf("\nLos numeros en orden ascendente son: %.2f - %.2f",b,a);
	}
}
