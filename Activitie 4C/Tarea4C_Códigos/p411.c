#include <stdio.h>

char* decimalABinario(int numero) {
    // Verificacion de los número en el rango de 0 a 15
    if (numero < 0 || numero > 15) {
        return "Error: el número debe estar entre el 0 y 15";
    }

    // Asignamos la memoria para la cadena pedida  de 4 bits más el carácter nulo
    static char binario[5];
    
    // Convertimos el número decimal a binario de 4 bits
    binario[0] = (numero & 8) ? '1' : '0';
    binario[1] = (numero & 4) ? '1' : '0';
    binario[2] = (numero & 2) ? '1' : '0';
    binario[3] = (numero & 1) ? '1' : '0';
    binario[4] = '\0';  // Terminador de cadena

    return binario;
}

int main() {
    int numero;
    printf("Introduce un número decimal entre 0 y 15: ");
    scanf("%d", &numero);

    // Llamamos a la función y hacemos muestra del resultado
    printf("El equivalente en binario de 4 bits es: %s\n", decimalABinario(numero));

    return 0;
}
