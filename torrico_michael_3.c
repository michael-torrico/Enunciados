#include <stdio.h>
#include <stdlib.h>
int funci(){
	int a;
	printf("ingrese un num: ");
	scanf("%d",&a);
	return a;
}
	int main()
	{
		char p;
		int num1;
		num1=funci();
		p=num1;
		printf("simbolo: %c",p);
		return 0;
	}
	
