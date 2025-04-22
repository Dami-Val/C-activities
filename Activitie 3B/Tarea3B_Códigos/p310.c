#include <stdio.h>

void main() {

int i, t, n, m;
i = 1;	
	printf("Hola usuario, ingresa el número del cual deseas multiplicar :\n");
	scanf("%i",&n);
	printf("Ahora ingresa hasta donde incicia la tabla:\n");
	scanf("%i",&i);
	printf("Ahora ingresa donde termina la tabla:");
	scanf("%i",&t);

	while (i<=t) {
	m = n * i;
	printf("%i x %i = %i\n", n, i, m);
	i++;
	}
}

