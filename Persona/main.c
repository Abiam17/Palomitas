#include <stdio.h>

struct estructura_persona {
	char nombre[30];
	char direccion[100];
	char religion[50];
	char sexo[10];
	unsigned long int edad;
	unsigned long int id;
	char escolaridad[20];
};

struct estructura_persona persona;
main()
{
    char d;
	printf("Escribe el nombre de la persona: ");
	gets(persona.nombre);

	printf("Escribe la direccion de la persona: ");
	gets(persona.direccion);

	printf("Escribe la religion de la persona: ");
	gets(persona.religion);

	printf("Escribe el sexo de la persona: ");
	gets(persona.sexo);

	printf("Escribe la escolaridad de la persona: ");
	gets(persona.escolaridad);

	printf("La persona %s, con direccion en %s.\nDe religion es %s.\nSexo: %s.\nY hasta escolaridad %s.\n", persona.nombre, persona.direccion, persona.religion, persona.sexo, persona.escolaridad);
}
