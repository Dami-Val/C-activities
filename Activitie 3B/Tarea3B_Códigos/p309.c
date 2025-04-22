#include <stdio.h>

void main() {

int i, n, m;
i = 1;	
	printf("Hola usuario ingresa de que numero quieres saber su tabla hasta el 10\n");
	scanf("%i",&n);

	while (i <=10) {
	m = n * i;
	printf("%i x %i = %i\n", n, i, m);
	i++;
	}
}

