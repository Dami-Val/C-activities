#include <stdio.h>

int invertirNumero(int num);

int main()
{
    int numero, resultado;
    printf("Ingresa un número para invertir sus dígitos: ");
    scanf("%d", &numero);
    resultado = invertirNumero(numero);
    printf("El número invertido es: %d\n", resultado);
    return 0;
}

int invertirNumero(int num)
{
    int invertido = 0;
    while (num != 0)
    {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}
