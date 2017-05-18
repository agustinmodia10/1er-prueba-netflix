#include <stdio.h>
#include <stdlib.h>
#define P 50
#define PYO 1000
#define PXP P*PYO
typedef struct
{
    int idpro;
    int idcate;
    int estado;
    char nombre[P];
    char apellido[P];

}eprog;

typedef struct
{
    int idproye;
    char nomproye[P];
    int estado;
}eproye;

typedef struct
{
    int idcate;
    int pago;
    int idproye;
    int idpro;
}eproproy;

typedef struct
{
    int idproye;
    int cont;
} emasdemandada;


int main()
{

   eprog prog[P];
   eproye proye[PYO];
   eproproy propro[PXP];
   emasdemandada masdemanda[PYO];
   int i;

     for(i=0; i<P;i++)
    {
        prog[i].idpro = 0;
        prog[i].idcate = 0;
        strcpy(prog[i].nombre, "\0");
         strcpy(prog[i].apellido , "\0");
        prog[i].estado = 0;

    }
    for(i=0; i<PYO;i++)
    {
        proye[i].idproye = 0;
        proye[i].estado = 0;

    }


cargaprogramador( prog);
mostrarprog( prog, P);
system("Pause");
system("cls");
modificarprogramador(prog, P);
system("Pause");
system("cls");
mostrarprog( prog, P);
system("Pause");
system("cls");
bajaprogramador(prog, P);
system("Pause");
system("cls");
mostrarprog( prog, P);
system("Pause");
system("cls");
cargarproyectos(proye, PYO);
mostrarproye(proye, PYO);
system("Pause");
system("cls");
cargarprogramadorproyecto(propro, PXP);
mostrarpropro(propro, PXP);
system("Pause");
system("cls");
mostrarprogaproyecto ( prog , proye , propro , P, PYO, PXP );
system("Pause");
system("cls");
mostrarproyectoconprog ( prog , proye , propro , P, PYO, PXP );
system("Pause");
system("cls");
mostrarproyectomasdemante ( prog , proye , propro, masdemanda, P, PYO, PXP );

    return 0;

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

void cargaprogramador (eprog pro[])
{

    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    int idcategoria[10] = {10010,10010,10012,10012,10011,10010,10012,10011,10011,10010};
    char nombres[10][50]={"juan","maria","diego","lionel","romina","diego alberto","andrea","patricia","luciano","camila"};
    char apellido[10][50]={"diaz","gomez","maradona","messi","saja","milito","maidini","gatusso","ronaldinho","neymar"};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10;i++)
    {
        pro[i].idpro = id[i];
        pro[i].idcate = idcategoria[i];
        strcpy(pro[i].nombre, nombres[i]);
         strcpy(pro[i].apellido , apellido[i]);
        pro[i].estado = estado[i];

    }

}


