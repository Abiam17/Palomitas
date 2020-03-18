#include <stdio.h>
#include <stdlib.h>
#include <time.h>



const int LADOS = 6;
int main() {
	int num1, contador=0, num2, suma, total=0, sum2=0;
	int sum3=0, sum4=0, sum5=0, sum6=0, sum7=0, sum8=0, sum9=0, sum10=0, sum11=0, sum12=0;
	char c;
	srand(time(0));
	for (int contador = 0; contador <72000; contador++){
		num1 = rand() % LADOS + 1;
        num2 = rand() % LADOS + 1;
		printf("Se tiran los dados \n");
		printf("Te toco:  %d\n", num1);
		printf("Te toco:  %d\n", num2);
        suma = num2 + num1;
        contador = contador + 1;
        total = total + suma;
        printf("la suma es:  %d\n", suma);
        if (suma == 2){
            sum2 = sum2 + 1;
        }else{
        if (suma==3){
            sum3 = sum3 +1;
        }else {
        if(suma==4){
            sum4 = sum4 +1;
        }else {
        if(suma==5){
            sum5 = sum5 +1;
        }else {
        if(suma==6){
            sum6 = sum6 +1;
        }else {
        if(suma==7){
            sum7 = sum7 +1;
        }else {
        if(suma==8){
            sum8 = sum8 +1;
        }else {
        if(suma==9){
            sum9 = sum9 +1;
        }else {
        if(suma==10){
            sum10 = sum10 +1;
        }else {
        if(suma==11){
            sum11 = sum11 +1;
        }else {
            sum12 = sum12 +1;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
	}
	printf("Resultados  \n");
	printf("Las veces qe la suma fue 2 es:  %d\n", sum2);
	printf("Las veces qe la suma fue 3 es:  %d\n", sum3);
	printf("Las veces qe la suma fue 4 es:  %d\n", sum4);
	printf("Las veces qe la suma fue 5 es:  %d\n", sum5);
	printf("Las veces qe la suma fue 6 es:  %d\n", sum6);
	printf("Las veces qe la suma fue 7 es:  %d\n", sum7);
	printf("Las veces qe la suma fue 8 es:  %d\n", sum8);
	printf("Las veces qe la suma fue 9 es:  %d\n", sum9);
	printf("Las veces qe la suma fue 10 es:  %d\n", sum10);
	printf("Las veces qe la suma fue 11 es:  %d\n", sum11);
	printf("Las veces qe la suma fue 12 es:  %d\n", sum12);
	return 0;

}
