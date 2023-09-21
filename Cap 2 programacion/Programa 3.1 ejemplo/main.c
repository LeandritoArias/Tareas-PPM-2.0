#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ejemplo 3.1\n");

    //Nomina
    //Este programa recibira las nominas de un total de 15 profesores para al final sumarlas y recibir la
    //nomina total de la universidad.

    int i;
    float salario, nomina;

    for (i=1; i<=20; i++)
    {
        printf("Ingrese el salario del profesor no. %d:\t", i);
        scanf("%f", &salario);
        nomina=nomina+salario;
    }
    printf("\n--------------------------------------\n");
    printf("La nomina total de la universidad es %f", nomina);
    printf("\n--------------------------------------\n");
    return 0;
}
