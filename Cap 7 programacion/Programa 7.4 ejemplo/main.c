#include <stdio.h>
#include <stdlib.h>

//Declaracion de cadenas de caracteres y asignacion de valores

int main()
{
    printf("Hello world!\n");

    char *cad0;
    cad0= "Argentina";
    puts(cad0);

    cad0="Brazil";
    puts(cad0);

    char *cad1= "";
    gets(*cad1); gets(cad1);

    char cad2[20] = "México";
    puts(cad2);
    gets(cad2);
    puts(cad2);


    return 0;
}
