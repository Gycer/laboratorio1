#include <stdio.h>


int main(void)
{
char nombre_usuario[1024];
printf("Ingrese su nombre\n");
scanf("%s", &nombre_usuario);
printf("¡hola, %s!\n", nombre_usuario);
return 0;
}