#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ejemplo 3.2\n");

    //Suma positivos
    //El programa recibira numeros N y sumara solo si N es positivo.

    int i, n, m=0, numero, suma=0;

    printf("Ingrese la cantidad de datos:\t");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        printf("Ingrese el dato no. %d:\t",i);
        scanf("%d", &numero);

        if (numero>=0)
        {
            suma=suma+numero;
            m++;
        }
    }

    printf("El resultado es: %d \t(numero de sumas:%d)", suma, m);


    return 0;
}
