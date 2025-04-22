#include <stdio.h>
#include <string.h>

void centrarTexto(char texto[]) {
    int longitudTexto = strlen(texto);     // Longitud del texto
    int columnas = 80;                     // Ancho de la pantalla
    int espacios = (columnas - longitudTexto) / 2;  // Cálculo de espacios para centrar

    for (int i = 0; i < espacios; i++) {   // Imprime los espacios antes del texto
        printf(" ");
    }
    
    printf("%s\n", texto);                 // Imprime el texto centrado
}

void main() {
    char texto[100];
    
    // Solicitar el texto al usuario
    printf("Ingresa el texto que deseas centrar: ");
    fgets(texto, sizeof(texto), stdin);
    
    // Eliminar el salto de línea generado por fgets
    texto[strcspn(texto, "\n")] = '\0';

    // Llamar al procedimiento para centrar el texto
    centrarTexto(texto);
}

