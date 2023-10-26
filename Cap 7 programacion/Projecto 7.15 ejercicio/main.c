#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// El programa decodifica una cadena de caracteres compuestos por numeros y letras
    char cad[50];

int main()
{
    printf("Hello world!\n");


    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);
    interpretar(cad);

    return 0;
}

void interpretar (char *cadena)
{
    int i = 0, j, k;
    while (cad[i] != '\0')
    {
        if (isalpha (cad[i]))
        {
            k = cad[i - 1] - 48;
            for (j = 0; j < k; j++)
            {
                putchar(cad[i]);
            }
        }
        i++;
    }
}
