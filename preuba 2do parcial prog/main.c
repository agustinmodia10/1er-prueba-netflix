#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    char marca [20];
    char modelo [20];
    int id;
}ecompu;

ecompu* contructorconparametros(char*, char*, int);
ecompu* contructor();

int main()
{
    ecompu *pc;
    int i;



   char modelos [1][100]={"rog"};

char marcas [1][100]={"asus"};
int id = 10;



     pc= contructor();
    for(i=0; i<5; i++ )
    {
        printf(" %s \n  %s \n %d \n\n", pc->marca, pc->modelo, pc->id);
    }
     pc= contructorconparametros(marcas, modelos, id);

     system("pause");


     for(i=0; i<5; i++ )
    {
        printf(" %s \n  %s \n %d \n\n", pc->marca, pc->modelo, pc->id);
    }


//hora x sistema


        time_t hora;

  time (&hora);
  printf ("hora local: %s", ctime (&hora));

// cargo valiable atravez del puntero

int num;
int *puntero;
puntero = & num;
* puntero =5;
printf ("%d %d", num , puntero);
     return 0;
}


ecompu* contructor()
{
    ecompu *aux = NULL;
    ecompu *pc = (ecompu*) malloc(sizeof(ecompu));
    if(pc != NULL)
    {
        pc->id = 0;
        strcpy(pc->marca, " ");
        strcpy(pc->modelo, " ");
        aux = pc;
    }
  return aux;
}

ecompu* contructorconparametros(char *marca, char * modelo, int id)
{
    ecompu *aux = NULL;
    ecompu *pc = (ecompu*) malloc(sizeof(ecompu));
    if(pc != NULL)
    {
        pc->id = id;
        strcpy(pc->marca, marca);
        strcpy(pc->modelo, modelo);
        aux = pc;
    }
  return aux;
}
