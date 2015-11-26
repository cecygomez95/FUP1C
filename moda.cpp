#include<stdio.h>
#include<stdlib.h>

int cal[10];
int i;
int posibles[11];
int mayor,posmayor;


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
	posmayor=0;
	mayor=posibles[0];
	for(i=1;i<11;i++)
	{
		if(posibles[i]>mayor)
		{
			mayor = posibles[i];
			posmayor = i;
		}
	}
	printf("la moda es: %d",posmayor);
	
	system("pause");
}


