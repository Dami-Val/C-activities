#include <stdio.h>

int hombres, mujeres;
char sexo;

void main()
{
    
    for (int i = 0; i < 3; i++)
        {
            printf("Hola usuario, ingresa el sexo (h si es hombre, m si es mujer):\n");
                scanf(" %c", &sexo);

            if (sexo == 'h' || sexo == 'H' )
                {
                    hombres++;
                }
            else if (sexo == 'm' || sexo == 'M' )
                {
                    mujeres++;
                }
        }

    printf("Total de hombres = %d\n", hombres);
    printf("Total de mujeres = %d\n", mujeres);

}
       
