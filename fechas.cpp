#include<stdio.h>
#include<stdlib.h>

int dia;
int mes;
int dia1;
int mes1;
int i;

int main ()
{

        printf("Programa que me diga cuantos dias han pasado\n\n");

        printf("introduce el dia\n");
        scanf("%d",& dia);

        printf("introduce el mes\n");
        scanf("%d",&mes);
        
        printf("introduce el dia\n");
        scanf("%d",& dia1);

        printf("introduce el mes\n");
        scanf("%d",&mes1);

        if(dia>mes)
     
	    for(i=1; i<=30; i++)
         {
         dia=dia1;
         mes=mes1+dia;
         dia1=mes1/2;
         printf("los dias que pasaron son %d\n\n",dia);
	   	 break;
	     }
		
			else
     	{
		printf("no hay dias\n\n");
        }
         

system ("pause");
}
