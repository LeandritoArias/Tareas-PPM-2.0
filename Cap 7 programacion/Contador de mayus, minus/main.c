#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int NUM_MAYUSCULA=0;
    int NUM_MINUSCULA=0;
    int NO_CARACTER;

    char entrada[50];

    printf("\n Ingrese la cadena de caracteres para identificar la cantidad de mayusculas/minusuclas:\t");
    fflush(stdin);
    gets(entrada);

    while (entrada[NO_CARACTER]!= '\0')
    {
        if (entrada[NO_CARACTER]>=65 && entrada[NO_CARACTER]<=90)
        {
            NUM_MAYUSCULA=NUM_MAYUSCULA+1;
        }
        else if (entrada[NO_CARACTER]>=97 && entrada[NO_CARACTER]<=122)
        {
            NUM_MINUSCULA=NUM_MINUSCULA+1;
        }
     /*   else
        {
            NUM_MAYUSCULA=NUM_MAYUSCULA;
            NUM_MINUSCULA=NUM_MINUSCULA;
        }*/
        NO_CARACTER++;
    }

    printf("\nLa cantidad de letras mayusculas:\t%d", NUM_MAYUSCULA);
    printf("\nLa cantidad de letras minusculas:\t%d", NUM_MINUSCULA);


    return 0;
}
