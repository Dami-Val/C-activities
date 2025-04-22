
#include <stdio.h>
#include <string.h>

void cifrarMensaje(char *mensaje);
void descifrarMensaje(char *mensaje);

int main() {
    char mensaje[100];
printf("Ingrese un mensaje para cifrar: ");
fgets(mensaje, sizeof(mensaje), stdin);

// Quitar el carácter de nueva línea del input
size_t len = strlen(mensaje);
if (len > 0 && mensaje[len - 1] == '\n') {
    mensaje[len - 1] = '\0';
}

cifrarMensaje(mensaje);
printf("Mensaje cifrado: %s\n", mensaje);

descifrarMensaje(mensaje);
printf("Mensaje descifrado: %s\n", mensaje);

return 0;
}

void cifrarMensaje(char *mensaje) {
    for (int i = 0; mensaje[i] != '\0'; i++) {
        mensaje[i] += 2;
    }
}

void descifrarMensaje(char *mensaje) {
    for (int i = 0; mensaje[i] != '\0'; i++) {
        mensaje[i] -= 2;
    }
}