void bajaprogramador (eprog pro [], int nums)
{
    int e, i,l = 0;
    char resp = 'y';
    int flagi=0;
    char auxname[100];
    int encontro = 0;
    int auxid = 0;
    int auxidc = 0;
    char auxape[100];

        printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<nums;e++)
    {
               if (pro[e].estado !=0 && auxid==pro[e].idpro)
{
    printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", pro[e].nombre );
          printf(" --> APELLIDO : %s\n", pro[e].apellido );
          printf(" --> ID : %d\n", pro[e].idpro );
          printf(" --> ID CATEGORIA : %d", pro[e].idcate );

            if(pro[e].idcate == 10010)
            {
                printf( " --> junior\n");
            }
            if(pro[e].idcate == 10011)
            {
                printf(" --> semisenior\n");
            }
             if(pro[e].idcate == 10012)
            {
                printf(" --> senior\n");
            }
}
    }





    for(e = 0; e < nums; e++)
    {
         if (auxid==pro[e].idpro)
    {
         printf("\n  desea eliminar este programador ? (y=si/n=no) : \t");
            resp = vRta(resp);

        if(resp == 'y')
      {

             pro[e].idpro = 0;
        pro[e].idcate = 0;
        strcpy(pro[e].nombre, "\0");
         strcpy(pro[e].apellido , "\0");
        pro[e].estado = 0;



      printf("\n el programador fue eliminado con exito \n");
      }
      else
			{
				printf("\n el progremador no fue eliminado. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n  ID inexistente. \n\n\n");
    }


}

void modificarprogramador (eprog pro [], int nums)
{
    int e, i,l = 0;
    char resp = 'y';
    int flagi=0;
    char auxname[100];
    int encontro = 0;
    int auxid = 0;
    int auxidc = 0;
    char auxape[100];

        printf("Ingrese id a buscar: ");
            scanf("%d", &auxid);

              for(e=0; e<nums;e++)
    {
               if (pro[e].estado !=0 && auxid==pro[e].idpro)
{
    printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", pro[e].nombre );
          printf(" --> APELLIDO : %s\n", pro[e].apellido );
          printf(" --> ID : %d\n", pro[e].idpro );
          printf(" --> ID CATEGORIA : %d", pro[e].idcate );

            if(pro[e].idcate == 10010)
            {
                printf( " --> junior\n");
            }
            if(pro[e].idcate == 10011)
            {
                printf(" --> semisenior\n");
            }
             if(pro[e].idcate == 10012)
            {
                printf(" --> senior\n");
            }
}
    }





    for(e = 0; e < nums; e++)
    {
         if (auxid==pro[e].idpro)
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
         printf("\n  ingrese apellido: ");
		    fflush(stdin);
            gets(auxape);

            while(strlen(auxape) > 49)
            {
                printf("\n  ERROR, puede ingresar hasta 49 caracteres: ");
                fflush(stdin);
                gets(auxape);
            }

            strlwr(auxape);
            auxape [0] = toupper(auxape[0]);

            for( l = 0; l < 50; l++)
            {
                if(auxape[l] == ' ')
                {
                    auxape [ l + 1] = toupper(auxape[l + 1]);
                }
            }

            printf("CATEGORIA : \n 10010 = junior \t 10011 = semisenior \t 10012 = senior \n");
            printf("\n  ingrese id de cstegoria entre 10010 y 10012: ");
             auxidc = vM(10010, 10012);
            pro[e].idcate = auxidc;


            strcpy(pro[e].nombre, auxname);
            strcpy(pro[e].apellido, auxape);
            pro[e].estado = 1;



      printf("\n el programador fue modificado con exito \n");
      }
      else
			{
				printf("\n el progremador no fue eliminado. \n\n\n");
				system("pause");
			}
			flagi = 1;
			break;
    }

    }

    if(flagi == 0)
    {
        printf("\n  ID inexistente. \n\n\n");
    }


}




void mostrarprog (eprog pro[], int num)
{
    int e,l;
	eprog prog;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(pro[l].idpro < pro[e].idpro)
			{
				prog = pro[e];
				pro[e] = pro[l];
				pro[l] = prog;
			}
        }
    }

    for(e = 0; e < num; e++)
	{

        if(pro[e].estado != 0)
        {
             printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", pro[e].nombre );
          printf(" --> APELLIDO : %s\n", pro[e].apellido );
          printf(" --> ID : %d\n", pro[e].idpro );
          printf(" --> ID CATEGORIA : %d", pro[e].idcate );

            if(pro[e].idcate == 10010)
            {
                printf( " --> junior\n");
            }
            if(pro[e].idcate == 10011)
            {
                printf(" --> semisenior\n");
            }
             if(pro[e].idcate == 10012)
            {
                printf(" --> senior\n");
            }
        }

    }


}


