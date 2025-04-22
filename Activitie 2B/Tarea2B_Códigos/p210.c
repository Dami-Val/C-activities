#include <stdio.h>

void main()
{
int a;
int b;
int c;
int menor_n;
int mediano_n;
int mayor_n;


    printf("Hola usuario, ingresa un número:\n");
    scanf("%d",&a);
    printf("Ahora otro:\n");
    scanf("%d",&b);
    printf("Ahora el último.\n");
    scanf("%d",&c);
    //comparacion del menor
    if (a < b && a < c){
        menor_n = a;
    }
    else if (b < a && b < c){
        menor_n = b;
    }
    else {
        menor_n = c;
    }
    //comparación del mediano
    if (a > menor_n && a < mayor_n){
        mediano_n = a;
    }
    else if (b > menor_n && b < mayor_n){
        mediano_n = b;
    }
    else {
        mediano_n = c;
    }

    //comparacion del mayor
    if (a > b && a > c){
        mayor_n = a;
    }
    else if (b > a && b > c){
        mayor_n = b;
    }
    else {
        mayor_n = c;
    }
    
    

    //Mostrar resultados :0
    printf("Aquí tienes tus números en orden Ascendente: %d, %d, %d.", menor_n, mediano_n, mayor_n);
}



