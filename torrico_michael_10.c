#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fun(int a,int b){
	int i,c=0;
	for(i=0;i<b;i++){
		c=a+c;
	}
	return c;
}
	int funcion(int a,int b){
		int i,c=0;
		while(a>=b){
			a=a-b;
			c++;
		}return c;
	}
		int main( ) {
			char s[5];
			int num1,num2,result;
			printf("ingrese un num entero positivo: ");
			scanf("%d",&num1);
			printf("ingrese un num entero positivo: ");
			scanf("%d",&num2);
			printf("M(multiplicar) o D(dividir): ");
			scanf("%s",&s);
			if(strcmp(s,"M")==0){result=fun(num1,num2);printf("resultado: %d \n",result);} else{
				if((strcmp(s,"D")==0)&&(num2!=0)){result=funcion(num1,num2);printf("resultado: %d \n",result);}else{
					if((num2==0)&&(strcmp(s,"D")==0)){printf("no se puede dividir por 0 \n");}
				}
			}
			return 0;
		}
		
