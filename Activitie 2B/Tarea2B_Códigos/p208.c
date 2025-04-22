#include <stdio.h>

void main()
{
int a, b, c;

    printf("Hola usuario, ingresa un número:\n");
    scanf("%d",&a);
    printf("Ahora otro:\n");
    scanf("%d",&b);
    printf("Ahora el último.\n");
    scanf("%d",&c);

    if (a < b && a < c){
        printf("Este es tu numero menor: %d\n",a);
    }
    else if (b < a && b < c){
        printf("Este es tu numero menor: %d\n",b);
    }
    else {
        printf("Este es tu numero menor: %d\n",c);
    }

}
