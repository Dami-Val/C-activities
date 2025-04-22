#include <stdio.h>

int main(){
    int i,k,numsig;
    i=0;
    k=1;
    do{
        printf("%i",i);
        numsig=i+k;
        i=k;
        k=numsig;
        if(i<100){
            printf(",");
        }
    }while(i<=100);
}
