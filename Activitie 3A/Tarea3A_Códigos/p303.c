#include <stdio.h>

void main() {
int i, n;
	printf("Hola usuario, este programa se ejecuta de 2 en 2 hasta el numero que tu selecciones, elige hasta que numero quieres que se ejecute el programa:");
	scanf("%i",&n);
	for(i=4; i<n; i=i+2) {
	printf("%i\n",i);
	}
}

