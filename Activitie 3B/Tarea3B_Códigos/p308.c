#include <stdio.h>

int main() {

float pu, costo, d, descuento, total;
int promo;
char simbol;
simbol = '%';
promo = 0;
d = 0;


    printf("Hola usuario, ingrese el costo del producto para conocer la tabla de promociones y descuentos: \n");
    scanf("%f", &pu);
    
    printf("#  Cantidad  #  PU  #  Costo  #  Promo  #  Descuento  #  Total  #\n");
        for(int i = 1; i <= 1000; i++) {
            costo = pu * i;
                if (costo >=100 && costo <=200) {
		    d = 0.05;
                    promo = 5;
                    descuento = costo * d;   
                }
                else if (costo >200 && costo <=500) {
                    d = 0.1;
                    promo = 10;
                    descuento = costo * d;
                }
                else if (costo >500) {
                    d = 0.18;
                    promo = 18;
                    descuento = costo * d;
                }
                total = costo - descuento;
        	      
    printf("  %d            %0.2f$  %0.2f$       %d%c       %0.2f$    %0.2f$  \n", i, pu, costo, promo, simbol, descuento, total);
	}

    return 0;
}

