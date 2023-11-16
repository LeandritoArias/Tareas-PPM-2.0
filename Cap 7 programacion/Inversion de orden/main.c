#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char texto[50];
    printf("\nEscribe el texto para cambiar mayus/minus.:\t");
    gets(texto);


    for(int c=0;texto[c]!='\0';c++)
    {

    }

    printf("Palabras inversas:\t%s", texto);

    return 0;
}
