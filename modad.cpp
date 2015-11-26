#include<stdio.h>
#include<stdlib.h>

int cal[10];
int i;
int posibles[11];
int mayor,posmayor;
int bandera = 0;


int main()
{
	for(i=0;i<10;i++)
	{
		printf("dame una calificacion");
		scanf("%d0",&cal[i]);
	}
	for(i=0;i<11;i++)
	{
		posibles[i] = 0;
	}
	for(i=0;i<10;i++)
	{
		posibles[cal[i]]++;
	}
	for(i = 0; i <11;i++)
	{
		printf("%d--%d\n");
	}
	posmayor=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
		if(posibles[i] == mayor)
		{
			bandera = 1;
		if(posibles[i]>mayor)
		{
			mayor = posibles[i];
			posmayor = i;
			bandera = 0;
		}
	}
	if(bandera == 0)
	{
	printf("la moda es: %d",posmayor);
	}
	else	
	{
	printf("no existe moda\n");
	}
	system("pause");
}

}

