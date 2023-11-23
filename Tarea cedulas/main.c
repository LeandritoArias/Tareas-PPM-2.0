#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dirent.h>


/////Esta es la estructura para los datos de la cedula
struct cedula
{
    char nombre [30];
    char apellido [30];
    char sexo[10];
    char nacionalidad [15];
    char ID[13];
    char sangre[4];

};

//estructura definida para lo del calculo de la edad
//usando la fecha de nacimiento
typedef struct
{
    int dia;
    int mes;
    int ano;

} fecha;


//Funcion para calcular la edad
int calcular_edad(fecha datos)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    int a = ((tm.tm_year + 1900) * 100 + tm.tm_mon + 1) * 100 + tm.tm_mday;
    int b = (datos.ano * 100 + datos.mes) * 100 + datos.dia;

    return (a - b) / 10000;
}


//Funcion para registrar la cedula
int nueva_cedula ()
{
    int n=0;
    int cantidad1=0;
    //struct cedula p[cantidad1];

    //Aqui pido la cantidad de cedulas que quiero registrar en este momento
    printf("\n\nDigite la cantidad de cedulas que quiere crear:\t");
    scanf("%d", &cantidad1);
    fflush(stdin);//Evita retroalimentacion

    //Llamo la funcion para calular ahi mismo la edad y guardarla
    fecha datos;

    //Con el bucle puedo poner la cantidad de cedulas que pedi antes
    for (int n=0;n<cantidad1;n++)
    {
        printf("\n");
        printf("\n-------------------------");
        printf("\nREGISTRO DE CEDULA NO. %d", n + 1);
        printf("\n-------------------------");

        //Aqui se llama la estructura de la cedula para trabajar
        //con ella usando la variable p
        struct cedula p;

        printf("\n\nCual es su nombre?:\t");
        scanf("%s", p.nombre);
        printf("\nCual es tu apellido?:\t");
        scanf("%s", p.apellido);

        //Esto es para mostrar un mensaje de error si se
        //escribe una entrada diferente a f o m
        char fm = 0;
        printf("\nDiga su sexo (M->Masculino.....F->Femenino):\t");
        scanf(" %c", &fm);

        int scorrect=1;

        while (scorrect==1)
        {
            if (fm == 'M' || fm == 'm')
            {
                strcpy(p.sexo, "Masculino");
                scorrect=0;
            }
            else if (fm == 'F' || fm == 'f')
            {
                strcpy(p.sexo, "Femenino");
                scorrect=0;
            }
            else
            {
                printf("Entrada incorrecta. Intentalo nuevamente.");
                printf("\nDiga su sexo (M->Masculino.....F->Femenino):\t");
                scanf(" %c", &fm);
            }
        }

        printf("\nIngrese Fecha de Nacimiento dd/mm/aaaa: ");
        scanf("%d/%d/%d", &datos.dia, &datos.mes, &datos.ano);

        printf("\nCual es su tipo de sangre? (seleccione el numero correspondiente a su tipo):");
        printf("\n1.A+");
        printf("\n2.O+");
        printf("\n3.B+");
        printf("\n4.AB+");
        printf("\n5.A-");
        printf("\n6.0-");
        printf("\n7.B-");
        printf("\n8.AB-");
        printf("\n\n==>\t");

        char tipo_sangre;
        int scorrect2=1;
        scanf("%s", &tipo_sangre);

        while(scorrect2==1)
        {
                if (tipo_sangre=='1')
                {
                    strcpy(p.sangre,"A+");
                    scorrect2=0;
                }
                else if (tipo_sangre=='2')
                {
                    strcpy(p.sangre,"O+");
                    scorrect2=0;
                }
                else if (tipo_sangre=='3')
                {
                    strcpy(p.sangre,"B+");
                    scorrect2=0;
                }
                else if (tipo_sangre=='4')
                {
                    strcpy(p.sangre,"AB+");
                    scorrect2=0;
                }
                else if (tipo_sangre=='5')
                {
                    strcpy(p.sangre,"A-");
                    scorrect2=0;
                }
                else if (tipo_sangre=='6')
                {
                    strcpy(p.sangre,"O-");
                    scorrect2=0;
                }
                else if (tipo_sangre=='7')
                {
                    strcpy(p.sangre,"B-");
                    scorrect2=0;
                }
                else if (tipo_sangre=='8')
                {
                    strcpy(p.sangre,"AB-");
                    scorrect2=0;
                }
                else
                {
                    printf("\nEntrada incorrecta. Intentalo nuevamente.\n");
                    printf("\nCual es su tipo de sangre? (seleccione el numero correspondiente a su tipo:");
                    printf("\n1.A+");
                    printf("\n1.O+");
                    printf("\n1.B+");
                    printf("\n1.AB+");
                    printf("\n1.A-");
                    printf("\n1.0-");
                    printf("\n1.B-");
                    printf("\n1.AB-");

                    scanf("%c", &tipo_sangre);
                }

        }



        printf("\nCual es su nacionalidad?\t");
        scanf("%s", p.nacionalidad);
        printf("\nIngrese su numero de cedula:\t");
        scanf("%s", p.ID);

        //Aqui se abre el archivo en modo escritura para guardar los datos de la cedula creada
        char archivo_nombre[50];
        sprintf(archivo_nombre, "%s.txt", p.ID);

        FILE *archivo = fopen(archivo_nombre, "w");

        fprintf(archivo, "\n------------------------------------------------------------------");
        fprintf(archivo, "\nCEDULA DE IDENTIFICACION DE:\t%s %s", (p).nombre,(p).apellido);
        fprintf(archivo, "\n------------------------------------------------------------------\n");

        fprintf(archivo, "Nombre: %s\n", p.nombre);
        fprintf(archivo, "Apellido: %s\n", p.apellido);
        fprintf(archivo, "Sexo: %s\n", p.sexo);
        fprintf(archivo, "Nacionalidad: %s\n", p.nacionalidad);
        fprintf(archivo, "Numero de Cedula: %s\n", p.ID);
        fprintf(archivo, "Fecha de nacimiento: %d/%d/%d\n", datos.dia, datos.mes, datos.ano);
        fprintf(archivo, "Edad: %d\n", calcular_edad(datos));
        fprintf(archivo, "Tipo de sangre: %s", p.sangre);

        fclose(archivo);

        //Se cierra el archivo y se vuelve a abrir en modo lectura para ver
        //el contenido del archivo
        archivo = fopen(archivo_nombre, "r");

            char linea[100];

            //Aqui se lee linea por linea para imprimir el contenido.
            //Se deja de imprimir cuando se encuentre \0.
            while (fgets(linea, sizeof(linea), archivo) != NULL)
            {
                printf("%s", linea);
            }


            printf("\n\n");
            printf("\nPresiona 'ENTER' para continuar.");
            fflush(stdin);
            getchar();
            printf("\n\n");


            fclose(archivo);
        }

        return main();
}

