#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define S 5
#define C 10
#define SC 50






int main()
{

    eSerie series[S];
    eCliente clientes[C];
    eseriecliente sercli[SC]; //={  {1,100}, {1,101}, {1,102}, {1,103}, {1, 104},{2,100}, {2,101}, {2,102}, {2,103}, {2, 104}, {3,100}, {3,101}, {3,102}, {3,103},{4,100}, {4,101}, {5,102}, {6,103}, {7, 104},{7,100}, {8,101}, {8,102}, {9,103}, {10, 104}  };
    int idcliente=0;
    int espaciolibre = 0;
    int idserie = 99;
    int espaciolibreserie = 0;

    char seguir = 'n';
    int option = 0;

    eLoser loserr[S]={0};

    inicio(clientes, sercli, series, C,SC,S);
    cargarClientes(clientes);
    cargarSeries(series);









  system("color 8e");
        printf("\n         �����������������������������������������������������������ͻ");
		printf("\n         �                   ::  bienvenido ::                       �");
		printf("\n         �����������������������������������������������������������ͼ\n\n");

         system("pause");
         system("cls");

    while(seguir == 'n')
    {  system("color 8e");

        printf("\n\n \n");
        printf("\n         ������������������������������������������������ͻ");
		printf("\n         �        :     MENU DE OPCIONES  ::              �");
		printf("\n         ������������������������������������������������͹");
		printf("\n         �  1  - Agregar persona                          �");
	    printf("\n         �  2  - Borrar persona por Id                    �");
        printf("\n         �  13 - modificar persona por Id                 �");
        printf("\n         �  14 - agregar serie                            �");
        printf("\n         �  15 - modificar serie                          �");
        printf("\n         �  16 - eliminar serie por id                    �");
		printf("\n         �  3  - lista de series                          �");
        printf("\n         �  4  - listar clientes                          �");
		printf("\n         �  5  - listar clientes con series               �");
        printf("\n         �  6  - listar series con clientes               �");
		printf("\n         �  7  - Busqueda por id                          �");
		printf("\n         �  8  - mostrar serie cliente tbbt               �");
        printf("\n         �  9  - mostrar serie clientet scd               �");
        printf("\n         �  10 - mostrar serie menos vista                �");
        printf("\n         �  11 - mostrar serie mas vista                  �");
		printf("\n         �  12 - Salir                                    �");
		printf("\n         ������������������������������������������������ͼ");
		printf("\n");



        printf("\n  Ingrese una de las opciones: ");

        option = vM(1, 17);
        printf("\n\n");

        switch(option)
        {
            case 1:
                     espaciolibre = obtenerespaciolibre(clientes, C);

                  if(espaciolibre != -1)
                {
                    idcliente = idcliente + 1;
           alta(clientes,sercli , series, C,S, SC, idcliente);
                }
                else
                {
                    printf("no hay mas espacio\n");
                }

                system("pause");
                break;

            case 2:

                bajaxid(clientes,sercli , series, C,S, SC);
                system("pause");
                system("cls");

                break;



            case 3:
                system("color 5b ");
                mostrarSeries(series, S);
                system("pause");

                break;
           case 4:
                system("color 5b ");
                 mostrarClientes(clientes, C);
                system("pause");


                break;

            case 5:
                system("color 5b ");
               mostrar(clientes, series,  sercli, C,S, SC);
               system("pause");
                 break;

            case 6:
                system("color 5b ");
                mostrarserieconcliente(clientes, series,  sercli, C,S, SC);
                system("pause");
                 break;

            case 7:
                system("color 5b ");
                busquedaxidinicio(clientes,sercli , series, C,S, SC);
                 system("pause");
                 break;



            case 8:
                system("color 9b ");
                mostrarserieclientetbbt(clientes, series,  sercli, C,S, SC);
                system("pause");
                 break;

                 case 9:
                system("color 9b ");
                mostrarserieclientetscd(clientes, series,  sercli, C,S, SC);
                system("pause");
                 break;

                 case 10:
                system("color 9b ");
                mostrarSerieLoser(clientes, series,  sercli, loserr, C,S, SC);
                system("pause");
                 break;

                 case 11:
                system("color 9b ");
                mostrarSeriemasvista(clientes, series,  sercli, loserr, C,S, SC);
                system("pause");
                 break;



            case 12:
                printf("  Esta seguro que desea salir? (y=si/n=no): ");
                seguir = vRta(seguir);

                if(seguir == 'y')
                {
                    printf("\n\n  Adios, vuelva pronto!\n\n");
                }

                break;

                   case 13:

                modificarcliente(clientes,sercli , series, C,S, SC);
                system("pause");
                system("cls");

                break;

                case 14:
                     espaciolibreserie = obtenerespaciolibreseries(series, S);

                  if(espaciolibreserie != -1)
                {
                    idserie =   idserie + 1;
              altaserie(series , S, idserie);
                }
                else
                {
                    printf("no hay mas espacio\n");
                }

                system("pause");
                break;

                case 15:

               modificarserie(series,S);
                system("pause");
                system("cls");

                break;

                case 16:

               bajaxidseries(series,S);
                system("pause");
                system("cls");

                break;

                  case 17:
               mostraridseriecliente(clientes, series, C, S);
               altaseriacliente(sercli,SC);
                system("pause");
                system("cls");

                break;


        }
system("cls");
    system("pause");
    }

    return 0;
}



