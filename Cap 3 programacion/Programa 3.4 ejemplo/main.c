#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Ejemplo 3.4\n");

    //Suma de cuadrados
    //El programa recibe un grupo de datos enteros, calcula el cuadrado y suma esos cuadrados.

    int numero;
    long cuadrado, suc=0;

    printf("\nIngrese el numero entero -0 para terminar\n");
    printf("\nIngrese el numeroe entero:\t");
    scanf("%d", &numero);

    while(numero)
    {
        cuadrado= numero*numero;
        printf("%d al cubo es %ld", numero, cuadrado);
        suc=suc+cuadrado;
        printf("\nIngrese el numero entero -0 para terminar\n");
        printf("\nIngrese el numeroe entero:\t");
        scanf("%d", &numero);

    }

    printf("\nLa suma de los cuadrados es %ld", suc);
    return 0;
}