void abrir_cedula()
{
    printf("\n\n");
    printf("\nEscriba su numero de cedula para identificar sus datos(escriba 'txt' al final):\t");

    //Esto es para poder escribir el nombre del archivo correspondiente a la cedula que queremos
    char Nombre_cedula[40];
    scanf("%s",&Nombre_cedula);

    struct cedula p;

    FILE * archivo = fopen(Nombre_cedula, "r");

            //Con esto, si escribimos el nombre de un archivo que no existe, despues de mostrar un mensaje de error
            //va a reiniciar la funcion
            if (archivo==NULL)
            {
                printf("\n%s no existe en el registro. Intente nuevamente.\n", Nombre_cedula);
                return abrir_cedula();
            }

            char linea[100];

            //Aqui se lee linea por linea para imprimir el contenido.
            //Se deja de imprimir cuando se encuentre \0.
            while (fgets(linea, sizeof(linea), archivo) != NULL)
            {
                printf("%s", linea);
            }

            printf("\n\n");
            printf("\nPresiona 'ENTER' para continuar.");
            printf("\n\n");
            fflush(stdin);
            getchar();
            fclose(archivo);

            return main();

}

int abrir_todos()
{
    printf("\n\n");
    printf("\n========================================================");
    printf("\nLISTA DE TODAS LAS CEDULAS REGISTRADAS EN EL PROYECTO");
    printf("\n========================================================\n");

    //Aqui claramente hice trampa usando una nueva libreria
    //especificamente las de directorio o carpetas

    DIR *carpeta;
    struct dirent *ent;

    //se pone el punto en opendir para referirse a la carpeta actual
    if ((carpeta = opendir(".")) != NULL) {
        // Lee todas las entradas del directorio
        while ((ent = readdir(carpeta)) != NULL) {
            // Verifica si el archivo tiene la extensión .txt
            if (strstr(ent->d_name, ".txt") != NULL) {
                // abre todo lo que tenga .txt al final
                FILE *archivo = fopen(ent->d_name, "r");

                if (archivo != NULL) {
                    char linea[100];
                    // Imprime el contenido del archivo .txt que tiene abierto actualmente
                    while (fgets(linea, sizeof(linea), archivo) != NULL) {
                        printf("%s", linea);
                    }
                    printf("\n\n");
                    fclose(archivo);
                }
            }
        }
        closedir(carpeta);
    } else {
        // Imprime un mensaje de error si no se puede abrir el directorio
        //perror es una funcion relacionada con otra de la biblioteca estandar de c que imprime un codigo de error.
        perror("No se puede abrir el directorio actual");
    }

            printf("\n\n");
            printf("\nPresiona 'ENTER' para continuar.");
            fflush(stdin);
            getchar();
            printf("\n\n");
            return main();
}

int main(void)
{
    printf("\n------------------------------------------------");
    printf("\nSOFTWARE PARA REGISTRAR CEDULA DE IDENTIFICACION");
    printf("\n------------------------------------------------");

    //Se usa While para convertir el menu en un bucle, asi solo se cierra
    //el programa si se termina el bucle desde dentro.
    int fin_programa=1;

    while(fin_programa==1)
    {
        printf("\n\n\n Que desea hacer?");
        printf("\n------------------");
        printf("\n1.Registrar una cedula nueva\n2.Ver cedula ya registrada\n3.Ver todas las cedulas registradas\n4.Rodar durisimo");
        printf("\n\nOpcion:\t");

        int opcion_menu=0;
        fflush(stdin);
        scanf("%d", &opcion_menu);
        fflush(stdin);

        //Switch case para las opciones, las 3 primeras llaman las otras funciones,
        // la 4ta termina el programa y cualquier otra da un mensaje de error y repite el programa.
            switch (opcion_menu)
            {
                case 1:
                    nueva_cedula();
                    break;
                case 2:
                    abrir_cedula();
                    break;
                case 3:
                    abrir_todos();
                case 4:
                    printf("\nbai bai");
                    fin_programa=0;
                    break;
                default:
                    printf("\n\nEntrada incorrecta. intenta nuevamente.");
                    break;
            }
    }
}
