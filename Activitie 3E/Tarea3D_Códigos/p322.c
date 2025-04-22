#include <stdio.h>

int main(){
    int i,cant,continuar;
    float a,b,c,per;
    printf("Ingresa la cantidad de triangulos:\n");
    scanf("%i",&cant);
    i=0;
    continuar=1;
    do{
        i++;
        printf("Trinagulo %i\n",i);
        printf("Ingrese el lado a:\n");
        scanf("%f",&a);
        printf("Ingrese el lado b:\n");
        scanf("%f",&b);
        printf("Ingrese el lado c:\n");
        scanf("%f",&c);
        if(a==0 || b==0 || c==0){
            printf("Fin del programa.\n");
            continuar=0;
        }else{
            per=a+b+c;
            printf("Perímetro = %0.2f\n",per);
            printf("\n");
        }
    
    }while(i<cant && continuar==1);
}
