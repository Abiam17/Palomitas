#include <stdio.h>
#include <stdlib.h>

int np, numero, ns, ne, contador = 0;
char nombre[100];
int main()
{
    printf("BIENVENIDO\n");
    printf("Cuantas carpetas quiere buscar\n");
    scanf ("%d", &numero);
    for (int contador = 0; contador < numero; contador++){
        printf ("Inserte el nombre de la carpeta\n");
        scanf( "%s", nombre );
        printf ("Ingrese el numero de la carpeta\n");
        scanf ("%d", &ns);
        printf ("Cuantas carpetas desea sumarle?\n");
        scanf ("%d", &np);
        ne = ns + np;
        printf ("Carpeta encontrada es %s.%d\n", nombre, ne);
    }
}
