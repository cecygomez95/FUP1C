#include<stdio.h>
#include<stdlib.h>

int mes;

int main ( )
{      
       printf("Programa que me diga en que mes estamos\n");
       printf("introduce tu mes\n");
       scanf("%d",&mes);
       switch(mes)
	{
	
		case 1 : {
		printf ("El mes es enero\n");
		break;
		}
		case 2 : {
		printf ("El mes es Febrero\n");
		break;
		}
		case 3 : {
	    printf("El mes es marzo\n");
		break;
		}
		case 4 : {
	    printf("El mes es abril\n");
		break;
		}
		case 5 : {
	    printf("El mes es mayo\n");
		break;
		}
		case 6 : {
	    printf("El mes es junio\n");
		break;
		}
		case 7 : {
	    printf("El mes es julio\n");
		break;
		}
		case 8 : {
	    printf("El mes es agosto\n");
		break;
		}
		case 9 : {
	    printf("El mes es septiembre\n");
		break;
		}
		case 10 : {
	    printf("El mes es octubre\n");
		break;
		}
		case 11 : {
	    printf("El mes es noviembre\n");
		break;
		}
		case 12 : {
	    printf("El mes es diciembre\n");
		break;
			}
		default : {
			printf ("Error");
		}
	}	
	system("pause");
}
