#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//ctype es una libreria para el manejo de caracteres

int main()
{
    printf("Hello world!\n");

    fflush(stdin);
    char p1='a';
    printf("\nIngrese un caracter para analizar si es un digito o no:\t");
    p1=getchar();

    if (isdigit(p1))    //la funcion isdigit toma la variable para ver si es un numero o no. Si lo es, envia 1, si no, un 0.
    {
        printf("\n Es un digito.");
    }
    else
    {
          printf("\n No es un digito.");
    }

    fflush(stdin);
    printf("\nIngrese un caracter para analizar si es una letra o no:\t");
    p1=getchar();

    if (isalpha(p1))    //La funcion isalpha manda un 1 si es una letra y un 0 si no
    {
        if(isupper(p1)) //isupper verifica si es mayuscula (1) o no (0)
        {
            printf("\n Es una letra mayuscula.");
        }
        else if (islower(p1))
        {
            printf("\n Es una letra minuscula.");
        }
    }
    else
    {
        printf("\n No es una letra.");
    }

    //tolower cambia de mayuscula a minuscula y toupper cambia de minuscula a mayuscula

        fflush(stdin);
    printf("\nIngrese una letra mayuscula para pasarla a minuscula o viceversa:\t");
    p1=getchar();

    if (isalpha(p1))
    {
        if (isupper(p1))
        {
            printf("\n Convertida de mayuscula a minuscula: %c", tolower(p1));
        }
        else if (islower(p1))
        {
            printf("\n Convertida de minuscula a mayuscula: %c", toupper(p1));
        }
    }
    else
    {
      printf("\n No es una letra.");
    }

    return 0;
}
