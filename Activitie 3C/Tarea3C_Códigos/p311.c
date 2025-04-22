#include <stdio.h> 

void main() {

int n, i, j, mult;
	for (i=1;i<=10;i++) {
		n = 4;
		mult = i*n;
		printf("%i x %i = %i\n", n, i, mult);
	}
	printf("\n\n");
	for (j=1;j<=10;j++) {
		n = 5;
		mult = j*n;
		printf("%i x %i = %i\n", n, j, mult);
	}
	printf("\n\n");

}
