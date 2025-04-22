#include <stdio.h>

int elevarxay(int base, int exponente); 

int main(void) {

    int x, y, op;

        printf("Hola usuario, ingresa un numero a elevar:\n");
        scanf("%d", &x);
        printf("Ingresa la potencia:\n");
        scanf("%d", &y);
        op = elevarxay(x, y);
        printf("%d elevado a la %d es: %d\n", x, y, op);
        return (0);

}

int elevarxay(int base, int exponente){

    int result = 1;

        for(int i=1; i<=exponente; i++) {
            result = result * base;
            }
            return result;
}

