#include <stdio.h>


int opc, npc, cont = 0;
char d, ans;


struct estructura_persona {
	char nombre[30];
	char direccion[100];
	char religion[50];
	char sexo[10];
	unsigned long int edad;
	unsigned long int id;
	char escolaridad[20];
};

estructura_persona arr[30];

void alta(){
        while((d = getc(stdin)) != '\n' && d != EOF);
        printf("Escribe el nombre de la persona: ");
        gets(arr[cont].nombre);

        printf("Escribe la direccion de la persona: ");
        gets(arr[cont].direccion);

        printf("Escribe la religion de la persona: ");
        gets(arr[cont].religion);

        printf("Escribe el sexo de la persona: ");
        gets(arr[cont].sexo);

        printf("Escribe la edad de la persona: ");
        scanf("%d", &arr[cont].edad);
        while((d = getc(stdin)) != '\n' && d != EOF);

        printf("Escribe el id: ");
        scanf("%d", &arr[cont].id);
        while((d = getc(stdin)) != '\n' && d != EOF);

        printf("Escribe la escolaridad de la persona: ");
        gets(arr[cont].escolaridad);
}

void eliminar(int n){
    for(int i = 0; i < cont; i++){
        if(arr[i].id == n){
            arr[i] = arr[i+1];
        }
    }
}

void modificar(char ips, int n){

    switch(ips){
        case 'n':
        printf("Escriba el nuevo elemento: ");
        gets(arr[n].nombre);
        break;

        case 'd':
        printf("Escriba el nuevo elemento: ");
        gets(arr[n].nombre);
        break;

        case 'r':
        printf("Escriba el nuevo elemento: ");
        gets(arr[n].nombre);
        break;

        case 's':
        printf("Escriba el nuevo elemento: ");
        gets(arr[n].nombre);
        break;

        case 'e':
        printf("Escriba el nuevo elemento: ");
        scanf("%d", &arr[n].edad);
        while((d = getc(stdin)) != '\n' && d != EOF);
        break;

        case 'id':
        printf("Escriba el nuevo elemento: ");
        scanf("%d", &arr[n].id);
        while((d = getc(stdin)) != '\n' && d != EOF);
        break;

        case 'c':
        printf("Escriba el nuevo elemento: ");
        gets(arr[n].nombre);
        break;


        printf("\nHa sido modificado exitosamente\n");
    }
}

void consulta(int n){
    for(int i = 0; i < cont; i++){
        if(arr[i].id == n){
            printf("La persona es %s, con direccion en %s.\nDe religion es %s.\nSexo: %s.\nSu edad es %d.\nCon id es %d.\nY hasta escolaridad %s.\n", arr[i].nombre, arr[i].direccion, arr[i].religion, arr[i].sexo, arr[i].edad, arr[i].id, arr[i].escolaridad);
        }
    }
}



int main()
{
    do{
    printf("Bienvenido. Seleccione una opcion a continuacion:\n1. Alta de persona\n2. Baja de persona\n3. Cambio de persona\n4. Consulta de persona\nAcceder a: ");
    scanf("%d", &opc);

    switch(opc){
        case 1:
            alta();
            printf("\nLa persona ha sido registrada exitosamente.\n");
            cont++;
        break;

        case 2:
            printf("Digite el ID de la persona que quiera eliminar: ");
            scanf("%d", &npc);
            eliminar(npc);
            printf("\nLa persona ha sido eliminada exitosamente.\n");
            cont--;

        break;

        case 3:
            printf("Digite el ID de la persona que quiera modificar: ");
            scanf("%d", &npc);
            while((d = getc(stdin)) != '\n' && d != EOF);

            for(int i = 0; i < cont; i++){
                if(arr[i].id == npc){
                    printf("\nQue desea modificar: n = nombre / d = direccion / r = religion / s = sexo");
                    printf("\ne = edad / i = id / c = escolaridad\n");
                    scanf("%s", &ans);
                    while((d = getc(stdin)) != '\n' && d != EOF);
                    modificar(ans, i);
                }
            }

        break;

        case 4:
            printf("Digite el ID de la persona que quiera buscar: ");
            scanf("%d", &npc);
            while((d = getc(stdin)) != '\n' && d != EOF);
            consulta(npc);

        break;

        default:
            printf("Opcion no valida\n");
        break;

        }
    printf("¿Desea continuar s = Si / n = No\n");
    scanf("%s", &ans);

    }while(ans != 'n');

}

//if(persona[].id == numero )
