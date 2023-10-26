#include <stdio.h>
#include <stdlib.h>

//Aqui usaremos cadenas de caracteres

int main()
{
    printf("Hello world!\n");

    char *cad0="Buenos Dias"; //se le envia la cadena de caracteres a la variable a la que apunta cad0
    char cad1[20]="Hola";       //cad1 actualmente acepta un maximo de 20 caracteres
    char cad2[]="Mexico";       //cad2 no tiene nada dentro de los corchetes, por lo que practicamente no tiene limites de caracteres
    char cad3[]={'b', 'i','e','n','b','e','n','i','d','o','\0'};
                                //en cad3, se le asigna directamente cada caracter a su espacio de memoria y se debe incluir manualmente
                                //el caracter de terminacion \0 a diferencia de los otros que lo hacen automaticamente.
    char cad4[20],cad5[20], cad6[20];

    printf("\nLa cadena cad0 es:\t");
    puts(cad0);     //puts es put string, es lo mas apropiado para imprimir cadena de caracteres

    printf("\nLa cadena cad1 es:\t");
    printf("%s", cad1);

    printf("\nLa cadena cad2 es:\t");
    puts(cad2);     //puts es put string, es lo mas apropiado para imprimir cadena de caracteres

    printf("\nLa cadena cad3 es:\t");
    printf("%s", cad3);



    printf("\nIngrese una linea de texto para cad4:\t");
    gets(cad4);         //gets es get string, se usa para obtener cadenas de caracteres del teclado

    printf("\nLa cadena cad4 es:\t");
    puts(cad4);

    printf("\nIngrese una linea de texto para cad5:\t");
    gets(cad5);         //gets es get string, se usa para obtener cadenas de caracteres del teclado

    printf("\nLa cadena cad5 es:\t");
    printf("%s", cad5);



    char p;
    int i;

    printf ("\nIngrese una linea de texto para cad6:\t");
    while ((p = getchar())!= '\n')
    cad6[i++] = p;
    cad6[i] = '\0';

    puts(cad6);



    return 0;
}
