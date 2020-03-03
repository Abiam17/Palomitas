#include <stdio.h>
#include <stdlib.h>
void alta ()

|
int main()
{
void alta()
{
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
    return;
}

int numero;

    do{
    printf("Welcome\n");
    printf("Alta de persona [1]\n");
    printf("Baja de persona [2]\n");
    printf("Cambios de persona [3]\n");
    printf("Despliege de personas [4]\n");
    scanf("%i",&numero);
        switch (numero)
        {
    case 1:
        printf("Alta de persona");

        break;
    case 2:
        printf("Estas en la opcion 2");
        break;
    case 3:
        printf("Estas en la opcion 3");
        break;
   case 4:
        printf("Estas en la opcion 4");
        break;
    case 0:
        printf("ADIOS");
        break;

    }



    }
    while (numero == 9);
        printf("Adios popo");

    return 0;
}
