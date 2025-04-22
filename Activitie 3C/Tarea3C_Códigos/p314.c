#include <stdio.h>
#include <math.h>

void main() { 

int i, result;

	printf("\nTabla de funciones\n\n-----------------------------------\n|  x  |  f(x) 2x⁴ - 3x³ - x² + 3  |\n-----------------------------------\n");
		for (i=2; i<=10; i++) {
			result = 2 * (int)pow(i,4) - 3 * (int)pow(i,3) - (int)pow(i,2) + 3;
			printf("   %d     f(%d) = %d\n",i,i,result);
		} printf("\n");
}
