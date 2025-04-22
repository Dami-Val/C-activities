#include <stdio.h>
#include <string.h>

typedef struct {
	int numeroCuenta;
	char nombre[50];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	int edad;
	char lugarNacimiento[100];
	char fechaNacimiento[60];
	char direccion[100];
	char telefono[50];
} Alumno;

void pedir_datos(Alumno alumnos[],int N);
void imprimir_datos(Alumno alumnos[],int N);

int main(){
	Alumno alumnos[40];
	int N;

	printf("Ingresa la cantidad de alumnos(Máx. 40):  ");
	scanf("%d",&N);

	if(N<=0 || N>40){
		printf("Error...ingrese un valor de 1 al 40\n");
	}
	else{
		pedir_datos(alumnos,N);
		imprimir_datos(alumnos,N);
	}

	return 0;
}

void pedir_datos(Alumno alumnos[],int N){
	for(int i=0;i<N;i++){
		printf("\nAlumno %d\n",i+1);

		printf("Número de cuenta:  ");
		scanf("%d",&alumnos[i].numeroCuenta);
		getchar();

		printf("Nombre:  ");
		fgets(alumnos[i].nombre,50,stdin);

		printf("Apellido paterno:  ");
		fgets(alumnos[i].apellidoPaterno,50,stdin);

		printf("Apellido materno:  ");
		fgets(alumnos[i].apellidoMaterno,50,stdin);

		printf("Edad:  ");
		scanf("%d",&alumnos[i].edad);
		getchar();

		printf("Lugar de nacimiento:  ");
		fgets(alumnos[i].lugarNacimiento,100,stdin);

		printf("Fecha de Nacimiento:  ");
		fgets(alumnos[i].fechaNacimiento,60,stdin);

		printf("Dirección:  ");
		fgets(alumnos[i].direccion,100,stdin);

		printf("Telefono:  ");
		fgets(alumnos[i].telefono,50,stdin);
	}
}

void imprimir_datos(Alumno alumnos[],int N){
	printf("\n\nDatos de los alumnos:\n");
	for(int j=0;j<N;j++){
		printf("\nAlumno %d\n",j+1);
		printf("Número de cuenta: %d\n",alumnos[j].numeroCuenta);
		printf("Nombre: %s\n",alumnos[j].nombre);
		printf("Apellido paterno: %s\n",alumnos[j].apellidoPaterno);
		printf("Apellido materno: %s\n",alumnos[j].apellidoMaterno);
		printf("Edad: %d\n",alumnos[j].edad);
		printf("Lugar de nacimiento: %s\n",alumnos[j].lugarNacimiento);
		printf("Fecha de nacimiento: %s\n",alumnos[j].fechaNacimiento);
		printf("Direccion: %s\n",alumnos[j].direccion);
		printf("Telefono: %s\n",alumnos[j].telefono);
		printf("----------------------------------------\n");
	}
}
