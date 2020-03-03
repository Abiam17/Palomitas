#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
int anterior;
void ordena (void);
void crear (void);
void mostrar (void);
void buscar (void);
void borrar (void);
void notas (void);

struct alumno{
 char nombre[20];
 char apellidos[20];
 char DNI[9];
 float T;
 float P;
 float final;
};
struct alumno curso[200];
int menu (void){
 printf ("\t\t**Bienvenido a la liga MX*\n");
 printf ("\t1. Dar de alta a un jugador\n");
 printf ("\t2. Borrar un jugador.\n");
 printf ("\t3. Buscar un jugador.\n");
 printf ("\t4. Ordenar.\n");
 printf ("\t5. Poner Goles.\n");
 printf ("\t6. Mostrar lista de jugadores.\n");
 printf ("\t7. SALIR\n\n");
 printf ("Elija una opciOn:  ");
}
int main (){
 int op;
 int F=0;
 op==menu();
 scanf ("%d", &op);
 printf ("\n\n");
 while (op !=7){
  if (op==1){
   printf ("\nDar de alta\n");
   crear ();
   op==menu();
   scanf ("%d", &op);
   }
   else{
    if(op==2){
     printf ("\nDar de baja\n");
     borrar ();
     op==menu();
     scanf ("%d", &op);


    }
    else{
     if(op==3){
      buscar ();
      op==menu();
      scanf ("%d", &op);
     }
     else {
      if(op==4){
       printf ("\nOrdenar\n");
       op==menu();
       scanf ("%d", &op);
      }
      else{
       if(op==5){
       printf ("\n\nPoner goles\n");
       notas ();

       op==menu();
       scanf ("%d", &op);
       }
       else{
        if(op==6){
         printf ("\nMostrar lista de jugadores\n");
         mostrar();
         op==menu();
         scanf ("%d", &op);
        }
       }
      }
     }
    }
   }
 }
}
void crear(){
 int F=0;
 int terminar;
 anterior=0;
 terminar=0;
  for (F=anterior; F<200&&terminar!=1; F++){
  printf ("Introducir APELLIDOS:\t");
  fflush (stdin);
  gets (curso[F].apellidos);
  printf ("Introducir NOMBRE:\t");
  fflush (stdin);
  gets (curso[F].nombre);
  printf ("Introducir ID:\t");
  scanf ("%s", curso[F].DNI);
  printf ("¿Ha terminado de dar de alta jugador?\n1=Si\t 2=No");
  scanf ("%d", &terminar);
  anterior==F;
  printf ("\n\n");
  }
   if (anterior==200){
   printf ("\nLa lista estA llena");
   }
}
void mostrar (){
 int F;
 F=0;
 anterior=0;
 printf ("\n\nDNI        Apellidos             Nombre       TeorIa      PrActica       Final   \n---------  --------------------- ----------   ------      --------       -----   \n\n");
 for (F=anterior; F<200; F++){
  curso[F].final= (40*curso[F].T)/100+(60*curso[F].P)/100;
  printf ("%s  ", curso[F].DNI);
  printf ("%s ", curso[F].apellidos);
  printf ("%s ", curso[F].nombre);
  printf ("%f ", curso[F].T);
  printf ("%f ", curso[F].P);
  printf ("%f \n", curso[F].final);
  anterior==F;
 }
 printf ("\n\n");
}
void buscar (){
 int F;
 char busco[30];
 printf ("\n\nBuscar por apellidos:  ");
 fflush (stdin);
 gets (busco);
 for (F=0; F<200; F++){
  if (strcmp (busco, curso[F].apellidos)==0){
   printf ("\n%s", curso[F].apellidos);
   printf ("\n%s", curso[F].nombre);
   printf ("\n%s", curso[F].DNI);
  }
 }
 if (strcmp (busco, curso[F].apellidos)!=0){
  printf ("\nNo se han encontrado coincidencias\n");
 }
}
void borrar (){
 int F;
 char busco[30];
 int i;
 int k;
 printf ("\n\nBuscar por apellidos:   ");
 fflush (stdin);
 gets (busco);
 for (F=0; F<200; F++){
  if (strcmp (busco, curso[F].apellidos)==0){
   printf ("\n%s", curso[F].apellidos);
   printf ("\n%s", curso[F].nombre);
   printf ("\n%s", curso[F].DNI);

  printf ("\n¿Desea dar de baja a este jugador?\t1=SI\t2=NO\t");
  scanf ("%d", &k);
  if (k=1){
   for (i=F; i<200; i++){
    curso[i]=curso[i+1];
    anterior--;
   }
  }
  else{
  }
  }
 }
 if (strcmp (busco, curso[F].apellidos)!=0){
  printf ("\nNo se han encontrado coincidencias\n\n");
 }
}
void notas (){
 int F;
 for (F=0; F<=anterior; F++){
  printf ("\JUGADOR: %s, %s", curso[F].apellidos, curso[F].nombre);
  printf ("\nGOL DEL PARTIDO PASADO:  ");
  scanf ("%f", &curso[F].T);
  printf ("\nGOLES DE HOY  ");
  scanf ("%f", &curso[F].P);
  printf ("\nGOLES TOTALES:  %f", (curso[F].T)+(curso[F].P));
  printf ("\n\n");
 }
}
