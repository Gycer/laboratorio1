#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int cantidad_escalones;
   printf("Ingrese la cantidad de escalones que tendrá la piramide (Numero entero positivo entre 1 y 8), \n");
   scanf("%i", &cantidad_escalones);
   printf("%i\n", cantidad_escalones);
   while(cantidad_escalones<1 || cantidad_escalones>8){
      printf("\"El numero que ingreso no cumple con el formato indicado\"\n\n");
      printf("Ingrese la cantidad de escalones que tendrá la piramide (Numero entero positivo entre 1 y 8), \n");
      scanf("%i", &cantidad_escalones);
      printf("%i\n", cantidad_escalones);
   }
   for(int piso = 1; piso <= cantidad_escalones; piso++ ){
      for(int bloque = 1; bloque <= cantidad_escalones; bloque++){
         if(bloque <= cantidad_escalones - piso){
            printf(" ");
         }
         else{
            printf("#");
         }
      }
   printf("\n");

   }
   return 0;
}