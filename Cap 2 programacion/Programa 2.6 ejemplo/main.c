#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Programa 2.6\n");

    //incremento de salario
    //Dependiendo del nivel de un profesor, el salario se va a incrementar
    //respectivamente: lvl1: 3.5%, lvl2: 4.1%, lvl3: 4.8%, lvl4: 5.3%


    float salario;
    int nivel;

    printf("\nIngrese el nivel academico del profesor: \t");
    scanf("%d", &nivel);

    printf("\nIngrese el salario del profesor: \t");
    scanf("%f", &salario);

    switch (nivel)
    {
        case 1: {salario=salario*1.0035;
        break;}
        case 2: {salario=salario*1.0041;
        break;}
        case 3: {salario=salario*1.0048;
        break;}
        case 4: {salario=salario*1.0053;
        break;}
    }

    printf("\nEl salario actual del maestro sera: %8.2f (nivel del maestro: %d)", salario, nivel);

    return 0;
}
