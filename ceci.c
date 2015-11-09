#include <stdio.h>
#include <stdlib.h>

int final;
int i;
int j;

int main ()

{
    printf ("imprime mis numeros pares \n");
    scanf("%d",&final);
    
j=1;
i=1;

    while (i<= final)
    {
    	j=1;
    	do
    	{
    		printf ("%d",i);
    		j++;
		} while ((j<=i)&&(i%2==0));
		i++;
	printf("\n");
	

}
system ("pause");

}
