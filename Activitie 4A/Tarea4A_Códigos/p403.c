#include <stdio.h>

int xalcubo(int valor); //declarar la funcion xalcubo

void main() {
int x, res;

	printf("Hola usuario, ¿qué valor quieres elevar al cubo?\n");
	scanf("%d",&x);
	res = xalcubo(x);
	printf("%d³ = %d",x,res);
}

int xalcubo(int valor) {
int cubo;
	cubo=valor*valor*valor;
	return cubo;
}


