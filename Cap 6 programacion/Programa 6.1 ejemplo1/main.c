#include <stdio.h>
#include <stdlib.h>

const int TAMA�O = 10;

void lectura(int [][TAMA�O],int);
void escritura(int [][TAMA�O],int);     //PROTOTIPO DE FUNCIONES
                                        //SE DECLARAN ARRIBA PARA QUE FUNCIONEN, ESO ES PROTOTIPO

int main()
{

    //DIAGONAL PRINCIPAL
    //el programa recibe una matriz de tipo entero y en base a eso escribe el diagonal principal

    printf("Hello world!\n");

    int MAT[TAMA�O][TAMA�O];
    lectura[MAT][TAMA�O];
    escritura[MAT][TAMA�O];

    return 0;
}


void lectura(int A[][TAMA�O], int F)
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

void escritura (int A[][TAMA�O], int F)
{
    int I,J;

    for (I=0;I<J;I++)
    {
        for (J=0;J<TAMA�O;J++)
        {
            if (I==J)
            {
                printf("Diagonal principal %d * %d:/t %d", I,J,A[I][J]);
            }


        }
    }
}
