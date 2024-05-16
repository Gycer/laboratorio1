#include <stdio.h>
#include <string.h>
/*Saludar al usuario*/

int validacion_nombre(char *nombre_usuario);

int main(void)
{
    int ValidarNombre;
    char nombre_usuario[30];
    /*Se le pide al usuario ingresar el nombre y se guarda*/
    do
    {
        printf("Ingrese su nombre\n");
        scanf("%s", nombre_usuario);
        /*Se verifica que el nombre de usuario sea valido*/
        ValidarNombre = validacion_nombre(nombre_usuario);
    }while (ValidarNombre==1);
     /*Se saluda con emocion xD*/
    printf("¡Hola, %s!\n", nombre_usuario);
    return 0;
}



int validacion_nombre(char *nombre_usuario)
{

    for (int i = 0; i < strlen(nombre_usuario); i++)
    {
        if (!((nombre_usuario[i] >= 65 && nombre_usuario[i] <= 90) || (nombre_usuario[i] >= 97 && nombre_usuario[i] <= 122)))
        {
            printf("NOMBRE INVALIDO\n");
            printf("Solo ingresar letras\n");
            return 1;
        }
    }
    return 0;
}