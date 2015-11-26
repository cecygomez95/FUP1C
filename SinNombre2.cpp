#include<stdio.h>
#include<stdlib.h>

int arreglo[11];
int i;
float num;
int suma;
int promedio;

int main()
{
	printf ("introduce tus 6 calificaciones");
	arreglo[0]=0;
	arreglo[1]=1;
	arreglo[2]=2;
	arreglo[3]=3;
	arreglo[4]=4;
	arreglo[5]=5;
	arreglo[6]=6;
	arreglo[7]=7;
	arreglo[8]=8;
	arreglo[9]=9;
	arreglo[10]=10;
	
	for (i=0; i<10;i++)
	{
        arreglo[i]=i;
        suma=num;
    }
	promedio=suma/6;
	printf("el promedio es %f.0",promedio");

system ("pause")
