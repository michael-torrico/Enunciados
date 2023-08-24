#include <stdio.h>
#include <stdlib.h>
void funci(float a,float b,float c){
	float media=(a+c+b)/3;
	printf("promedio: %f.2",media);
}
	int main()
	{
		float num1,num2,num3;
		printf("ingrese un num: ");
		scanf("%f",&num1);
		printf("ingrese un num: ");
		scanf("%f",&num2);
		printf("ingrese un num: ");
		scanf("%f",&num3);
		funci(num1,num2,num3);
		return 0;
	}
	
