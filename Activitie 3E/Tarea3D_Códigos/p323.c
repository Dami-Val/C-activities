#include <stdio.h>
#include <stdbool.h>

int main(){
    int i,cant;
    float a,b,c,per;
    bool continuar=true;

    while(continuar){
        i=0;
        printf("Ingresa la cantidad de perímetros a calcular\n");
        scanf("%i",&cant);

        do{
            i++;
            printf("Ingresa el lado a:\n");
            scanf("%f",&a);
            printf("Ingresa el lado b:\n");
            scanf("%f",&b);
            printf("Ingresa el lado c:\n");
            scanf("%f",&c);
            per=a+b+c;
            printf("Perímetro = %0.2f\n",per);
            printf("\n");
        }while(i<cant);

        char resp[4];
        printf("¿Desea continuar? si/no\n");
        scanf("%s",resp);

        if(resp[0]=='s' && resp[1]=='i'){
            continuar=true;
        }else{
            printf("Fin del programa.\n");
            continuar=false;
        }
    }
    return(0);
}
