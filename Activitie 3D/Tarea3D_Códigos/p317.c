#include <stdio.h>

int main(){
    int i,n,cuad,j;
    printf("Ingrese el valor final de N:\n");
    scanf("%d",&n);
    printf("Número\tResultado del cuadrado obtenido así\n");
    for(i=1;i<=n;i++){
        printf("%d\t",i);
        for(j=1;j<=(i*2-1);j+=2){
            printf("%d",j);
            if (j<(i*2-1)){
                printf("+");
            }else{
            }
        }
    cuad=i*i;
    printf("     = %d\n",cuad);
    }
}
