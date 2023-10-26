#include <stdio.h>
#include <stdlib.h>

//Funciones para el manejo de las funciones de la libreria stdio.h

int main()
{
    printf("Hello world!\n");

    char p1, p2, p3 = '#';


        // Se usa getchar y putchar para obtener y recibir caracteres respectivamente


    printf("\nIngrese un caracter:\t");
    p1=getchar();
    putchar(p1);
    printf("\n");
    fflush(stdin);  //el fflush se utiliza para limpiar los registros para evitar retroalimentacion y se pone stdin para referirse al teclado

    //aqui ponemos directamente el caracter con el que inicializamos p3 al declararlo
    printf("El caracter p3 es:\t");
    putchar(p3);
    printf("\n");
    fflush(stdin);

    printf("\nIngrese otro caracter:\t");
    scanf("%c", &p2);
    printf("%c", p2);


    return 0;
}
