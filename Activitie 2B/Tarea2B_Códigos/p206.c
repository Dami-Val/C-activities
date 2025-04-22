#include <stdio.h>

int horas;
int minutos;

void main()
{
    printf("Hola usuario ingresa la hora en formato 24 hrs (1-23)\n");
    scanf("%d",&horas);
    printf("Ahora ingresa los minutos (1-59)\n");
    scanf("%d",&minutos);
    minutos++;

    if(minutos == 60){
    minutos = 0;
    horas++;

    if(horas == 24){
    horas = 0;
    }
    }
    printf("Si le sumamos un minuto, la nueva hora es: %02d:%02d\n",horas,minutos);

}
