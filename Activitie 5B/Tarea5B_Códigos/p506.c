
#include <stdio.h>

void main() {
    int values[5];
    int media = 0;
    int sum = 0;
    for (int i=0; i<5; i++){
        printf("ingresa los valores de de la posición %d: \n", i+1);
        scanf("%d",&values[i]);
        sum = sum + values[i];
    }
    media = sum / 5;
    for (int i=0; i<5; i++){
        printf("valor %d: \n", values[i]);
    }
    printf("El promedio es: %d",media);
}















