#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define S 5
#define C 10
#define SC 50

void alta(eCliente cliente[], eseriecliente seriecliente[], eSerie serie [], int num, int nums, int numsc, int idd)
{
    int e,l, elibre, encontro = 0;
    int auxa;
    char auxname[100];


    elibre = obtenerespaciolibre(cliente, num);

    if(elibre != -1)
    {
        printf("  INGRESE DATOS: \n");

             auxa= idd;
        /*¿printf("\n  ingrese id entre 1 y 10: ");
        auxa = vM(1, 10);*/

        for(e = 0; e < num; e++)
        {
            if(auxa == cliente[e].idCliente)
            {
                encontro = 1;
                break;
            }
        }

        if(!encontro)
		{
            cliente[elibre].idCliente = auxa;

		    printf("\n  Ingrese nombre: ");
		    fflush(stdin);
            gets(auxname);

            while(strlen(auxname) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxname);
            }

            strlwr(auxname);
            auxname [0] = toupper(auxname[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxname[l] == ' ')
                {
                    auxname [ l + 1] = toupper(auxname[l + 1]);
                }
            }


            strcpy(cliente[elibre].nombre, auxname);
            cliente[elibre].estado = 1;

		}

		else
		{
			printf("\n  el id ingresado ya existe, ingrese otro.  \n\n");
			system("pause");
			system("cls");
		}
    }







	}

	void modificarcliente(eCliente cliente[], eseriecliente seriecliente[], eSerie serie [], int num, int nums, int numsc)
{
    int auxid = 0;
    int e, i,l = 0;
    char resp = 'y';
    int flagi=0;
    char auxname[100];
      printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<num;e++)
    {
               if (cliente[e].estado!=0 && auxid==cliente[e].idCliente)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", cliente[e].nombre );


    for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idcliente == cliente[e].idCliente )
            {

            printf("        -- id serie: %d\n", seriecliente[i].idserie);

         for(l=0; l<nums;l++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie )
            {

            printf("        -- titulo: %s \n", serie[l].titulo);
        }


    }
        }


    }
}

    }






    for(e = 0; e < num; e++)
    {
         if (auxid==cliente[e].idCliente)
    {
         printf("\n  desea modificar esta persona ? (y=si/n=no) : \t");
            resp = vRta(resp);

        if(resp == 'y')
      {
        printf("\n  Ingrese nombre: ");
		    fflush(stdin);
            gets(auxname);

            while(strlen(auxname) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxname);
            }

            strlwr(auxname);
            auxname [0] = toupper(auxname[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxname[l] == ' ')
                {
                    auxname [ l + 1] = toupper(auxname[l + 1]);
                }
            }


            strcpy(cliente[e].nombre, auxname);
            cliente[e].estado = 1;

      printf("\n la persona fue eliminada con exito \n");
      }
      else
			{
				printf("\n  La persona no fue eliminada. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n  DNI inexistente. \n\n\n");
    }



}







void bajaxid(eCliente cliente[], eseriecliente seriecliente[], eSerie serie [], int num, int nums, int numsc)
{
    int auxid = 0;
    int e, i,l = 0;
    char resp = 'y';
     int flagi=0;
      printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<num;e++)
    {
               if (cliente[e].estado!=0 && auxid==cliente[e].idCliente)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", cliente[e].nombre );


    for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idcliente == cliente[e].idCliente )
            {

            printf("        -- id serie: %d\n", seriecliente[i].idserie);

         for(l=0; l<nums;l++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie )
            {

            printf("        -- titulo: %s \n", serie[l].titulo);
        }


    }
        }


    }
}

    }






    for(e = 0; e < num; e++)
    {
         if (auxid==cliente[e].idCliente)
    {
         printf("\n  Desea elminiar esta persona? (y=si/n=no) : \t");
            resp = vRta(resp);

        if(resp == 'y')
      {
        strcpy(cliente[e].nombre, "\0");
        cliente[e].estado = 0;
        cliente[e].idCliente = 0;

      for(l = 0; l < numsc; l++)
    {
       if ( seriecliente[l].idcliente== auxid  )
        {
        seriecliente[l].idcliente = 0;
        seriecliente[l].idserie = 0;
        }

    }
      printf("\n la persona fue eliminada con exito \n");
      }
      else
			{
				printf("\n  La persona no fue eliminada. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n  DNI inexistente. \n\n\n");
    }



}






void busquedaxidinicio(eCliente cliente[], eseriecliente seriecliente[], eSerie serie [], int num, int nums, int numsc)
{
    int auxid = 0;
    int e, i,l = 0;
    char resp = 'y';
     int flagi=0;
      printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<num;e++)
    {
               if (cliente[e].estado!=0 && auxid==cliente[e].idCliente)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", cliente[e].nombre );


    for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idcliente == cliente[e].idCliente )
            {

            printf("        -- id serie: %d\n", seriecliente[i].idserie);

         for(l=0; l<nums;l++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie )
            {

            printf("        -- titulo: %s \n", serie[l].titulo);
        }


    }
        }


    }
}

    }

}


