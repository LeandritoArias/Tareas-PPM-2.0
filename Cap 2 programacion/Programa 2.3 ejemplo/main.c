#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa 2.3\n");

    //Promedio de un curso
    //El mismo que el 1.1 solo que aqui tambien dira si esta reprobrado

        float PRO;

    printf("ingrese el promedio del alumno: \t");
    scanf("%f", &PRO);

    if (PRO >= 6)
    {
        printf("\nAprobado (promedio:%f)", PRO);
    }

    else
    {
        printf("\nReprobado (promedio:%f)", PRO);
    }

    return 0;
}
