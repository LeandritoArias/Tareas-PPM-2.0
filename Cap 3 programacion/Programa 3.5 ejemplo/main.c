#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejemplo 3.5\n");

    //Suma pagos
    //El programa obtiene la suma de los pagos realizados el ultimo mes

    float pago=0, spa=0;

    printf("Ingrese el primer pago:\t");
    scanf("%f", &pago);

    //El do-while necesita tener de antemano un valor de "pago" para que el bucle siga funcionando

    do
    {
        spa=spa+pago;
        printf("Ingrese 0 para terminar.\n");
        printf("Ingrese el siguiente pago: \t");
        scanf("%f", &pago);
    }
    while (pago);

        printf("el total de pagos del mes es: %.2f", spa);


    return 0;
}