void altaserie(eSerie serie [],int nums, int idd)
{
    int e,l, elibre, encontro = 0;
    int auxa;
    char auxname[100];
     char auxgen[100];

     elibre = obtenerespaciolibreseries(serie, nums);

    if(elibre != -1)
    {
        printf("  INGRESE DATOS: \n");

             auxa= idd;
        /*printf("\n  ingrese id entre 1 y 10: ");
        auxa = vM(1, 10);*/

        for(e = 0; e < nums; e++)
        {
            if(auxa == serie[e].idSerie)
            {
                encontro = 1;
                break;
            }
        }

        if(!encontro)
		{
            serie[elibre].idSerie = auxa;

		    printf("\n  ingrese titulo: ");
		    fflush(stdin);
            gets(auxname);

            while(strlen(auxname) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxname);
            }

            strlwr(auxname);
            auxname [0] = toupper(auxname[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxname[l] == ' ')
                {
                    auxname [ l + 1] = toupper(auxname[l + 1]);
                }
            }


            printf("\n  ingrese genero: ");
		    fflush(stdin);
            gets(auxgen);

            while(strlen(auxgen) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxgen);
            }

            strlwr(auxgen);
            auxgen [0] = toupper(auxgen[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxgen[l] == ' ')
                {
                    auxgen [ l + 1] = toupper(auxgen[l + 1]);
                }
            }


            printf("ingrese numero de temporada");;
            fflush(stdin);
            scanf("%d", & serie[elibre].temporadas );


            strcpy(serie[elibre].genero, auxgen);
            strcpy(serie[elibre].titulo, auxname);
            serie[elibre].estado = 1;

		}

		else
		{
			printf("\n  el id ingresado ya existe, ingrese otro.  \n\n");
			system("pause");
			system("cls");
		}
    }







	}




void inicio(eCliente cliente[], eseriecliente sercli[], eSerie serie [], int num, int numsc, int nums)
{
    int e,l,i;
    for(e = 0; e < num; e++)
    {
        strcpy(cliente[e].nombre, "\0");
        cliente[e].estado = 0;
        cliente[e].idCliente = 0;
    }
      for(l = 0; l < numsc; l++)
    {
        sercli[l].idcliente = 0;
        sercli[l].idserie = 0;
    }

     for(i = 0; i < nums; i++)
    {
        serie[i].estado = 0;
        serie[i].idSerie = 0;
        serie[i].temporadas = 0;
        strcpy(serie[i].titulo, "\0");
        strcpy(serie[i].genero, "\0");
    }



}

int obtenerespaciolibreseriesclientes(eseriecliente sercli[], int numsc)
{
    int espaciolibreseriecliente = -1, e;

	for(e = 0; e < numsc ; e++)
    {
        if(sercli[e].idcliente== 0)
        {
            espaciolibreseriecliente = e;
            break;
	    }
    }

	return espaciolibreseriecliente;

}

int obtenerespaciolibreseries(eSerie serie[], int nums)
{
    int espaciolibreserie = -1, e;

	for(e = 0; e < nums ; e++)
    {
        if(serie[e].estado== 0)
        {
            espaciolibreserie = e;
            break;
	    }
    }

	return espaciolibreserie;

}



