#include <stdio.h>
#include <stdlib.h>

//LLUVIAS
//el programa recibe datos tridimencionales para generar estadisticas de informacion sobre lluvias

const int PROMEDIO =24;
const int MES=12;
const int YEAR=10;

void lectura (float [PROMEDIO][MES][YEAR],int,int,int);
void funcion1(float [PROMEDIO][MES][YEAR],int,int,int);
void funcion2(float [PROMEDIO][MES][YEAR],int,int,int);
void funcion3(float [PROMEDIO][MES][YEAR],int,int,int);


int main()
{
    printf("Hello world!\n");

    float LLU[PROMEDIO][MES][YEAR];
    lectura (LLU,PROMEDIO,MES,YEAR);
    funcion1(LLU,PROMEDIO,MES,YEAR);
    funcion2(LLU,PROMEDIO,MES,YEAR);
    funcion3(LLU,18,MES,5);

    return 0;
}


void lectura (float A[][MES][YEAR], int F, int C, int P)
{
    int J,I,K;
    for (K=0; K<P; k++)
    {
        for(I=0;I<F;I++)
        {
            for(J=0;J<C;J++)
            {

            }
        }
    }

}
