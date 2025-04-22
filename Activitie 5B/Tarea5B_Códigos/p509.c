#include <stdio.h>

#define fila 3
#define columna 3

int main() {
    int matriz[fila][columna] = {
        {21,43,64},
        {35,76,13},
        {27,97,88}
    };

    int mayor = matriz[0][0];
    int menor = matriz[0][0];
    int posMayF = 0, posMayC = 0;
    int posMinF = 0, posMinC = 0;

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                posMayF = i;
                posMayC = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                posMinF = i;
                posMinC = j;
            }
        }
    }
    printf("El valor maximo es %d ubicado en (%d, %d)\n", mayor, posMayF+1, posMayC+1);
    printf("El valor minimo es %d ubicado en (%d, %d)\n", menor, posMinF+1, posMinC+1);
}
