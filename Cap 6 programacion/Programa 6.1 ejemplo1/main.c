#include <stdio.h>
#include <stdlib.h>

const int TAMAÑO = 10;

void lectura(int [][TAMAÑO],int);
void escritura(int [][TAMAÑO],int);     //PROTOTIPO DE FUNCIONES
                                        //SE DECLARAN ARRIBA PARA QUE FUNCIONEN, ESO ES PROTOTIPO

int main()
{

    //DIAGONAL PRINCIPAL
    //el programa recibe una matriz de tipo entero y en base a eso escribe el diagonal principal

    printf("Hello world!\n");

    int MAT[TAMAÑO][TAMAÑO];
    lectura[MAT][TAMAÑO];
    escritura[MAT][TAMAÑO];

    return 0;
}


void lectura(int A[][TAMAÑO], int F)
{
    //aqui solo se leera un parametro de dos dimensiones o bidimensional
    int I,J;
    for (I=0;I<J;I++)
    {
        for(J=0;J<F;J++)
        {
            printf("Ingrese el elemento fila d% columna %:\t", I+1,J+1);
            scanf("%d",&A[I][J]);
        }
    }
}

void escritura (int A[][TAMAÑO], int F)
{
    int I,J;

    for (I=0;I<J;I++)
    {
        for (J=0;J<TAMAÑO;J++)
        {
            if (I==J)
            {
                printf("Diagonal principal %d * %d:/t %d", I,J,A[I][J]);
            }


        }
    }
}