int obtenerespaciolibre(eCliente cliente[], int num)
{
    int espaciolibre = -1, e;

	for(e = 0; e < num ; e++)
    {
        if(cliente[e].estado== 0)
        {
            espaciolibre = e;
            break;
	    }
    }

	return espaciolibre;

}

char vRta(char resp)
{
    resp = tolower(getche());

    while(resp != 'y' && resp != 'n')
    {
        printf("\n  ERROR, ingrese nuevamente(y=si/n=no): ");
        resp = tolower(getche());
    }
    return resp;

}


int vM(int min, int max)
{
    int val;
    scanf("%d",&val);

    while(val < min || val > max)
    {
        printf("\n  ERROR, ingrese valor nuevamente: ");
        scanf("%d", &val);
    }

    return val;

}
void mostrar( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , int num, int nums, int numsc)
{
    int e,l;

     int i;




        for(e=0; e<num;e++)
    {
               if (cliente[e].estado!=0)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", cliente[e].nombre );


    for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idcliente == cliente[e].idCliente )
            {

            printf("        -- id serie: %d\n", seriecliente[i].idserie);

         for(l=0; l<nums;l++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie )
            {

            printf("        -- titulo: %s \n", serie[l].titulo);
        }
    }
        }
    }
}


    }




}


void cargarSeries(eSerie series[])
{
   int idSerie[5]={100,101,102,103,104};
    int estado[5]={1,1,1,1,1};
     char titulo[5][30]={"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]={9,7,7,6,1};
    char genero[5][30]={"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
     for(i=0; i<5;i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}


void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]={"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10;i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];

    }

}




void mostrarSeries(eSerie serie[], int num)
{
    int e,l;
	eSerie auxserie;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(strcmp(serie[e].titulo, serie[l].titulo) > 0)
			{
				auxserie = serie[e];
				serie[e] = serie[l];
				serie[l] = auxserie;
			}
        }
    }

    for(e = 0; e < num; e++)
	{
	     printf(" ------------------------------------------------------------------ \n");
        if(serie[e].estado != 0)
        {
            printf("\n  titulo: %s\n  genero: %s\n temporada: %d\n Id serie: %d\n", serie[e].titulo, serie[e].genero, serie[e].temporadas, serie[e].idSerie);
        }

    }


}

void mostrarClientes (eCliente cliente[], int num)
{
    int e,l;
	eCliente auxcliente;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(strcmp(cliente[e].nombre, cliente[l].nombre) > 0)
			{
				auxcliente = cliente[e];
				cliente[e] = cliente[l];
				cliente[l] = auxcliente;
			}
        }
    }

    for(e = 0; e < num; e++)
	{
	     printf(" ------------------------------------------------------------------ \n");
        if(cliente[e].estado != 0)
        {
            printf("\n  nombre: %s\n Id cliente: %d \n", cliente[e].nombre, cliente[e].idCliente);
        }

    }


}

void mostrarserieconcliente( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , int num, int nums, int numsc)
{
      int e,l;

     int i;




         for(l=0; l<nums;l++)
    {

             if (serie[l].estado!=0)
           {

             printf(" ------------------------------------------------------------------ \n");

               printf("        -- titulo: %s \n", serie[l].titulo);

          for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie )
        {


          for(e=0; e<num;e++)
    {
        if(cliente[e].idCliente == seriecliente[i].idcliente )
          {
              printf(" --> NOMBRE : %s\n", cliente[e].nombre );

          }

}
        }
    }



}

    }





}

void mostrarserieclientetbbt( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , int num, int nums, int numsc)
{
    int e,l;

     int i;

     int cont = 0;




         for(l=0; l<nums;l++)
    {

             if (serie[l].estado!=0 && serie[l].idSerie==100)
           {
                 printf(" ------------------------------------------------------------------ \n");

               printf("        -- titulo: %s \n", serie[l].titulo);


          for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie)
        {


          for(e=0; e<num;e++)
    {
        if(cliente[e].idCliente == seriecliente[i].idcliente  )
          {
              printf(" --> NOMBRE : %s\n", cliente[e].nombre );
              cont++;
          }

}
        }
    }



}

    }


      printf("las personas que la ven son: %d\n", cont);



}




