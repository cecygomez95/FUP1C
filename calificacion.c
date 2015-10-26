#include<stdio.h>//Libreria de E/S
#include<stdlib.h>

int calificacion;

int main ()
{
        printf("Programa que te dice si aprobaste o no\n");
        printf("introduce tu calificacion");
        scanf("%d",&calificacion);
        printf("Tu calificacion es: %d\n",calificacion);
        if(calificacion >= 7)
        {
        	printf("Aprobado\n");
		}
		else
		{
			printf("Reprobado");
		}
		
        system("pause");
        
}
