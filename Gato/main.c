#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
   char tablero[10];
   FILE *fptr;
   if ((fptr = fopen(argv[1],"r")) == NULL){
       printf("Error! opening file");
       exit(2);
   }
   fscanf(fptr,"%s", &tablero);

   if (strcmp(argv[2],"2") == 0){
     if (strcmp(argv[3],"1") == 0){
       fptr = fopen ( argv[1], "w+" ); //abrimos para escribir


      if ((strcmp(tablero,"1--------") == 0)||(strcmp(tablero,"-1-------") == 0)||(strcmp(tablero,"------1--") == 0)||(strcmp(tablero,"--------1") == 0)){ //Esta es la opcion
              fputs( tablero, fptr );
              fseek(fptr, -5, SEEK_CUR);
              fputs( argv[2], fptr );
            }
        if (strcmp(tablero,"1-1-2----") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        // if (strcmp(tablero,"1---2-1--") == 0)    {
        //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
        //   fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
        //   fputs( argv[2], fptr );
        // }
        // if (strcmp(tablero,"--1-2---1") == 0)    {
        //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
        //   fseek(fptr, -4, SEEK_CUR); //En esta parte vamos a tapar el 3
        //   fputs( argv[2], fptr );
        // }
        // if (strcmp(tablero,"1-1-2----") == 0)    {
        //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
        //   fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
        //   fputs( argv[2], fptr );
        // }
        if (strcmp(tablero,"1---2-1--") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        // if (strcmp(tablero,"----2-1-1") == 0)    {
        //   fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
        //   fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
        //   fputs( argv[2], fptr );
        // }
        if (strcmp(tablero,"--1-2---1") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -4, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        if (strcmp(tablero,"----2-1-1") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }//121-2----
        if ((strcmp(tablero,"12112----") == 0)||(strcmp(tablero,"121-21---") == 0)||(strcmp(tablero,"121-2-1--") == 0)||(strcmp(tablero,"121-2---2") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -1, SEEK_CUR);
                fputs( argv[2], fptr );
              }//Victoria magistral
        //1--22-1--
        if ((strcmp(tablero,"11-22-1--") == 0)||(strcmp(tablero,"1-122-1--") == 0)||(strcmp(tablero,"1--22-11-") == 0)||(strcmp(tablero,"1--22-1-1") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -4, SEEK_CUR);
                fputs( argv[2], fptr );
              }//Victoria magistral
              //--1-22--1
        if ((strcmp(tablero,"-11-22--1") == 0)||(strcmp(tablero,"1-1-22--1") == 0)||(strcmp(tablero,"--1-221-1") == 0)||(strcmp(tablero,"--1-22-11") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -6, SEEK_CUR);
                fputs( argv[2], fptr );
              }
      //----2-121
        if ((strcmp(tablero,"1---2-121") == 0)||(strcmp(tablero,"--1-2-121") == 0)||(strcmp(tablero,"---12-121") == 0)||(strcmp(tablero,"----21121") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -8, SEEK_CUR);
                fputs( argv[2], fptr );
              }
        //121-2--1-
if (strc
mp(tablero,"121-2--1-") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }//1--2211--
        if (strcmp(tablero,"1--2211--") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }//--1122--1
        if (strcmp(tablero,"--1122--1") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }//-1--2-121
        if (strcmp(tablero,"-1--2-121") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -6, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }//---------
        if ((strcmp(tablero,"12122-11-") == 0)||(strcmp(tablero,"121-2--11") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -4, SEEK_CUR);
                fputs( argv[2], fptr );
        }//1--22112-
        if ((strcmp(tablero,"1-122112-") == 0)||(strcmp(tablero,"1--221121") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -8, SEEK_CUR);
                fputs( argv[2], fptr );
        }//--1122-21
        // if ((strcmp(tablero,"1-122112-") == 0)||(strcmp(tablero,"1--221121") == 0)){ //Esta es la opcion
        //         fputs( tablero, fptr );
        //         fseek(fptr, -8, SEEK_CUR);
        //         fputs( argv[2], fptr );
        // }//-1-22-121
        if ((strcmp(tablero,"11-22-121") == 0)||(strcmp(tablero,"-1122-121") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -4, SEEK_CUR);
                fputs( argv[2], fptr );
        }
        if (strcmp(tablero,"121221-1-") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -3, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        if (strcmp(tablero,"11-22112-") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -7, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        if (strcmp(tablero,"-11122-21") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -3, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        if (strcmp(tablero,"-1-221121") == 0)    {
          fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
          fseek(fptr, -7, SEEK_CUR); //En esta parte vamos a tapar el 3
          fputs( argv[2], fptr );
        }
        if ((strcmp(tablero,"1---2---1") == 0)||(strcmp(tablero,"--1-2-1--") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                fseek(fptr, -1, SEEK_CUR);
                fputs( argv[2], fptr );
              }
              //
          if ((strcmp(tablero,"1-1-2--21") == 0)||(strcmp(tablero,"1--12--21") == 0)||(strcmp(tablero,"1---21-21") == 0)){
            fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
            fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
            fputs( argv[2], fptr );
          }
          if ((strcmp(tablero,"11--2--21") == 0)){ //Esta es la opcion
                  fputs( tablero, fptr );
                  fseek(fptr, -7, SEEK_CUR);
                  fputs( argv[2], fptr );
                }
            if ((strcmp(tablero,"11212--21") == 0)||(strcmp(tablero,"112-21-21") == 0)){ //Esta es la opcion
                    fputs( tablero, fptr );
                    fseek(fptr, -3, SEEK_CUR);
                    fputs( argv[2], fptr );
                  }
if ((strcmp(tablero,"112-2--21") == 0)||(strcmp(tablero,"112-2--21") == 0)){ //Esta e
s la opcion
                    fputs( tablero, fptr );
                    fseek(fptr, -3, SEEK_CUR);
                    fputs( argv[2], fptr );
                  }
            if ((strcmp(tablero,"112-2-121") == 0)){ //Esta es la opcion
                    fputs( tablero, fptr );
                    fseek(fptr, -6, SEEK_CUR);
                    fputs( argv[2], fptr );
                  }
            if ((strcmp(tablero,"1-1-2-12-") == 0)||(strcmp(tablero,"--112-12-") == 0)||(strcmp(tablero,"--1-2112-") == 0)){
              fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
              fseek(fptr, -8, SEEK_CUR); //En esta parte vamos a tapar el 3
              fputs( argv[2], fptr );
            }
            if ((strcmp(tablero,"12--2-1-1") == 0)||(strcmp(tablero,"12-12---1") == 0)||(strcmp(tablero,"12--21--1") == 0)||(strcmp(tablero,"121-2---1") == 0)){
              fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
              fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
              fputs( argv[2], fptr );
            }
            if ((strcmp(tablero,"12--2-1-1") == 0)||(strcmp(tablero,"12-12---1") == 0)||(strcmp(tablero,"12--21--1") == 0)||(strcmp(tablero,"121-2---1") == 0)){
              fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
              fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
              fputs( argv[2], fptr );
            }
            if ((strcmp(tablero,"-2112-1--") == 0)||(strcmp(tablero,"-21-211--") == 0)||(strcmp(tablero,"-21-2-1-1") == 0)||(strcmp(tablero,"121-2---1") == 0)){
              fputs( tablero, fptr ); //Aqui se vuelve a escribir el tablero
              fseek(fptr, -1, SEEK_CUR); //En esta parte vamos a tapar el 3
              fputs( argv[2], fptr );
            }


            if (strcmp(tablero,"---------") == 0){ //Esta es la opcion
              fputs( "---------", fptr );
                fseek(fptr, -2, SEEK_CUR);
                fputs( argv[2], fptr );
              }
            if ((strcmp(tablero,"21-------") == 0)||(strcmp(tablero,"2-1------") == 0)||(strcmp(tablero,"2--1-----") == 0)||(strcmp(tablero,"2---1----") == 0)||(strcmp(tablero,"2----1---") == 0)||(strcmp(tablero,"2-----1--") == 0)||(strcmp(tablero,"2------1-") == 0)||(strcmp(tablero,"2-------1") == 0)){ //Esta es la opcion
              fputs( tablero, fptr );
                fseek(fptr, -2, SEEK_CUR);
                fputs( argv[2], fptr );
              }
              if ((strcmp(tablero,"2-1-1---2") == 0)){ //Esta es la opcion
                fputs( tablero, fptr );
                  fseek(fptr, -3, SEEK_CUR);
                  fputs( argv[2], fptr );//win
                }
                if ((strcmp(tablero,"2-111-2-2") == 0)){ //Esta es la opcion
                  fputs( tablero, fptr );
                    fseek(fptr, -1, SEEK_CUR);
                    fputs( argv[2], fptr );//win
                  }
                  if ((strcmp(tablero,"2-1-1-212") == 0)){ //Esta es la opcion
                    fputs( tablero, fptr );
                      fseek(fptr, -6, SEEK_CUR);
                      fputs( argv[2], fptr );//win
                    }
                    if ((strcmp(tablero,"211-1-2-2") == 0)){ //Esta es la opcion
                      fputs( tablero, fptr );
                        fseek(fptr, -6, SEEK_CUR);
                        fputs( argv[2], fptr );//win
                      }//2-1-1-2-2
                      if ((strcmp(tablero,"2-1-112-2") == 0)){ //Esta es la opcion
                        fputs( tablero, fptr );
                          fseek(fptr, -6, SEEK_CUR);
                          fputs( argv[2], fptr );//win
                        }
                        if ((strcmp(tablero,"2---1-1-2") == 0)){ //Esta es la opcion
                          fputs( tablero, fptr );
                            fseek(fptr, -7, SEEK_CUR);
                            fputs( argv[2], fptr );//win
}
                          if ((strcmp(tablero,"212-1-1-2") == 0)){ //Esta es la opcion
fputs( tablero, fptr );
                              fseek(fptr, -4, SEEK_CUR);
                              fputs( argv[2], fptr );//win
                            }
                            if ((strcmp(tablero,"2-2-111-2") == 0)){ //Esta es la opcion
                              fputs( tablero, fptr );
                                fseek(fptr, -8, SEEK_CUR);
                                fputs( argv[2], fptr );//win
                              }
                              if ((strcmp(tablero,"21--1---2") == 0)){ //Esta es la opcion
                                fputs( tablero, fptr );
                                  fseek(fptr, -1, SEEK_CUR);
                                  fputs( argv[2], fptr );//win
                                }
                                if ((strcmp(tablero,"2--11---2") == 0)){ //Esta es la opcion
                                  fputs( tablero, fptr );
                                    fseek(fptr, -4, SEEK_CUR);
                                    fputs( argv[2], fptr );//win
                                  }
                                  if ((strcmp(tablero,"2---11--2") == 0)){ //Esta es la opcion
                                    fputs( tablero, fptr );
                                      fseek(fptr, -6, SEEK_CUR);
                                      fputs( argv[2], fptr );//win
                                    }
                                    if ((strcmp(tablero,"2---1--12") == 0)){ //Esta es la opcion
                                      fputs( tablero, fptr );
                                        fseek(fptr, -8, SEEK_CUR);
                                        fputs( argv[2], fptr );//win
                                      }
                                      if ((strcmp(tablero,"21--1-122") == 0)){ //Esta es la opcion
                                        fputs( tablero, fptr );
                                          fseek(fptr, -7, SEEK_CUR);
                                          fputs( argv[2], fptr );//win
                                        }
                                        if ((strcmp(tablero,"21-11--22") == 0)){ //Esta es la opcion
                                          fputs( tablero, fptr );
                                            fseek(fptr, -3, SEEK_CUR);
                                            fputs( argv[2], fptr );//win
                                          }if ((strcmp(tablero,"211-1--22") == 0)){ //Esta es la opcion
                                            fputs( tablero, fptr );
                                              fseek(fptr, -3, SEEK_CUR);
                                              fputs( argv[2], fptr );//win
                                            }if ((strcmp(tablero,"21--11-22") == 0)){ //Esta es la opcion
                                              fputs( tablero, fptr );
                                                fseek(fptr, -3, SEEK_CUR);
                                                fputs( argv[2], fptr );//win
                                              }
                                              if ((strcmp(tablero,"21211-122") == 0)){ //Esta es la opcion
                                                fputs( tablero, fptr );
                                                  fseek(fptr, -4, SEEK_CUR);
                                                  fputs( argv[2], fptr );//win
                                                }
                                                if ((strcmp(tablero,"212-11122") == 0)){ //Esta es la opcion
                                                  fputs( tablero, fptr );
                                                    fseek(fptr, -6, SEEK_CUR);
                                                    fputs( argv[2], fptr );//win
                                                  }
if ((strcmp(tablero,"2--112-12") == 0)){ //Esta es la opcion
                                                    fputs( tablero, fptr );
                                                      fseek(fptr, -7, SEEK_CUR)
;
                                                      fputs( argv[2], fptr );//win
                                                    }
                                                    if ((strcmp(tablero,"2--1121-2") == 0)){ //Esta es la opcion
                                                      fputs( tablero, fptr );
                                                        fseek(fptr, -7, SEEK_CUR);
                                                        fputs( argv[2], fptr );//win
                                                      }
                                                      if ((strcmp(tablero,"21-112--2") == 0)){ //Esta es la opcion
                                                        fputs( tablero, fptr );
                                                          fseek(fptr, -7, SEEK_CUR);
                                                          fputs( argv[2], fptr );//win
                                                        }
                                                        if ((strcmp(tablero,"2-1-12-12") == 0)){ //Esta es la opcion
                                                          fputs( tablero, fptr );
                                                            fseek(fptr, -8, SEEK_CUR);
                                                            fputs( argv[2], fptr );//win
                                                          }
                                                          if ((strcmp(tablero,"211-12212") == 0)){ //Esta es la opcion
                                                            fputs( tablero, fptr );
                                                              fseek(fptr, -6, SEEK_CUR);
                                                              fputs( argv[2], fptr );//win
                                                            }
                                                            if ((strcmp(tablero,"2--211--2") == 0)){ //Esta es la opcion
                                                              fputs( tablero, fptr );
                                                                fseek(fptr, -3, SEEK_CUR);
                                                                fputs( argv[2], fptr );//win
                                                              }
                                                              if ((strcmp(tablero,"2--21--12") == 0)){ //Esta es la opcion
                                                                fputs( tablero, fptr );
                                                                  fseek(fptr, -3, SEEK_CUR);
                                                                  fputs( argv[2], fptr );//win
                                                                }
                                                                if ((strcmp(tablero,"21-21---2") == 0)){ //Esta es la opcion
                                                                  fputs( tablero, fptr );
                                                                    fseek(fptr, -3, SEEK_CUR);
                                                                    fputs( argv[2], fptr );//win
                                                                  }
                                                                  if ((strcmp(tablero,"2-121---2") == 0)){ //Esta es la opcion
                                                                    fputs( tablero, fptr );
                                                                      fseek(fptr, -3, SEEK_CUR);
                                                                      fputs( argv[2], fptr );//win
                                                                    }
if ((strcmp(tablero,"2--21-1-2") == 0)){ //Esta es la opcion
                                                                      fputs( tablero, fptr );
                                                                        fseek(fptr, -7, SEEK_CUR);
                                                                        fputs( argv[2], fptr );//win
}
                                                                      if ((strcmp(tablero,"2122111-2") == 0)){ //Esta es la opcion
                                                                        fputs( tablero, fptr );
                                                                          fseek(fptr, -1, SEEK_CUR);
                                                                          fputs( argv[2], fptr );//win
                                                                        }
                                                                        if ((strcmp(tablero,"2-2211112") == 0)){ //Esta es la opcion
                                                                          fputs( tablero, fptr );
                                                                            fseek(fptr, -8, SEEK_CUR);
                                                                            fputs( argv[2], fptr );//win
                                                                          }
                                                                          if ((strcmp(tablero,"22-11--12") == 0)){ //Esta es la opcion
                                                                            fputs( tablero, fptr );
                                                                              fseek(fptr, -7, SEEK_CUR);
                                                                              fputs( argv[2], fptr );//win
                                                                            }
                                                                            if ((strcmp(tablero,"22--1-112") == 0)){ //Esta es la opcion
                                                                              fputs( tablero, fptr );
                                                                                fseek(fptr, -7, SEEK_CUR);
                                                                                fputs( argv[2], fptr );//win
                                                                              }
                                                                              if ((strcmp(tablero,"22--11-12") == 0)){ //Esta es la opcion
                                                                                fputs( tablero, fptr );
                                                                                  fseek(fptr, -7, SEEK_CUR);
                                                                                  fputs( argv[2], fptr );//win
                                                                                }
                                                                                if ((strcmp(tablero,"2-1-1--12") == 0)){ //Esta es la opcion
                                                                                  fputs( tablero, fptr );
                                                                                    fseek(fptr, -3, SEEK_CUR);
                                                                                    fputs( argv[2], fptr );//win
                                                                                  }
                                                                                  if ((strcmp(tablero,"221-11212") == 0)){ //Esta es la opcion
                                                                                    fputs( tablero, fptr );
                                                                                      fseek(fptr, -6, SEEK_CUR);
fputs( argv[2], fptr );//win
                                                                                    }
                                                                                    if ((strcmp(tablero,"22131-212") == 0)){ //Esta es la opcion
                                                                                      fputs( tablero, fptr );
                                                                                        fseek(fptr, -4, SEEK_CUR
);
                                                                                        fputs( argv[2], fptr );//win
                                                                                      }
        }
      }



   fclose(fptr);

   return 0;
}