void mostrarserieclientetscd( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , int num, int nums, int numsc)
{
    int e,l;

     int i;

     int cont = 0;




         for(l=0; l<nums;l++)
    {

             if (serie[l].estado!=0 && serie[l].idSerie==104)
           {
                 printf(" ------------------------------------------------------------------ \n");

               printf("        -- titulo: %s \n", serie[l].titulo);


          for(i=0; i<numsc;i++)
    {
        if(seriecliente[i].idserie == serie[l].idSerie)
        {


          for(e=0; e<num;e++)
    {
        if(cliente[e].idCliente == seriecliente[i].idcliente  )
          {
              printf(" --> NOMBRE : %s\n", cliente[e].nombre );
              cont++;
          }

}
        }
    }



}

    }


      printf("las personas que la ven son: %d\n", cont);



}


void mostrarSerieLoser( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , eLoser loser[], int num, int nums, int numsc)
{

     int e=0;
     int l=0;
     int i=0;
     int min = 0;
     int flagmin = 0;
     int cont[5]={0};

    eLoser aux;
    eSerie  auxs;


   for(e=0; e<nums; e++)
            {
                loser[e].cont=0;
            }



   for(e=0; e<nums; e++)
            {
                loser[e].idSerie=serie[e].idSerie;
            }





          for(e = 0; e < nums ; e++)
    {

    for(i = 0 ; i < numsc; i++)
        {



              if( seriecliente[i].idserie == loser[e].idSerie )
              {
                  loser[e].cont++;
              }





    }
 }



    printf("las series menos vista son:\n");


    for(e=0; e<nums; e++)
            {
                if(flagmin ==0 || loser[e].cont  <min)
                {
                    min = loser[e].cont;
                    flagmin = 1;
                }
            }


            for(e=0; e<nums; e++)
            {




                if(loser[e].cont==min)
                {

                 printf("id %d\n",loser[e].idSerie);
                 printf("titulo %s\n",serie[e].titulo);

                }


            }


            printf("la cantidad de personas que la ven a cada serie son: %d\n", min);



}

void mostrarSeriemasvista( eCliente cliente [], eSerie serie [],eseriecliente seriecliente [] , eLoser loser[], int num, int nums, int numsc)
{

     int e=0;
     int l=0;
     int i=0;
     int max = 0;
     int flagmax = 0;
     int cont[5]={0};

    eLoser aux;
    eSerie  auxs;



   for(e=0; e<nums; e++)
            {
                loser[e].idSerie=serie[e].idSerie;
                loser[e].cont=0;
            }





          for(e = 0; e < nums ; e++)
    {

    for(i = 0 ; i < numsc; i++)
        {



              if( seriecliente[i].idserie == loser[e].idSerie && loser[e].idSerie!=0 )
              {
                  loser[e].cont++;
              }


        }


    }



    printf("las series mas vistas son:\n");

    for(e=0; e<nums; e++)
            {
                if(flagmax ==0 || loser[e].cont  > max)
                {
                    max = loser[e].cont;
                    flagmax = 1;
                }
            }


            for(e=0; e<nums; e++)
            {




                if(loser[e].cont==max)
                {

                 printf("id %d\n",loser[e].idSerie);
                 printf("titulo %s\n",serie[e].titulo);

                }


            }


            printf("la cantidad de personas que la ven a cada serie son: %d\n", max);



}


