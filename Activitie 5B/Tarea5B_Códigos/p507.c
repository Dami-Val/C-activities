#include <stdio.h>

void pares(int arr[], int tam);
void impares(int arr[], int tam);

int main() {
    int arr[20];

    for (int i = 1; i <= 20; i++) {
        printf("Ingrese el valor de la posicion %d (escriba 0 para salir): ", i);
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            return 0;   
        } 
    }
    pares(arr, 20);
    impares(arr, 20);
}

void pares(int arr[], int tam) {
    printf("Pares: ");
    for (int i = 1; i <= tam; i++) {
        if (arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void impares(int arr[], int tam) {
    printf("Impares: ");
    for (int i = 1; i <= tam; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
