#include <stdio.h>
#include <stdbool.h>

int main(){
    float v,t,dist;
    char r[3];
    bool continuar;

    printf("Ingrese la velocidad:\n");
    scanf("%f",&v);
    printf("Ingrese el tiempo:\n");
    scanf("%f",&t);
    dist=v*t;
    printf("Distancia:i %0.2f\n",dist);
    printf("¿Desea continuar? si/no:\n");
    scanf("%s",r);
    if(r[0]=='s' && r[1]=='i'){
        continuar=true;
        while(continuar){
            printf("\n");
            printf("Ingrese la velocidad:\n");
            scanf("%f",&v);
            printf("Ingrese el tiempo:\n");
            scanf("%f",&t);
            dist=v*t;
            printf("Distancia: %0.2f\n",dist);
            printf("¿Desea continuar? si/no:\n");
            scanf("%s",r);
            if(r[0]=='n' && r[1]=='o'){
                printf("Fin del programa.\n");
                continuar=false;
            } 
        }
    }else{
        printf("Fin del programa.\n");
    }

    return 0;

}
