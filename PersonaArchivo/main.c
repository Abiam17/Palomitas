#include <stdio.h>
void pruena() {
 unsigned char a;

 FILE *filepers;

 filepers = fopen("personas.txt", "r");

 while (!feof(filepers)){
    a=fgetc(filepers);

    printf("  %02x\n",a);
 }
 fclose(filepers);
 }


typedef struct persona
{
 unsigned long int id_persona;
 char nombre[100];
 char sexo;
 char direccion[100], religion[50], escolaridad[20];
 unsigned short int edad;
}  Persona;
    int N=0;
    int main(int argc, char const *argv [])
{
    Persona array_de_personas[10];
    Persona una_persona;
    char c;

    FILE *aarchivo;

    aarchivo = fopen("personas.txt", "wt");

    if(aarchivo == NULL) {
    printf("Error: No se ha podido crear el fichero persona.txt");
    } else {
    do{
    printf("Introduzca su nombre completo:\n");
    fgets(array_de_personas[0].nombre, 99,stdin);

    printf("Introduzca el sexo de la persona [H/M]:\n");
    array_de_personas[0].sexo = getc(stdin);

    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada
    printf("Introduzca la direccion:\n");
    fgets(array_de_personas[0].direccion, 99,stdin);

    printf("Introduzca la religion:\n");
    fgets(array_de_personas[0].religion, 49,stdin);

    printf("Introduzca la escolaridad:\n");
    fgets(array_de_personas[0].escolaridad, 19,stdin);

    printf("Introduzca la edad:\n");
    scanf("%hu", &array_de_personas[0].edad);

    while ((c = getc(stdin)) != '\n' && c != EOF); //Esta linea hace flush a la entrada

    fwrite(&array_de_personas[0].nombre, strlen(array_de_personas[0].nombre), 1, aarchivo);
    fprintf(aarchivo,"%s", &array_de_personas[0].sexo);
    fwrite(&array_de_personas[0].direccion, strlen(array_de_personas[0].direccion), 1, aarchivo);
    fwrite(&array_de_personas[0].religion, strlen(array_de_personas[0].religion), 1, aarchivo);
    fwrite(&array_de_personas[0].escolaridad, strlen(array_de_personas[0].escolaridad), 1, aarchivo);
    fprintf(aarchivo,"%d",array_de_personas[0].edad);
    N = N+1;

    }while(N<10) ;
    fclose(aarchivo);
  }


}
