#include <stdio.h>
#include <stdlib.h>

void inverso (char *);

int main()
{
    printf("Hello world!\n");

    char fra[50];

    printf("\nIngrese la l�nea de texto: ");
    gets(fra);

    printf("\nEscribe la l�nea de texto en forma inversa: ");
    inverso(fra);

    return 0;
}

void inverso(char *cadena)
{
    if (cadena[0]!= '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
