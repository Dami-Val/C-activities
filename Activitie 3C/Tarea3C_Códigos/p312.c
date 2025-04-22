#include <stdio.h>

void main() {

int m, n, i;
	printf("Hola usuario, ingrese el numero m en el cual empieza la susescion y posteriormente el numero n en cual termina");
	scanf("%i", &m);
	scanf("%i", &n);
		while (m <= n) {
			printf("%i, ", m);
			m++;
		}

}
