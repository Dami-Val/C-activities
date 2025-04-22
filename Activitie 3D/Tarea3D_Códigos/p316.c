#include <stdio.h>
#include <math.h>

void main () {
float n,z;

	printf("Hola usuario, ingresa el valor final N:\n");
	scanf("%f",&n);
	for (float x=-10;x<n;x=x+0.5) {
		if((x+5)==0) {
			printf("Error\n");
		} else {
			z=4*(pow(x,4))-3.5*(pow(x,2))/(x+5);
			printf("%0.1f\t%0.2f\n",x,z);
		}
	}
}
