#include <stdio.h>
#include <stdlib.h>
void fun(char *a){
	printf("¿quieres ver el numero?1(si) o 2(no)\n");
	int a2;
	scanf("%d",&a2);
	if(a2==1){printf("%s \n",a);}
}
	int main( ) {
		char num1[5];
		int num2=0;
		printf("ingrese un numero de 6 cifras: ");
		scanf("%s",&num1);
		printf("ingrese el numero del caracter a cambiar: ");
		scanf("%d",&num2);
		if (num2==1){num1[0]='*';}else{
			if(num2==2){num1[1]='*';}else{
				if(num2==3){num1[2]='*';}else{
					if(num2==4){num1[3]='*';}else{
						if(num2==5){num1[4]='*';}else{
							if(num2==6){num1[5]='*';}
						}
					}
				}
			}
		}
		fun(num1);
		return 0;
	}
	
