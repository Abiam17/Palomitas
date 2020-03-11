
#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[20];
    int a, b;
    int palindromo = 1;
    printf("Escribe una cadena: ");
    fflush(stdout);
    gets(palabra);
    b=strlen(palabra)-1;
    for(a=0; a<strlen(palabra)/2; a++, b--) {

        if (*(palabra+a)!=*(palabra+b)) {
            palindromo = 0;
            break;
        }
    }
    if (palindromo)
        printf("\nEs un palindrimo.\n");
    else
        printf("\nNo es un palindrimo.\n");

    return (0);
}
