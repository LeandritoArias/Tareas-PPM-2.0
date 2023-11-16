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
        if(texto[c]>=65||texto[c]<=90)
        {
           texto[c]= texto[c]+32;
        }
        else if (texto[c]>=97||texto[c]<=122)
        {
           texto[c]= texto[c]-32;
        }
    }

    printf("Palabras inversas:\t%s", texto);

    return 0;
}
