#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float funci(float a){
	return a*24;
}   
	float funcion(float a){
		return a/24;
	}
		int main()
		{   
			char cadena[50];    
			float num1,num2;
			printf("ingrese H(horas) o D(dias)");
			scanf("%s",&cadena);
			printf("ingrese la cantidad: ");
			scanf("%f",&num1);
			if(strcmp(cadena,"D")==0) {
				num2=funci(num1);printf("cantidad de horas: %.2f",num2);}
			if(strcmp(cadena,"H")==0) {
				num2=funcion(num1);printf("cantidad de dias: %.2f",num2);}
			return 0; 
		}  
		
		
