#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
        char nombre[50];
        int edad;
        char sexo;
}Persona;

void capturar_datos(Persona personas[]);
void imprimir_datos(Persona personas[]);
void estadisticas(Persona personas[]);


int main (){
	system("clear");
        Persona personas[10];

        capturar_datos(personas);
        imprimir_datos(personas);
        estadisticas(personas);

        return 0;
}

void capturar_datos(Persona personas[]){
        for(int i=0;i<10;i++){
                printf("\nPersona %d\n",i+1);
                printf("Ingresa nombre:  ");
		getchar();
                fgets(personas[i].nombre,50,stdin);
		personas[i].nombre[strcspn(personas[i].nombre, "\n")] = '\0';

                printf("Ingresa la edad:  ");
                scanf("%d",&personas[i].edad);

                printf("Ingresa el sexo(M/F):  ");
		getchar();
                personas[i].sexo=getchar();
		personas[i].sexo = toupper(personas[i].sexo);
        }
}


void imprimir_datos(Persona personas[]){
        printf("\n\n          ---TABLA DE DATOS---\n\n");
        printf("NOMBRE                          | EDAD | SEXO\n");
        printf("--------------------------------|------|------\n");

        for(int k=0;k<10;k++){
                printf("%-32s|%5d|     %c\n", personas[k].nombre,personas[k].edad,personas[k].sexo);
        }                                                                                                                                                                                                                                                                                                                   
}

void estadisticas(Persona personas[]){
	int menores=0,mayores=0,masculinos=0,femeninos=0;

	for(int i=0;i<10;i++){
		if(personas[i].edad<18){
			menores++;
		}
		else{
			mayores++;
		}

		if(personas[i].sexo == 'M' || personas[i].sexo== 'm'){
			masculinos++;
		}
		else if(personas[i].sexo == 'F' || personas[i].sexo == 'f'){
			femeninos++;
		}
	}

	float r_menores = (menores*100)/10;
	float r_mayores = (mayores*100)/10;
	float r_masculinos = (masculinos*100)/10;
	float r_femeninos = (femeninos*100)/10;

	printf("\nEstadisticas:\n");
	printf("Menores de edad: %%%.2f\n",r_menores);
	printf("Mayores de edad: %%%.2f\n",r_mayores);
	printf("Sexo masculino: %%%.2f\n",r_masculinos);
	printf("Sexo femenino: %%%.2f\n",r_femeninos);
}
