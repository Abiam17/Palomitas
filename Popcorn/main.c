#include <stdio.h>
#include <stdlib.h>

int PMPG, mes;
int main()
{
    printf("Introduzca el primer mes en el que se compraron la palomitas grades (1-4): ");
	scanf("%d", &PMPG);
	printf("Cual mes vamos a calcular");
    scanf("%d",&mes);

	if (PMPG == 1)
    {
          printf("Opcion 1 \n");
          switch(mes)
          {
            case 1:
            printf("palomitas grandes");
            break;
            case 2:
            printf("nada");
            break;
            case 3:
            printf("medianas");
            break;
            case 4:
            printf("nada");
            break;
            case 5:
            printf("palomitas grandes");
            break;
            case 6:
            printf("nada");
            break;
            case 7:
            printf("medianas");
            break;
            case 8:
            printf("nada");
            break;
            case 9:
            printf("palomitas grandes");
            break;
            case 10:
            printf("nada");
            break;
            case 11:
            printf("medianas");
            break;
            case 12:
            printf("nada");
            break;
        }
    }
    else
    {
        if(PMPG == 2)
        {
             printf("Opcion 2 \n");
             switch(mes)
             {
              case 1:
              printf("nada");
              break;
              case 2:
              printf("grandes");
              break;
              case 3:
              printf("nada");
              break;
              case 4:
              printf("medianas");
              break;
              case 5:
              printf("nada");
              break;
              case 6:
              printf("grandes");
              break;
              case 7:
              printf("nada");
              break;
              case 8:
              printf("medianas");
              break;
              case 9:
              printf("nada");
              break;
              case 10:
              printf("grandes");
              break;
              case 11:
              printf("nada");
              break;
              case 12:
              printf("medianas");
              break;
              }
        }
        else{
            if (PMPG == 3)
            {
                printf("Opcion 3 \n");
                switch(mes)
                 {
                  case 1:
                  printf("medianas");
                  break;
                  case 2:
                  printf("nada");
                  break;
                  case 3:
                  printf("grandes");
                  break;
                  case 4:
                  printf("nada");
                  break;
                  case 5:
                  printf("medianas");
                  break;
                  case 6:
                  printf("nada");
                  break;
                  case 7:
                  printf("grandes");
                  break;
                  case 8:
                  printf("nada");
                  break;
                  case 9:
                  printf("medianas");
                  break;
                  case 10:
                  printf("nada");
                  break;
                  case 11:
                  printf("grandes");
                  break;
                  case 12:
                  printf("nada");
                  break;
        }
            }
            else
            {
                if(PMPG == 4)
                {
                    printf("Opcion 4 \n");
                    switch(mes)
                    {
                    case 1:
                    printf("nada");
                    break;
                    case 2:
                    printf("medianas");
                    break;
                    case 3:
                    printf("nada");
                    break;
                    case 4:
                    printf("grandes");
                    break;
                    case 5:
                    printf("nada");
                    break;
                    case 6:
                    printf("medianas");
                    break;
                    case 7:
                    printf("nada");
                    break;
                    case 8:
                    printf("grnades");
                    break;
                    case 9:
                    printf("nada");
                    break;
                    case 10:
                    printf("medianas");
                    break;
                    case 11:
                    printf("nada");
                    break;
                    case 12:
                    printf("grandes");
                    break;
                    }
                }
                else
                {
                    printf("Denegado");
                }
            }
        }
    }
}
