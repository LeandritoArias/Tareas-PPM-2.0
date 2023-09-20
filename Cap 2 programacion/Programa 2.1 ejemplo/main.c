#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa 2.1\n\n");

    //Promedio del curso
    // El programa va a recibir como dato el promedio de un alumno en un curso universitario
    // y luego dira si el alumno esta aprobado si su promedio es mayor o igual a 6.


    float PRO;

    printf("ingrese el promedio del alumno: \t");
    scanf("%f", &PRO);

    if (PRO >= 6)
    {
        printf("Aprobado (promedio:%f)", PRO);
    }


    return 0;
}
