
#include <stdio.h>
#include <stdlib.h>

float g1, m1, s1, c1, g2, m2, s2, c2, m12, s12, m22, s22, x1, y1, x11, y11, c12, c22;

int main()
{
    printf("BINEVENIDO\n");
    printf ("Te ayudaré a encontrar la ubicacion deseada\n");
    printf ("Ingrese las coordenas del eje y (Norte y Sur)\n");
    printf ("Ingrese si esta en el Norte = 0, o Sur = 1\n");
    scanf("%d", &y1);
    if (y1 == 0){
        y11 = 1 ;
    } else {
        y11 = -1;
    }
    printf ("Ingrese los grados\n");
    scanf("%f", &g1);
    printf ("Ingrese los minutos\n");
    scanf("%f", &m1);
    m12 = m1/60;
    printf ("Ingrese los segundos\n");
    scanf("%f", &s1);
    s12 = s1/3600;
    c1 = g1 + m12 + s12;
    c12 = c1 * y11;

    printf ("Ingrese las coordenas del eje x (Este y Oeste)\n");
    printf ("Ingrese si esta en el Este = 0, o Oeste = 1\n");
    scanf("%d", &x1);
    if (x1 == 0){
        x11 = 1 ;
    } else {
        x11 = -1;
    }
    printf ("Ingrese los grados\n");
    scanf("%f", &g2);
    printf ("Ingrese los minutos\n");
    scanf("%f", &m2);
    m22 = m2/60;
    printf ("Ingrese los segundos\n");
    scanf("%f", &s2);
    s22 = s2/3600;
    c2 = g2 + m22 + s22;
    c22 = c2 * x11;
    printf ("El link es:\n");
    printf("https://maps.google.com/maps/place/%f,%f", c12,c22);


    return 0;
}
