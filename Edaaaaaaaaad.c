#include<stdio.h>
#include<stdlib.h>

float Edad;

int main ()

{///inicio
{
        printf("Programa que te dice si eres joven o no\n");
        printf("introduce tu Edad");
        scanf("%f",&Edad);
        if(Edad<3)
        {
        	printf("eres un beb�\n");
		}
		else
		{
			printf("No eres un beb�");
		if(Edad>=12)
        {
        	printf("eres un ni�o\n");
		}
		else
		{
			printf("No eres un ni�o");
			if(Edad>=18)
        {
        	printf("eres un adolesente\n");
		}
		else
		{
			printf("No eres un adolesente");
			if(Edad>=29)
        {
        	printf("eres un joven\n");
		}
		else
		{
			printf("No eres un beb�");
			if(Edad>=59)
        {
        	printf("eres un adulto\n");
		}
		else
		{
			printf("No eres un adulto");
			if(Edad>=100)
        {
        	printf("eres un adulto mayor\n");
		}
		else
		{
			printf("No eres un adulto mayor");
		}
		
		{system("pause")
		
		}
		 
  	
