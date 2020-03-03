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
	printf("Escribe el nombre de la persona: ");
	scanf("%s", &persona.nombre);

	printf("Escribe la direccion de la persona: ");
	scanf("%s", &persona.direccion);

	printf("Escribe la religion de la persona: ");
	scanf("%s", &persona.religion);

	printf("Escribe el sexo de la persona: ");
	scanf("%s", &persona.sexo);

	printf("Escribe la edad de la persona: ");
	scanf("%d", &persona.edad);

	printf("Escribe el id: ");
	scanf("%d", &persona.id);

	printf("Escribe la escolaridad de la persona: ");
	scanf("%s", &persona.escolaridad);

	printf("Mi persona %s, \n su direccion es %s, \n su religion es %s, \n su sexo es %s, \n su edad es %d, \n el id es %d, \n y la escolaridad es %s \n", persona.nombre, persona.direccion, persona.religion, persona.sexo, persona.edad, persona.id, persona.escolaridad);
}
