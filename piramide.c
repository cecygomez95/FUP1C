#include<stdio.h>
#include<stdlib.h>

int i;
int final;
int j;

int main ()

{
	   printf("programa que hace piramide");
	   printf ("dame un numero");
	   scanf ("%d",&final);
	   i = 1;
	   while (i <= final)
	   {
	   	
		   j = 1 ;
	   	   while(j <= i)
	   	{
	   		printf("%d",i);
	   		j++;
		   }
	   	printf("\n");
	   	i++;//i = i +;
	   }
	   system("pause");
	  
}

