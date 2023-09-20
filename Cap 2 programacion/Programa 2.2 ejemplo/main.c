#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa 2.2\n\n");

    //Incremento de precio
    // En este programa se va a recibir el precio de un producto. Si el producto cuesta menos de
    //1500 pesos, se le va a aumentar el 11% de salida.


    float   precio1, precio2;

    printf("Ingrese el precio del producto: \t");
    scanf("%f", &precio1);

    if (precio1 <1500)
    {
        precio2= precio1*1.11;
        printf ("\nPrecio total: %f (impuesto aplicado)\n\n", precio2);
    }

}
