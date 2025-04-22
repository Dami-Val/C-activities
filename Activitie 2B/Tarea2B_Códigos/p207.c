#include <stdio.h>

void main()
{
float monto, comision;
    
    printf("Hola usuario, ingresa tu monto de ventas para saber cual es tu comisión\n");
    scanf("%f",&monto);

    if (monto < 1540.0){
    comision = monto * 0.028;
    }
    else {
    comision = monto * 0.035;
    }
    

    printf("Genial, tu comisión es de: %0.2f$\n", comision);

}







