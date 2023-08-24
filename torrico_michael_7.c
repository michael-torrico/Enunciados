#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun(char a[5],int b){
	if (b==1){
		if (a[0]=='0') {printf("Cero");}
		if (a[0]=='1') {printf("Uno");}
		if (a[0]=='2') {printf("Dos");}
		if (a[0]=='3') {printf("Tres");}
		if (a[0]=='4') {printf("Cuatro");}
		if (a[0]=='5') {printf("Cinco");}
		if (a[0]=='6') {printf("Seis");}
		if (a[0]=='7') {printf("Siete");}
		if (a[0]=='8') {printf("Ocho");}
		if (a[0]=='9') {printf("Nueve");}
	}
	if(b==2){
		if ((a[0]=='1')&&(a[1]=='0')){printf("Diez");}
		if ((a[0]=='1')&&(a[1]=='1')){printf("Once");}
		if ((a[0]=='1')&&(a[1]=='2')){printf("Doce");}
		if ((a[0]=='1')&&(a[1]=='3')){printf("Trece");}
		if ((a[0]=='1')&&(a[1]=='4')){printf("Catorce");}
		if ((a[0]=='1')&&(a[1]=='5')){printf("Quince");}
		if ((a[0]=='1')&&(a[1]=='6')){printf("Dieciseis");}
		if ((a[0]=='1')&&(a[1]=='7')){printf("Diecisiete");}
		if ((a[0]=='1')&&(a[1]=='8')){printf("Dieciocho");}
		if ((a[0]=='1')&&(a[1]=='9')){printf("Diecinueve");}
		if ((a[0]=='2')&&(a[1]=='0')){printf("Veinte");}
		if ((a[0]=='2')&&(a[1]=='1')){printf("Veintiuno");}
		if ((a[0]=='2')&&(a[1]=='2')){printf("Veintidos");}
		if ((a[0]=='2')&&(a[1]=='3')){printf("Veintitres");}
		if ((a[0]=='2')&&(a[1]=='4')){printf("Veinticuatro");}
		if ((a[0]=='2')&&(a[1]=='5')){printf("Veintecinco");}
		if ((a[0]=='2')&&(a[1]=='6')){printf("Veintiseis");}
		if ((a[0]=='2')&&(a[1]=='7')){printf("Veintisiete");}
		if ((a[0]=='2')&&(a[1]=='8')){printf("Veintiocho");}
		if ((a[0]=='2')&&(a[1]=='9')){printf("Veintinueve");}
		if (a[0]=='3'){printf("Treinta");}
		if (a[0]=='4'){printf("Cuarenta");}
		if (a[0]=='5'){printf("Cincuenta");}
		if (a[0]=='6'){printf("Sesenta");}
		if (a[0]=='7'){printf("Setenta");}
		if (a[0]=='8'){printf("Ochenta");}
		if (a[0]=='9'){printf("Noventa");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='1')){printf(" y uno");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='2')){printf(" y dos");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='3')){printf(" y tres");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='4')){printf(" y cuatro");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='5')){printf(" y cinco");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='6')){printf(" y seis");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='7')){printf(" y siete");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='8')){printf(" y ocho");}
		if ((a[0]!='1')&&(a[0]!='2')&&(a[1]=='9')){printf(" y nueve");}
	}
	if (b==3){
		if((a[0]=='1')&&(a[1]=='0')&&(a[2]=='0')){printf("Cien");}else {if(a[0]=='1'){printf("Ciento");}}
		if(a[0]=='2'){printf("Doscientos");}
		if(a[0]=='3'){printf("Trescientos");}
		if(a[0]=='4'){printf("Cuatrocientos");}
		if(a[0]=='5'){printf("Quinientos");}
		if(a[0]=='6'){printf("Seiscientos");}
		if(a[0]=='7'){printf("Setecientos");}
		if(a[0]=='8'){printf("Ochocientos");}
		if(a[0]=='9'){printf("Novecientos");}
									  
		if ((a[1]=='1')&&(a[2]=='0')){printf(" diez");}
		if ((a[1]=='1')&&(a[2]=='1')){printf(" once");}
		if ((a[1]=='1')&&(a[2]=='2')){printf(" doce");}
		if ((a[1]=='1')&&(a[2]=='3')){printf(" trece");}
		if ((a[1]=='1')&&(a[2]=='4')){printf(" catorce");}
		if ((a[1]=='1')&&(a[2]=='5')){printf(" quince");}
		if ((a[1]=='1')&&(a[2]=='6')){printf(" dieciseis");}
		if ((a[1]=='1')&&(a[2]=='7')){printf(" diecisiete");}
		if ((a[1]=='1')&&(a[2]=='8')){printf(" dieciocho");}
		if ((a[1]=='1')&&(a[2]=='9')){printf(" diecinueve");}
		if ((a[1]=='2')&&(a[2]=='0')){printf(" deinte");}
		if ((a[1]=='2')&&(a[2]=='1')){printf(" veintiuno");}
		if ((a[1]=='2')&&(a[2]=='2')){printf(" veintidos");}
		if ((a[1]=='2')&&(a[2]=='3')){printf(" veintitres");}
		if ((a[1]=='2')&&(a[2]=='4')){printf(" veinticuatro");}
		if ((a[1]=='2')&&(a[2]=='5')){printf(" veintecinco");}
		if ((a[1]=='2')&&(a[2]=='6')){printf(" veintiseis");}
		if ((a[1]=='2')&&(a[2]=='7')){printf(" veintisiete");}
		if ((a[1]=='2')&&(a[2]=='8')){printf(" veintiocho");}
		if ((a[1]=='2')&&(a[2]=='9')){printf(" veintinueve");}
		if (a[1]=='3'){printf(" treinta");}
		if (a[1]=='4'){printf(" cuarenta");}
		if (a[1]=='5'){printf(" cincuenta");}
		if (a[1]=='6'){printf(" sesenta");}
		if (a[1]=='7'){printf(" setenta");}
		if (a[1]=='8'){printf(" ochenta");}
		if (a[1]=='9'){printf(" noventa");} 
		
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='1')) {printf(" y uno");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='2')) {printf(" y dos");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='3')) {printf(" y tres");}			
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='4')) {printf(" y cuatro");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='5')) {printf(" y cinco");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='6')) {printf(" y seis");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='7')) {printf(" y siete");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='8')) {printf(" y ocho");}
		if ((a[1]!='1')&&(a[1]!='0')&&(a[1]!='2')&&(a[2]=='9')) {printf(" y nueve");}  
		
		if ((a[1]=='0')&&(a[2]=='1')) {printf(" uno");}
		if ((a[1]=='0')&&(a[2]=='2')) {printf(" dos");}
		if ((a[1]=='0')&&(a[2]=='3')) {printf(" tres");}
		if ((a[1]=='0')&&(a[2]=='4')) {printf(" cuatro");}
		if ((a[1]=='0')&&(a[2]=='5')) {printf(" cinco");}
		if ((a[1]=='0')&&(a[2]=='6')) {printf(" seis");}
		if ((a[1]=='0')&&(a[2]=='7')) {printf(" siete");}
		if ((a[1]=='0')&&(a[2]=='8')) {printf(" ocho");}
		if ((a[1]=='0')&&(a[2]=='9')) {printf(" nueve");}    
	
	}
	
}
	
	int main( ) {
		char num1[5];
		int longi;
		printf("ingrese un numero de 3 cifras maximo: ");
		scanf("%s",num1);
		longi=strlen(num1);
		fun(num1,longi);	
		return 0;}
	
