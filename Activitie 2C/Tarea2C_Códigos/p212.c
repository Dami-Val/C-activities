#include <stdio.h>

void main() {
float ingreso, impuesto, multa, total;

printf("Hola usuario, ingresa tu monto de ventas para saber cual es tu impuesto:\n");
scanf("%f",&ingreso);

	if (ingreso <= 544 ) {
	impuesto = ingreso * 0.08;
	}
	else {
	impuesto = ingreso * 0.047;
	}

	if (impuesto >= 329) {
	multa = ingreso * 0.06;
	}

total = impuesto + multa;

printf("Este fue tu impuesto: %0.2f$\nEsta fue tu multa: %0.2f$\nEn total pagas: %0.2f$\n", impuesto, multa, total);

	
}
