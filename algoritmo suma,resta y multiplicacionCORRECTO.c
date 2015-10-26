#include<stdio.h>//Libreria de E/S

float N1;
float N2;
float resultado;

int main ()
{///inicio
            printf("Dame un numero: ");
            scanf("%f",&N1);
            printf("Dame un numero: ");
            scanf("%f",&N2);
            printf("Dame un numero: ");
            resultado = N1 + N2 ;
            printf("El resultado de %.0f + %.0f es: %.1f\n",N1,N2,resultado);
            resultado  = N1 - N2 ;
            printf("El rsultado de %.0f - %.0f es: %.1f\n",N1,N2,resultado);
            resultado  = N1 * N2 ;
            printf("El resultado de %.0f  * %.0f es: %.1f\n",N1,N2,resultado);
            resultado  = N1 / N2 ;
            printf("El resultado de %.0f  / %.0f es: %.1f\n",N1,N2,resultado);
            }//Fin