void cargarproyectos(eproye proyecto[])
{
    int id[10] = {100,102,103,104,105,106,107,108,109,110};
    char nombres[10][30]={"uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","diez"};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};
    int i;

    for(i=0; i<10;i++)
    {
        proyecto[i].idproye = id[i];
        strcpy(proyecto[i].nomproye, nombres[i]);
        proyecto[i].estado = estado[i];

    }

}

void mostrarproye (eproye proyec[], int num)
{
    int e,l;
	eproye proye;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(proyec[l].idproye < proyec[e].idproye)
			{
				proye = proyec[e];
				proyec[e] = proyec[l];
				proyec[l] = proye;
			}
        }
    }

    for(e = 0; e < num; e++)
	{

        if(proyec[e].estado != 0)
        {
             printf(" ------------------------------------------------------------------ \n");
          printf(" --> NOMBRE : %s\n", proyec[e].nomproye );
          printf(" --> ID : %d\n", proyec[e].idproye);


        }

    }


}

void cargarprogramadorproyecto(eproproy propro[])
{
    int idproyecto[20] = {100,102,100,104,105,106,105,108,105,106,100,102,100,104,105,106,105,108,105,100};
    int idprogramdor[20] = {1,1,10,3,2,4,5,5,6,10,2,3,9,1,4,6,10,3,7,8};
    int horas[20] = {24,100,10,5,100,1,2,30,10,5,24,100,10,5,100,1,2,30,10,5};
    int i;

    for(i=0; i<20;i++)
    {
        propro[i].idpro = idprogramdor[i];
        propro[i].idproye = idproyecto[i];
        propro[i].pago=horas[i];

    }

}
void mostrarpropro (eproproy propro[], int num)
{
    int e,l;

    for(e = 0; e < num; e++)
	{

        if(propro[e].idpro != 0)
        {
             printf(" ------------------------------------------------------------------ \n");
          printf(" --> ID progrmsdor : %d\n", propro[e].idpro);
          printf(" --> ID proyecto : %d\n", propro[e].idproye);
          printf(" --> HORAS : %d\n", propro[e].pago);

        }

    }


}

