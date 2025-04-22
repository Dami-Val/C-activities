#include <stdio.h>

void ingresar(int matriz[4][4]);
void imprimir(int matriz[4][4]);
void imprimirInvertido(int matriz[4][4]);
int menu(int option);

int main(){

	int option=0;
	menu(option);

	return 0;

}



int menu(int option){

	int matriz[4][4];

	do {

	printf("\n\n|---------MENÚ---------|\n\nBienvenido usuario!\nSelecciona una opción ingresando un número para comenzar.\n\n");
	printf("[1] Ingresar valores de Matriz.\n");
	printf("[2] Imprimir Matriz.\n");
	printf("[3] Imprimir Matriz invertida.\n");
	printf("[4] Salir.\n");
	scanf("%d",&option);

	if(option == 1){
		ingresar(matriz);
	}
	else if(option == 2){
		imprimir(matriz);
	}
	else if(option == 3){
		imprimirInvertido(matriz);
	}
	else if(option == 4){
	return 0;
	}
	else 
	{
	printf("Opción invalida, intente de nuevo");
	menu(option);
	}
	}
	while(option != 4);
return 0;
	



}
	

void ingresar(int matriz[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Ingresa los datos para la matriz en la posición [%d], [%d]:\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}

	}
}


void imprimir(int matriz[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");

	}

}

void imprimirInvertido(int matriz[4][4]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d ",matriz[j][i]);
		}
		printf("\n");

	}
}


