#include <stdio.h>

int mostrar_x(void);
int x, res;
int main(void) {

    printf("¿Que valor quieres mostrar en pantalla?\n");
    scanf("%d",&x);
    res = mostrar_x();
    
return (0);

}

int mostrar_x(void) {

int valoringresado;
    valoringresado =  x;
    printf("Valor ingresado: %d",valoringresado);
    return (0);
}
    