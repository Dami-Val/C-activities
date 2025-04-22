#include <stdio.h>

int main(void){
    double a,b,c,d;
    a=0;
    b=1;
    c=0;
    d=0;

    while(d<=100){
        if(c==0){
            printf("%0.0lf",c);
        }else{
            printf("%0.0lf",a);
        }
        if(d<=99){
            printf(",");
        }
        c=a+b;
        b=a;
        a=c;
        d++;
    }
    printf("\n");
}
