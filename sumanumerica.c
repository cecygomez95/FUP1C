#include<stdio.h>
#include<stdlib.h>


int i;
int suma;
int final;

int main ()
{
    	i=1; 
    	suma=0;
    	printf("ingrese un numero\n");
    	scanf("%d",&final);
		while(i<=final)
	    {
		suma=suma+i;
		i=i+1;
		}
		printf("%d",suma);
        system("pause");
}
