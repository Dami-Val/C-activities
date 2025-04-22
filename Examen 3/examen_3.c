#include <stdio.h>

int dia, mes, año;


void main()
{
    printf("Ingrese el dia en el que nacio\n");
    scanf("%d",&dia);
    printf("Ingrese el mes en el que nacio\n");
    scanf(" %d",&mes);
    printf("Ingrese el año en el que nacio\n");
    scanf("%d",&año);
    
    if (mes < 1 || mes > 12){
        printf("Formato de mes invalido\n");
    }
    else if (mes == 1){
    char mes[15] = "enero";
    }
    else if (mes == 2){
    char mes[15] = "febrero";
    }
    else if (mes == 3){
    char mes[15] = "marzo";
    }
    else if(mes == 4){
    char mes[15] = "abril";
    }
    else if(mes == 5){
    char mes[15] = "mayo";
    }
    else if(mes == 6){
    char mes[15] = "junio";
    }
    else if(mes == 7){
    char mes[15] = "julio";
    }
    else if(mes == 8){
    char mes[15] = "agosto";
    }
    else if(mes == 9){
    char mes[15] = "septiembre";
    }
    else if(mes == 10){
    char mes[15] = "octubre";
    }
    else if(mes == 11){
    char mes[15] = "noviembre";
    }
    else if(mes == 12){
    char mes[15] = "diciembre";
    }


    if (año < 1900 && año > 2024)
    {
    año = 0;
    }


    if (dia < 1 && dia > 31)
    {
    dia = 0;
    }
    char mes[40];
    printf("Tu fecha de nacimiento es %d de %s de %d\n", dia, mes, año);




}

