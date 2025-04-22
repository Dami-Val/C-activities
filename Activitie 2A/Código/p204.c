#include <stdio.h>

void main()
{
    float ingreso, impuesto, sueldo_neto;

    printf("Ingrese su ingreso: ");
    scanf("%f", &ingreso);

    if (ingreso < 9800.00) 
    {
        impuesto = ingreso * 0.20;
    } 

    else 
    {
        impuesto = ingreso * 0.25;
    }

    sueldo_neto = ingreso - impuesto;

    printf("Impuesto a pagar: $%.2f\n", impuesto);
    printf("Sueldo neto despues de impuestos: $%.2f\n", sueldo_neto);

}
