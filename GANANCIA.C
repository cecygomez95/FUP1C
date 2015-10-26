#include<stdio.h>
#include<stdlib.h>
int Eleccion;
int opcion;
int narticulos;
int main ()

{
	printf("ingrese tu opcion 1 hacer compras 2 ver ganancias/n");
	scanf("%d",&opcion);
	switch (opcion)
	   {
		case 1:{
			printf("Elegiste compras");
				printf("Elige tu articulo opcion 1->cafe,2->detergente,3->sabritas,4->refrescos,5->pan");
				scanf("%d",&Eleccion);
			
			switch (Eleccion)
			{case 1:{
				printf("Elegiste cafe cuantos");
				scanf ("%d",narticulos);
				totalcafe=narticulos*10;
	                   }
	                   case 2:{
				printf("Elegiste detergente cuantos");
				scanf ("%d",narticulos);
				totaldetergente=narticulos*20;
	                   }
	                   case 3:{
				printf("Elegiste sabritas cuantos");
				scanf ("%d",narticulos);
				totaldesabritas=narticulos*30;
	                   }
	                   case 4:{
				printf("Elegiste refrescos cuantos");
				scanf ("%d",narticulos);
				totalderefrescos=narticulos*10;
	                   }
	                   case 2:{
				printf("Elegiste pan cuantos");
				scanf ("%d",narticulos);
				totaldepan=narticulos*15;
	                   }
	                   
		}
			}break;
			
		case 2:{
			printf("Elegiste ganancias");
			}break;
	
		default:{
        }
       
       
	    } 
	
	
	
	
	system ("pause");
}
