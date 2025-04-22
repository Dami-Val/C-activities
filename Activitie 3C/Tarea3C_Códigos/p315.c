#include <stdio.h>
#include <math.h>

void main() { 

float i, result;

	printf("\nTabla de funciones\n\n-----------------------:------------\n|  x  |  f(x) 3.5 x⁶ - 9.536 3x³ - x⁴ + 2.3  |\n-----------------------------------\n");
		for (i=0.5; i<=10; i=i+0.5) {
			result = 3.5 * pow(i,6) - 9.536 * pow(i,3) - pow(i,4) + 3;
			printf("   %.1f     f(%.1f) = %.1f\n",i,i,result);
		} printf("\n");
}