void mostrarprogaproyecto (eprog prog[], eproye proye [], eproproy propro[], int num, int nume, int numpxp )
{
    int e,y,i,l;
    int acumulador = 0;

        for(e=0; e<num;e++)
    {
               if (prog[e].estado!=0)
{
     printf("\n浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
          printf(" --> NOMBRE : %s\n", prog[e].nombre );
           printf(" --> APELLIDO : %s\n", prog[e].apellido );
            printf(" --> ID PROGRAMADOR : %d\n", prog[e].idpro );
            printf(" --> ID CATEGORIA : %d", prog[e].idcate );

            if(prog[e].idcate == 10010)
            {
                printf( " --> junior: cobra 100 pesos por hora\n");
            }
            if(prog[e].idcate == 10011)
            {
                printf(" --> semisenior : cobra 150 pesos por hora\n");
            }
             if(prog[e].idcate == 10012)
            {
                printf(" --> senior : cobra 200 pesos por hora\n");
            }


    for(i=0; i<numpxp;i++)
    {
        if(propro[i].idpro == prog[e].idpro )
            {
                 printf(" --> PROYECTO: \n");
    printf(" ------------------------------------------------------------------ \n");
            printf("        # ID PROYECTO : %d\n", propro[i].idproye);

         for(l=0; l<nume;l++)
    {
        if(propro[i].idproye == proye[l].idproye )
            {

            printf("        # NOMBRE DE PROYECTO: %s \n", proye[l].nomproye);
            printf("        # HORAS ASIGNADA: %d \n ", propro[i].pago);
             if(prog[e].idcate == 10010)
            {
                acumulador= propro[i].pago * 100;
            printf( "       # PAGO ASIGNADO: $ %d \n", acumulador);
            }
            if(prog[e].idcate == 10011)
            {
                acumulador= propro[i].pago * 150;
            printf( "       # PAGO ASIGNADO: $ %d \n", acumulador);
            }
             if(prog[e].idcate == 10012)
            {
                acumulador= propro[i].pago * 200;
             printf( "       # PAGO ASIGNADO: $ %d \n", acumulador);
            }

        }
    }
      printf(" ------------------------------------------------------------------ \n");
        }

    }
    printf("\n藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n\n");
}
    }
}




void mostrarproyectoconprog(eprog prog[], eproye proye [], eproproy propro[], int num, int nume, int numpxp)
{
      int e,l;

     int i;
     int acumuladorjunior = 0;
     int acumuladorsemisenior = 0;
     int acumuladorsenior = 0;



         for(l=0; l<nume;l++)
    {

    acumuladorjunior = 0;
    acumuladorsemisenior = 0;
     acumuladorsenior = 0;
             if (proye[l].estado!=0)
           {

           printf("\n浜様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
          printf(" --> NOMBRE : %s\n", proye[l].nomproye );
          printf(" --> ID : %d\n", proye[l].idproye);




          for(i=0; i<numpxp;i++)
    {
        if(propro[i].idproye == proye[l].idproye )
        {


          for(e=0; e<num;e++)
    {
        if(propro[i].idpro == prog[e].idpro )
          {
              printf(" --> NOMBRE : %s\n", prog[e].nombre );
              if(prog[e].idcate == 10010)
            {
                acumuladorjunior = acumuladorjunior + 1;
            }
            if(prog[e].idcate == 10011)
            {
                acumuladorsemisenior = acumuladorsemisenior + 1;
            }
             if(prog[e].idcate == 10012)
            {
                acumuladorsenior = acumuladorsenior + 1;
            }
          }

}

        }

    }
        printf("\n         =============================================================");
        printf("\n         || CANTIDAD DE PROGRAMDORES SEGUN SU CATEGORIA             ||");
        printf("\n         =============================================================");
		printf("\n         ||           # programdores junior      :   %0.5d          ||", acumuladorjunior);
		printf("\n         ||           # programdores semisenior  :   %0.5d          ||", acumuladorsemisenior);
		printf("\n         ||           # programdores senior      :   %0.5d          ||", acumuladorsenior);
		printf("\n         =============================================================\n\n");

		printf("\n藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n\n");

}

    }





}

void mostrarproyectomasdemante(eprog prog[], eproye proye [], eproproy propro[], emasdemandada md[], int num, int nume, int numpxp)
{

     int e=0;
     int l=0;
     int i=0;
     int max = 0;
     int flagmax = 0;

   eproye proyec;




            for(e = 0; e < nume - 1; e++)
    {
        for(l = e + 1; l < nume; l++)
        {
            if(proye[l].idproye > proye[e].idproye)
			{
				proyec = proye[e];
				proye[e] = proye[l];
				proye[l] = proyec;
			}
        }
    }

              for(e=0; e<nume; e++)
            {   md[e].idproye = 0;
                md[e].cont=0;
                md[e].idproye = proye[e].idproye;
            }



 for(e=0; e<nume; e++)
            {
                md[e].idproye=proye[e].idproye;
                md[e].cont=0;
            }





          for(e = 0; e < nume ; e++)
    {

    for(i = 0 ; i < numpxp; i++)
        {



              if( propro[i].idproye == md[e].idproye && md[e].idproye!=0 )
              {
                  md[e].cont++;
              }


        }


    }



    printf("las series mas vistas son:\n");

    for(e=0; e<nume; e++)
            {
                if(flagmax ==0 || md[e].cont  > max)
                {
                    max = md[e].cont;
                    flagmax = 1;
                }
            }


            for(e=0; e<nume; e++)
            {




                if(md[e].cont==max)
                {

                 printf("id %d\n",md[e].idproye);
                 printf("titulo %s\n",proye[e].nomproye);

                }


            }


            printf("la cantidad de personas que la ven a cada serie son: %d\n", max);



}
