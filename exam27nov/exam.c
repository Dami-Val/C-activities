#include <stdio.h>
#include <string.h>

typedef struct {
	char nombre[40];
	int tamaño;
	char tinta[40];
	char lugar_del_cuerpo[40];
	int precio;
	char fecha[40];
	char hora[40];

} TatooShop;

void capturar(TatooShop citas[]);
//void imprimir(TatooShop citas[]);

int main() {

int option;

TatooShop citas[5];


	do{
	printf("\n\n|_______| TATOO SHOP |______|\n\nBienveido al sistema de control de datos de TatooShop!\nPorfavor elije una opción del menú ingresando un número.\n\n[1] Capturar Registros.\n[2] Listar Registros.\n[3] Salir.");
	scanf("%d",&option);
	
	if (option==1){
		capturar(citas);
	}
	else if(option==2){
	//	imprimir(citas);
	}
	else if(option==3){
	printf("Gracias por utilizarme, hasta pronto!");
	}
	else {
	printf("Número o caracter ingresado inválido. ¡Vuelve a intentar!");
	}


	}
	while (option =!3);

return 0;

}

void capturar(TatooShop citas[5]){
int i=0;
	for(i=0;i<5;i++){
		printf("Ingresa el nombre del cliente:\n\n");
			fgets(citas[i].nombre,40,stdin);
		printf("Ingresa el tamaño del tatoo del cliente (cm):\n");
			scanf("  %d",&citas[i].tamaño);
			getchar();
		printf("Ingresa el tipo de tinta del tatoo del cliente [color/negro]:\n");
			fgets(citas[i].tinta,40,stdin);}
		printf("Ingresa el lugar del cuerpo del tatoo del cliente:\n");
			fgets(citas[i].lugar_del_cuerpo,40,stdin);
		printf("Ingresa el precio del tatoo del cliente:\n");
			scanf("  %d",&citas[i].precio);
			getchar();
		printf("Ingresa la fecha de la cita del cliente:\n");
			fgets(citas[i].fecha,40,stdin);
		printf("Ingresa la hora del la cita del cliente: \n");
			fgets(citas[i].hora,40,stdin);
}

void imprimir(TatooShop citas[5]) {
int j=0;
	for(j=0;j<5;j++){
		printf("Nombre del cliente: %s \n",citas[j].nombre);
		printf("Tamaño del tatoo (cm): %d\n",citas[j].tamaño);
		printf("Tipo de tinta del tatoo [color/negro]: %s \n", citas[j].tinta);
		printf("Lugar del cuerpo del tatoo: %s \n", citas[j].lugar_del_cuerpo);
		printf("Precio del tatoo: %d \n",citas[j].precio);
		printf("Fecha de la cita: %s \n",citas[j].fecha);
		printf("Hora del la cita: %s \n",citas[j].hora);
	}
}




