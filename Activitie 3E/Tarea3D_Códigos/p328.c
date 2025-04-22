#include <stdio.h>

int main(){
    float pulgadas,cm;
    do{
        printf("Ingresa el valor en pulgadas (0 para salir):\n");
        scanf("%f",&pulgadas);
        if(pulgadas!=0){
            cm=pulgadas*2.54;
            printf("El valor en centímetros es = %0.2f\n",cm);
        }
    }while(pulgadas!=0);

    printf("Programa finalizado.\n");
    return 0;
}
