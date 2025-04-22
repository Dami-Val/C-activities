#include <stdio.h>

int main(){
    int i,n,r;
    printf("Ingrese el número factorial:\n");
    scanf("%d",&n);
    printf("%d!= ",n);
    r=1;
    for(i=n;i>=1;i--){
        printf("%d",i);
        if(i>1){
            printf(" * ");
        }else{
            printf(" = ");
        }
    r=r*i;
    }
    printf("%d\n",r);
}
