#include<stdio.h>
#include <stdlib.h>
int avanza;
int retro; 
int profundidad;
int profundidad1;
int dias;
int i;
int main()
{
	printf("cangrejo que cae\n\n");
	
	printf("ingresa la profundidad a la que esta\n");
	scanf("%d",&profundidad);
	
	printf("ingresa los metros que avanza\n");
	scanf("%d",&avanza);
	
	printf("ingresa los metros que retrocede\n");
	scanf("%d",&retro);
	
	if(avanza>retro)
	
	for(i=0; avanza>retro; i++)
	{
		profundidad-=avanza;
		profundidad1=profundidad+retro;
		dias=profundidad1/2;
		printf("los dias que tardo en salir son: %d dias\n\n",dias);
		break;
	}
	
	else
	{
		printf("\nunca saldra el cangrejito\n\n");
	}
	system("pause");
	
}
