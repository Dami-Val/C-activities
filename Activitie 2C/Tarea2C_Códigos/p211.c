#include <stdio.h>

void main()
{
float ingreso, impuesto;

	printf("Hola usuario, ingresa tu monto de ventas para saber cual es tu impuesto:\n");
	scanf("%f",&ingreso);

		if (ingreso >= 9500 ) {
		impuesto = ingreso * 0.031;
		}
		else if (ingreso > 9500 && ingreso <1500) {
		impuesto = ingreso * 0.045;
		}
		else {
		impuesto = ingreso * 0.050;
		}

	printf("Este fué tu impuesto: %f\n", impuesto);

}
