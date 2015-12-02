#include<stdio.h>
#include<stdlib.h>

int fin;
int i;
int suma;
int N1=0;
int N2=1;

int main()
{
    printf("serie de fibonacci\n");
    printf("hasta que numero quieres llegar\n");
    scanf("%d",&fin);
    printf("aqui empieza:\n");
    
    printf("%d\n",N1);
    printf("%d\n",N2);
    
    suma=N1+N2;
    printf("%d\n",suma);
    fin=fin-3;
    
    for (i=0;i<fin;i++)
    {
      N1=N2;
      N2=suma;
      suma=N1+N2;
      printf("%d\n",suma);
      
      }
    
system ("pause");
}

