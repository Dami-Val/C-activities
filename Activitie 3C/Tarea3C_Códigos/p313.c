#include <stdio.h> 

void main() {

int n2=2, n3=3, n4=4;
	printf("\nTabla de múltiplos\n -2- -3- -4-\n-------------\n");
	while (n2<=200 || n3<=300 || n4<=400) {
		printf("  %i   %i   %i\n", n2, n3, n4);
		n2=n2+2, n3=n3+3, n4=n4+4;
	}

}
