
#include <stdio.h>
void pruena() {
 unsigned char c;
 FILE *fichero;
 fichero = fopen("persona.bin", "r");
 while (!feof(fichero)){
 c=fgetc(fichero);
 printf("  %02x\n",c);
 }
 fclose(fichero);
 }


typedef struct persona
{
 unsigned long int id_persona;
 char nombre[100];
 char sexo;
 char direccion[100], religion[50], escolaridad[20];
 unsigned short int edad;
} Persona;
int main()
{

  Persona struct_pers[10];
  Persona una_persona;
  FILE *aarchivo;
  int cont=0;

  pruena();
    do {
    printf("Introduce el nombre completo de la persona:\n");
    fgets(struct_pers[cont].nombre, 99,stdin);
    fflush(stdin);
    printf("Introduce el sexo  de la persona:\n");
    struct_pers[cont].sexo = getc(stdin);
    fflush(stdin);
    printf("Introduce la direccion de la persona:\n");
    fgets(struct_pers[cont].direccion, 99,stdin);
    fflush(stdin);
    printf("Introduce la religion de la persona\n");
    fgets(struct_pers[cont].religion, 49,stdin);
    fflush(stdin);
    printf("Introduce la escolaridad de la persona:\n");
    fgets(struct_pers[cont].escolaridad, 19,stdin);
    fflush(stdin);
    printf("Introduce la edad de la persona:\n");
    scanf("%hu", &struct_pers[cont].edad);
    fflush(stdin);
    cont++;
  } while(cont<10);
  aarchivo = fopen("persona.bin", "w");
  if(aarchivo == NULL)
  {
      printf("Error al abrir persona.\n");
      return(1);
  }

  fwrite(struct_pers, sizeof(Persona), 10, aarchivo);

  fclose(aarchivo);
  return 0;
}
