#include <stdio.h>
#include <string.h>
#define LONGITUD_CADENA 10000

char *invertir(char cadena[]);

int main(void) {
  char cadena[LONGITUD_CADENA];
  printf("Escribe una cadena y la invertire: ", LONGITUD_CADENA );

  // Leer cadena
  fgets(cadena, LONGITUD_CADENA, stdin);

  cadena[strcspn(cadena, "\r\n")] = 0;

  printf("La cadena invertida es: %s", invertir(cadena));
  return 0;
}
char *invertir(char cadena[]) {
  int longitud = strlen(cadena);
  char temporal;
  for (int izquierda = 0, derecha = longitud - 1; izquierda < (longitud / 2);
       izquierda++, derecha--) {
    temporal = cadena[izquierda];
    cadena[izquierda] = cadena[derecha];
    cadena[derecha] = temporal;
  }
  return cadena;
}
