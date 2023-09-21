#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejemplo 3.3\n");

    //Suma de pagos
    //El programa recibira los pagos del ultimo mes y obtendra la suma de los mismos

    float pago, spa=0;
    int m=0;

    printf("Inserte el primer pago:\t");
    scanf("%f", &pago);

    while (pago) //aqui se aplica la condicion de que 0 es falso y cualquier otro caracter es verdadero
    {
        spa=spa+pago;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &pago);
        m++;
        //aqui para terminar solo se dice que el siguiente pago es 0 y se cierra el bucle
    }

    printf("\nEl total de pagos del mes es:%.2f \t(numero de pagos:%d)", spa,m);

    return 0;
}
