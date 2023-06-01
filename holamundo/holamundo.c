#include <stdio.h>
/*Saludar al usuario*/

int main(void)
{
/*Se le pide al usuario ingresar el nombre y se guarda*/
char nombre_usuario[30];
printf("Ingrese su nombre\n");
scanf("%s", &nombre_usuario);
/*Se saluda con emocion xD*/
printf("¡hola, %s!\n", nombre_usuario);
return 0;
}