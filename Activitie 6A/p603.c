#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int codigo;
	char titulo[50];
	char autor[50];
	char editorial[50];
	float precio;
	int cantidad;
} Libro;

void imprimir_inventario(Libro libros[]);
void vender_libro(Libro libros[]);  

int main(){
	system("clear");
	Libro libros[5] = {
		{301, "Cien años de soledad", "Gabriel García Márquez", "Editorial Sudamericana", 350.00, 20},
		{302, "1984", "George Orwell", "Secker & Warburg", 270.00, 18},
		{303, "El hombre en busca de sentido", "Viktor Frankl", "Herder Editorial", 220.00, 25},
		{304, "La sombra del viento", "Carlos Ruiz Zafón", "Editorial Planeta", 400.00, 15},
		{305, "Los juegos del hambre", "Suzanne Collins", "Scholastic Press", 320.00, 10}
	};

	int opcion;

	do{
		printf("\n                Menu\n");
		printf("Imprimir inventario de libros...(1)\n");
		printf("Vender libro....................(2)\n");
		printf("Salir...........................(3)\n");
		printf("\nIngresa una opcion:  ");
		scanf("%d",&opcion);

		if(opcion==1){
			imprimir_inventario(libros);
		}
		if(opcion==2){
			vender_libro(libros);
		}
		if(opcion==3){
			printf("Saliendo del programa...\n");
		}
		else{
			printf("Ingresa uno de los valores asignados...\n\n");
		}
	}while(opcion !=3);
}

void imprimir_inventario(Libro libros[]){
	printf("\nInventario:\n");
	for(int i=0;i<5;i++){
		printf("Codigo:  %d\n",libros[i].codigo);
		printf("Titulo: %s\n",libros[i].titulo);
		printf("Autor: %s\n",libros[i].autor);
		printf("Editorial: %s\n",libros[i].editorial);
		printf("Precio: $%.2f\n",libros[i].precio);
		printf("Cantidad disponible: %d\n",libros[i].cantidad);
		printf("-------------------------------\n");
	}
}

void vender_libro(Libro libros[]){
	int codigo,cantidad;

	printf("\nIngrese el codigo de el libro:  ");
	scanf("%d",&codigo);

	for(int k=0;k<5;k++){
		if(libros[k].codigo==codigo){

			printf("\nIngresa la cantidad a vender:  ");
			scanf("%d",&cantidad);

			if(cantidad>libros[k].cantidad){
				printf("No hay suficientes libros, solo quedan %d\n",libros[k].cantidad);
			}
			else{
				float total= cantidad*libros[k].precio*1.16;
				libros[k].cantidad-=cantidad;

				printf("\nInformacion del libro:\n");
        		printf("Titulo: %s\n",libros[k].titulo);
				printf("Autor: %s\n",libros[k].autor);
				printf("Editoriar: %s\n",libros[k].editorial);
				printf("Precio Unitario: %.2f\n",libros[k].precio);
				printf("Cantidad vendida: %d\n",cantidad);
				printf("Total a pagar(con IVA incluido): $%.2f\n",total);
			}
		}
	}
}
