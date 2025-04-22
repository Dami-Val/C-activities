#include <stdio.h>

int main(){
    int i,primo,k;
    for(i=2;i<=500;i++){
        primo=1;
        for(k=2;k<i;k++){
            if (i%k==0){
                primo=0; 
                break;
            }
        }
        if(primo==1){
            printf("%d",i);
            if(i!=499){
                printf(",");
            }
        }

    }
    printf("\n ");
    return(0);
}
