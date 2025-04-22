#include <stdio.h>

int tablaDeMult(int inicio, int fin, int multiplicador) {
	int suma = 0;

	for (int i=inicio; i<=fin; i++) {
		int resultado = multiplicador*i;
		printf("%d * %d = %d\n",multiplicador, i, resultado);
		suma+=resultado;
	}
	return suma;
}


void main() {
    int inicio, fin, multiplicador;
    
    // Solicitar datos al usuario
    printf("Ingresa el número de inicio: ");
    scanf("%d", &inicio);
    printf("Ingresa el número de fin: ");
    scanf("%d", &fin);
    printf("Ingresa el multiplicador: ");
    scanf("%d", &multiplicador);
    
    // Llamar a la función y mostrar el resultado de la suma
    int sumaTotal = tablaDeMult(inicio, fin, multiplicador);
    printf("La suma de los resultados es: %d\n", sumaTotal);
}



















