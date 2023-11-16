#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//este programa es para aprender a declarar una estructura y a utilizar las variables que tiene dentro

struct alumno
{
    int matricula;
    char nombre [30];
    char carrera [30];
    float promedio;
    char direccion [60];

};      //siempre termina con punto y coma



int main()
{
    printf("Hello world!\n");

    struct alumno a1={120, "María", "Contabilidad", 8.9, "Querétaro"}, a2, a3;

    char nombre1[30], carrera1[30], direccion1[60];
    int matricula1;
    float promedio1;

    printf("\nIngrese la matrícula del alumno 2: ");
    scanf("%d", &a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2:");
    gets(a2.nombre);
    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);
    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la dirección del alumno 2: ");
    gets(a2.direccion);

    strcpy(a3.nombre, nombre1);
    printf("Ingrese la carrera del alumno 3: ");
    gets(carrera1);
    strcpy(a3.carrera, carrera1);
    printf("Ingrese el promedio del alumno 3: ");
    scanf("%f", &promedio1);
    a3.promedio = promedio1;
    fflush(stdin);
    printf("Ingrese la dirección del alumno 3: ");
    gets(direccion1);
    strcpy(a3.direccion, direccion1);

    printf("\nDatos del alumno 1\n");
    printf("%d\n", a1.matricula);
    puts(a1.nombre);
    puts(a1.carrera);
    printf("%.2f\n", a1.promedio);
    puts(a1.direccion);
    printf("\nDatos del alumno 2\n");
    printf("%d\n", a2.matricula);
    puts(a2.nombre);
    puts(a2.carrera);
    printf("%.2f\n", a2.promedio);
    puts(a2.direccion);

    printf("\nDatos del alumno 3\n");
    printf("%d \t %s \t %s \t %.2f \t %s", a3.matricula, a3.nombre, a3.carrera,
    a3.promedio, a3.direccion);



    return 0;
}
