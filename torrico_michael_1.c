#include <stdio.h>
#include <stdlib.h>
void funci(){
	printf("ingrese su nombre: ");
	char nombre[50];
	scanf("%s",&nombre);
	printf("ingrese su apellido: ");
	char apellido[50];
	scanf("%s",&apellido);
	printf("%s \n %s",nombre,apellido);
}
	int main()
	{
		funci();
		
		return 0;
	}
	
	
