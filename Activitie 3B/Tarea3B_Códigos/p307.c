#include <stdio.h>

int main() {
float p, r;
	printf("Hola usuario, ingrese el costo del producto para saber cuanto cuesta en stock en base a la cantidad del 1 al 1000:\n");
	scanf("%f",&p);

		for(int i=1; i<=1000; i++) {
			r = p*i;
			printf("Cantidad: %d \nPrecio de Stock: %0.2f$\n\n", i , r);
		}


}