void modificarserie(eSerie serie [], int nums)
{
    int e, i,l = 0;
    char resp = 'y';
    int flagi=0;
    char auxname[100];
    int encontro = 0;
    int auxid = 0;
    int elibre = 0;
    int idd;
    char auxgen[100];

      printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<nums;e++)
    {
               if (serie[e].estado !=0 && auxid==serie[e].idSerie)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> TITULO : %s\n --> GENERO : %s \n --> ID SERIE : %d \n --> TEMPORADA : %d  ", serie[e].titulo, serie[e].genero, serie[e].idSerie, serie[e].temporadas );
}

    }

 for(e = 0; e < nums; e++)
    {
         if (auxid==serie[e].idSerie)
    {
         printf("\n  desea modificar esta persona ? (y=si/n=no) : \t");
            resp = vRta(resp);

        if(resp == 'y')
      {
        printf("\n  Ingrese titulo: ");
		    fflush(stdin);
            gets(auxname);

            while(strlen(auxname) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxname);
            }

            strlwr(auxname);
            auxname [0] = toupper(auxname[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxname[l] == ' ')
                {
                    auxname [ l + 1] = toupper(auxname[l + 1]);
                }
            }
         printf("\n  ingrese genero: ");
		    fflush(stdin);
            gets(auxgen);

            while(strlen(auxgen) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxgen);
            }

            strlwr(auxgen);
            auxgen [0] = toupper(auxgen[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxgen[l] == ' ')
                {
                    auxgen [ l + 1] = toupper(auxgen[l + 1]);
                }
            }


            printf("ingrese numero de temporada");;
            fflush(stdin);
            scanf("%d", & serie[e].temporadas );


            strcpy(serie[e].genero, auxgen);
            strcpy(serie[e].titulo, auxname);
            serie[e].estado = 1;



      printf("\n la serie fue modificada con exito \n");
      }
      else
			{
				printf("\n  La persona no fue eliminada. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n  DNI inexistente. \n\n\n");
    }

}

void bajaxidseries(eSerie serie [],int nums)
{
    int auxid = 0;
    int e, i,l = 0;
    char resp = 'y';
     int flagi=0;
         printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<nums;e++)
    {
               if (serie[e].estado !=0 && auxid==serie[e].idSerie)
{
           printf(" ------------------------------------------------------------------ \n");
          printf(" --> TITULO : %s\n --> GENERO : %s \n --> ID SERIE : %d \n --> TEMPORADA : %d  ", serie[e].titulo, serie[e].genero, serie[e].idSerie, serie[e].temporadas );
}

    }





    for(e = 0; e < nums; e++)
    {
         if (auxid==serie[e].idSerie)
    {
         printf("\n  Desea elminiar esta persona? (y=si/n=no) : \t");
            resp = vRta(resp);

        if(resp == 'y')
      {
        strcpy(serie[e].titulo, "\0");
        serie[e].estado = 0;
        serie[e].idSerie = 0;
       strcpy(serie[e].genero, "\0");
       serie[e].temporadas = 0;

      printf("\n la serie fue eliminada con exito \n");
      }
      else
			{
				printf("\n la serie no fue eliminada. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n id inexistente. \n\n\n");
    }



}

void mostraridseriecliente(eCliente cliente [], eSerie serie [], int num, int nums)
{
    int e,i;
    printf("--CLIENTES-- \n -------------------------------------------\n   --id-- \t     --nombre--  \n");
    printf(" -------------------------------------------\n");
    for(e=0; e < num; e++)
    {
        printf("%10d \t %10s \n", cliente[e].idCliente, cliente[e].nombre);
    }
    printf("--SERIES-- \n -------------------------------------------\n     --id-- \t     --titulo--  \n");
    printf(" -------------------------------------------\n");
    for(e=0; e < nums; e++)
    {
        printf("%10d \t %10s \n", serie[e].idSerie, serie[e].titulo);
    }
}
void altaseriacliente(eseriecliente seriecliente[], int numsc)
{
    int e,l, elibre, encontro = 0;
    int auxa= 0;
    char auxname[100];
    int auxid=0;

    elibre = obtenerespaciolibreseriesclientes(seriecliente, numsc);




          if(elibre != -1)
    {
        printf("  INGRESE DATOS: \n");


        printf("\n  ingrese id entre 1 y 10: ");
        auxa = vM(1, 10);
        printf("\n  ingrese id entre 100 y 104: ");
        auxid = vM( 100, 104);

        for(e = 0; e < numsc; e++)
        {
            if(auxa == seriecliente[e].idcliente && auxid ==  seriecliente[e].idserie )
            {
                encontro = 1;
                break;
            }
        }

        if(!encontro)
		{
            seriecliente[elibre].idcliente = auxa;
            seriecliente[elibre].idserie = auxid;

		}

		else
		{
			printf("\n  el id ingresado ya existe, ingrese otro.  \n\n");
			system("pause");
			system("cls");
		}

    }





	}

