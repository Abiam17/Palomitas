#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Welcome :v\n");
    printf("[1] ALTA DE PERSONA\n");
    printf("[2] BAJA DE PERSONA\n");
    printf("[3] CAMBIO DE PERSONA\n");
    printf("[4] CONSULTA DE PERSONA\n");
    printf("[5] SALIR\n");
scanf("%d",&numero);
  switch(numero) {
case '1': printf("1");
break;
case '2': printf("2");
break;
case '3': printf("3");
break;
case '4': printf("4");
break;
default: printf("Error");



}
    return 0;
}
