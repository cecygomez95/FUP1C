#include <stdio.h>
#include <stdlib.h>

int i;
char palabra[100];


int main()
{
    
    printf("Programa que cambia la palabra\n");
    printf("Introduce el texto\n");
    scanf("%s",palabra);
    
    for(i=0;i<100;i++){
                      if(palabra[i]=='a'){
                                    palabra[i]='o';
                                    }
                      
                      else if(palabra[i]=='e'){
                                    palabra[i]='e';
                                    }
                      
                      else if(palabra[i]=='i'){
                                    palabra[i]='i';
                                    }
                      
                      else if(palabra[i]=='o'){
                                    palabra[i]='a';
                                    }
                      
                      else if(palabra[i]=='u'){
                                    palabra[i]='u';
                                    }
                      }
    printf("%s\n",palabra);
    system("PAUSE");
}
