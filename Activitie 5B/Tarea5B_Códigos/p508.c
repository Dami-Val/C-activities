#include <stdio.h>

int main() {
    int N, num;
    int arr[20];
    printf("Ingrese la cantidad N de elementos a rellenar en el array ");
    scanf("%d", &N);
    printf("Ingrese el numero pedido: ");
    scanf("%d", &num);
    if (N < 0 || N >20) {
        return 0;
    }
    
    for (int i = 1; i <= N; i++) {
            arr[i] = num * (i + 1);
        }
    printf("Los multiplos del arreglo son: ");
    for (int i = 1; i <= N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
