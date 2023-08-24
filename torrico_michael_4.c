#include <stdio.h>
#include <stdlib.h>
float funci(float a,float b){
	return (a+b)/2;
}
	int main()
	{
		float num1,num2,num3;
		printf("ingrese un num: ");
		scanf("%f",&num1);
		printf("ingrese un num: ");
		scanf("%f",&num2);
		num3=funci(num1,num2);
		printf("promnedio: %.2f",num3);
		return 0;
	}
	
