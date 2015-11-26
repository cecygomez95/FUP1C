#include<stdio.h>
#include<stdlib.h>

int cal[10];
int i;
int suma=0;
float promedio;

int main()
{
	printf ("introduce tus 6 calificaciones");
	for (i=0;i<10;i++)
    {
    	printf ("dame la calificacion del alumno %d",i+1);
    	scanf ("%d",cal[i]);
    }
    for (i=0;i<10;i++)
    {
    	suma=suma+cal[i];
	}
	
	promedio=(float)suma/10;
	printf("el promedio de las calificaciones es %f\n,promedio");

system ("pause");
}
