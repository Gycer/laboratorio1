#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main(void){
    char numero_tarjeta[17];

    printf("Ingrese el numero de tarjeta a validar\n");
    scanf("%s", &numero_tarjeta);

    int primer_digito = numero_tarjeta[0] - '0';
    int segundo_digito = numero_tarjeta[1] - '0';
    int tamano = strlen(numero_tarjeta);
    int contador = 0;
    for (int i = tamano-1 ; i >= 0; i--)
    {

        int casilla = tamano - i;
        int elemento = numero_tarjeta[i] - '0';

        if(casilla % 2 != 0 ){
            contador = contador + elemento;
        }
        else{
            contador = contador + (2*elemento)%10 +( 2*elemento)/10;
        }

    }

    if(contador % 10 != 0){
        printf("INVALID\n");
        return 0;
    }

    if(tamano == 15 && primer_digito == 3 && (segundo_digito == 4 || segundo_digito == 7)){
        printf("AMEX\n");
    }
    else if(tamano == 16 && primer_digito == 5 && segundo_digito >= 1 && segundo_digito <= 5){
        printf("MASTERCARD\n");
    }
    else if((tamano == 13 || tamano == 16) && primer_digito == 4){
        printf("VISA\n");
    }
    else{
        printf("INVALID\n");
    }

return 0;
}