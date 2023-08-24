#include <stdio.h>
#include <stdlib.h>
int funci(int a){
	if(a>0){ return 0;} 
	if(a<0){return 1;}
}   
	int main()
	{   
		int num1,num2;
		printf("ingrese un num: ");
		scanf("%d",&num1);
		num2=funci(num1);
		if(num1<0){num1=num1*-1;}
		printf("%d   %d",num2,num1);
		return 0;
	} 
	
