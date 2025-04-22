#include <stdio.h>

int piramide(int alt);

void main() {
int altura, result;
	printf("Hola usuario, introduce la altura de la pirámide:\n");
	scanf("%d",&altura);
	result = piramide(altura);
}

int piramide(int alt){
	if(alt<=0) {
		return 1;
	}

	for(int i=alt; i>0; i--){
		for(int j=0;j<alt-i;j++){
			printf(" ");
		}
		for(int k=0;k<(2*i-1);k++) {	
			printf("*");
		}
		printf("\n");
	}
}
