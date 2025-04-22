#include <stdio.h>
#include <math.h>

void main()
{
double a, b, c, sp, perimetro, area;
printf("Hola usuario, para calcular el area y perimetro de un triangulo ingresa sus tres lados,\n empecemos por el a:\n");
scanf("%lf",&a);
printf("Ahora el lado b:\n");
scanf("%lf",&b);
printf("Ahora el lado c:\n");
scanf("%lf",&c);

perimetro = a + b + c;
sp = perimetro / 2;
area = (sp * (sp - a) * (sp - b) * (sp - c));

printf("Genial! Aqui tienes tu resultado:\n Area: %0.2lf \n Perimetro: %0.2lf \n", area, perimetro);

}
