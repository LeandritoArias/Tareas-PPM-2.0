#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int i;
    char cad0[20] = "Hola Mexico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola Mexico";
    char *c, c3;

    i = strcmp(cad0, cad1);
    printf("\nResultado de la comparacion -cad0 y cad1-:\t%d", i);

    i = strcmp(cad0, cad2);
    printf("\nResultado de la comparacion -cad0 y cad2-:\t%d", i);

    i = strcmp(cad0, cad3);
    printf("\nResultado de la comparacion -cad0 y cad3-:\t%d", i);

    i = strlen(cad0);
    printf("\nLongitud cadena cad0:\t%d", i);

    i = strlen(cad1);
    printf("\nLongitud cadena cad1:\t%d", i);

    c = strchr(cad1, 'G');

    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es:\t%c", c3);
    }
    c = strchr(cad2, 'V');

    if (c != NULL)
    {
        c3 = *c;
        printf("\nEl valor de c3 es:\t%c", c3);
    }


    return 0;
}
