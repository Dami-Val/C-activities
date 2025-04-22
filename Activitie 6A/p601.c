#include <stdio.h>
#include <string.h>

typedef struct {
	char nombre[40];
	char apellidoPaterno[50];
	char apellidoMaterno[50];
	char email[50];
	int edad;
	char instagram[50];
	char facebook[50];
	char twitter[50];
	char tiktok[40];
} Contacto;

int datos(Contacto contactos[]);

int main(){
	Contacto contactos[5];

	datos(contactos);

	for(int i=0;i<5;i++) {
		printf("Contacto %d\n",i+1);
		printf("Nombre:  %s\n",contactos[i].nombre);
		printf("Apellido paterno:  %s\n",contactos[i].apellidoPaterno);
		printf("Apellido materno:  %s\n",contactos[i].apellidoMaterno);
		printf("E-mail:  %s\n",contactos[i].email);
		printf("Edad:  %d\n",contactos[i].edad);
		printf("Instagram:  %s\n",contactos[i].instagram);
		printf("Facebook:  %s\n",contactos[i].facebook);
		printf("Twitter:  %s\n",contactos[i].twitter);
		printf("Tiktok:  %s\n",contactos[i].tiktok);
		printf("------------------------------------\n");
	}
	return 0;
}

int datos(Contacto contactos[]) {
	strcpy(contactos[0].nombre, "Damian");
	strcpy(contactos[0].apellidoPaterno, "Valencia");
	strcpy(contactos[0].apellidoMaterno, "Dominguez");
	strcpy(contactos[0].email, "dam.val.99@gmail.com");
	contactos[0].edad=25;
	strcpy(contactos[0].instagram, "lord_fantasy_");
	strcpy(contactos[0].facebook, "Damian Valencia");
	strcpy(contactos[0].twitter, "damianvalencia____");
	strcpy(contactos[0].tiktok, "lord_fantasy_");

	strcpy(contactos[1].nombre, "Luis Fernando");
	strcpy(contactos[1].apellidoPaterno, "Martínez");
	strcpy(contactos[1].apellidoMaterno, "Ramírez");
	strcpy(contactos[1].email, "Luis_Martinez@gmail.com");
	contactos[1].edad = 22;
	strcpy(contactos[1].instagram, "LuisFer22");
	strcpy(contactos[1].facebook, "Luis Fernando Martínez");
	strcpy(contactos[1].twitter, "LuisF_tw");
	strcpy(contactos[1].tiktok, "LuisTiktok");

	strcpy(contactos[2].nombre, "Andrea Paola");
	strcpy(contactos[2].apellidoPaterno, "González");
	strcpy(contactos[2].apellidoMaterno, "López");
	strcpy(contactos[2].email, "Andrea_Paola@gmail.com");
	contactos[2].edad = 21;
	strcpy(contactos[2].instagram, "AndreaPaola21");
	strcpy(contactos[2].facebook, "Andrea Paola González");
	strcpy(contactos[2].twitter, "Andrea_tw");
	strcpy(contactos[2].tiktok, "AndreaPL");

	strcpy(contactos[3].nombre, "Miguel Ángel");
	strcpy(contactos[3].apellidoPaterno, "Hernández");
	strcpy(contactos[3].apellidoMaterno, "Torres");
	strcpy(contactos[3].email, "Miguel_Hernandez@gmail.com");
	contactos[3].edad = 25;
	strcpy(contactos[3].instagram, "MiguelAngel25");
	strcpy(contactos[3].facebook, "Miguel Ángel Hernández");
	strcpy(contactos[3].twitter, "MiguelHT");
	strcpy(contactos[3].tiktok, "MiguelT");

	strcpy(contactos[4].nombre, "Karla Sofía");
	strcpy(contactos[4].apellidoPaterno, "Ramírez");
	strcpy(contactos[4].apellidoMaterno, "Castillo");
	strcpy(contactos[4].email, "Karla_Ramirez@gmail.com");
	contactos[4].edad = 24;
	strcpy(contactos[4].instagram, "KarlaSofia24");
	strcpy(contactos[4].facebook, "Karla Sofía Ramírez");
	strcpy(contactos[4].twitter, "KarlaRC");
	strcpy(contactos[4].tiktok, "SofiaKarlaTik");
return 0;
}
