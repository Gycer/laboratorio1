#include <stdio.h>
/*
Escaleritas de Mario
*/
int main(void)
{
   int cantidad_escalones;
  
   /*Se le pide al usuario que ingrese el numero 
      de escalones de la piramide y se guarda*/

   printf("Ingrese la cantidad de escalones que tendrá la piramide (Numero entero positivo entre 1 y 8), \n");
   scanf("%i", &cantidad_escalones);
   printf("%i\n", cantidad_escalones);

   /*Se verifica si la cantidad ingresada por el 
        usuario cumple con el formato deseado*/

   while(cantidad_escalones<1 || cantidad_escalones>8){
      printf("\"El numero que ingreso no cumple con el formato indicado\"\n\n");
      printf("Ingrese la cantidad de escalones que tendrá la piramide (Numero entero positivo entre 1 y 8), \n");
      scanf("%i", &cantidad_escalones);
      printf("%i\n", cantidad_escalones);
   }
   /*Se estructura la piramide*/
   
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