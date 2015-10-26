#include<stdio.h>
#include<stdlib.h>

int edad;

 int main()
 
 {
 	printf("Programa que te dice si eres joven o no/n");
 	printf("  introduce tu edad  ");	
 	scanf("%d",&edad);
 	
 	   if(EDAD>=1&&edad<=160){
 	   	
 	   	
 	   	
 	   	    if(edad<3){
 	   	    	printf("   eres un bebe  \n");
				}
			else{
					if(edad<13){
 	   	    	    printf("   eres un niño  \n");
				               }
		            else{
				        if(edad<19){
 	   	    	        printf("   eres  adolecente  \n");
			                        }
			            else{
			                 if(edad<29){
 	   	    	              printf("   eres  joven \n");
				                        }
						    else{
							       if(edad<60){
 	   	    	                     printf("   eres  adulto  \n");
			                                      	}
			                        else{
			                        	 if(edad>60){
 	   	    	printf("   eres  adulto  mayor  \n");
				}
									}              	
						}					
												}
				
 	   	                                   
 	   	    
 	   	   
			}
				}
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
		}
     	else{
 	     	    printf(" SOLO  EDADES  ENTRE  1  Y   160  \n"); 
	   }
 	


 
 			
 	   system("pause");
 }
