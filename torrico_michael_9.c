#include <stdio.h>
#include <stdlib.h>
int fun(float a){
	a=a/3;
	if ((a>=9)&&(a<=10)) {return 4;} else {
		if ((a>=7)&&(a<=8)){return 3;} else{
			if((a<=7)&&(a>=6)){return 2;}else {
				if((a>=5)&&(a<=6)){return 1;}else {
					if(a<5){return 0;}
				}
			}
		}
	}
}
	int main( ) {
		int i,promedio,nota=0;
		float total=0;
		for(i=1;i<4;i++){
			printf("ingrese su nota: \n");
			scanf("%d",&nota);
			total=total+nota;
		}
		promedio=fun(total);
		printf("promedio: %d \n",promedio);
		return 0;
	}
	
