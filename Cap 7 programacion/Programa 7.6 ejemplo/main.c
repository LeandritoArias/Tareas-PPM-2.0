#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello world!\n");

    char *cad0 = "Hola Primo";
    char cad1[20], cad2[20], cad3[20] = ", buenos dias!!!";

    strcpy(cad1, cad0);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, cad3);
    printf("\nPrueba de la funcion strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);

    strcpy(cad1, "XX");
    printf("\nPrueba de la funcion strcpy. Se copia la cadena XX a cad1: %s\n", cad1);

    strncpy(cad2, cad0, 4);
    cad2[4] = '\0';
    printf("\nPrueba de la funcion strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2);

    strncpy(cad2, cad3, 3);
    cad2[3] = '\n';
    printf("\nPrueba de la funcion strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2);

    strcat(cad0, cad3);
    printf("\nPrueba de la funcion strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2);

    cad0 = strstr(cad0, "Mexico");
    printf("\nPrueba de la funcion strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", cad0);

    cad0 = strstr(cad0, "Guatemala");
    printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);

    return 0;
}
