#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa 2.4\n");

    //Incremento de precio
    //Lo mismo que el 2.2 solo que aqui se aplicara tambien el monto sin el impuesto incluido.

    float   precio1, precio2;

    printf("Ingrese el precio del producto: \t");
    scanf("%f", &precio1);

    if (precio1 <1500)
    {
        precio2= precio1*1.11;
        printf ("\nPrecio total: %f (impuesto aplicado)\n\n", precio2);
    }
    else if (precio1 >= 1500)
    {
        printf ("\nPrecio total: %f (impuesto no aplicado)\n\n", precio1);
    }
    return 0;
}
