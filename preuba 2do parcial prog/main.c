#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char marca [20];
    char modelo [20];
    int id;
}ecompu;


ecompu* contructor();

int main()
{
    ecompu *pc;
    int i;

     pc= contructor();
    for(i=0; i<5; i++ )
    {
        printf(" %s \n  %s \n %d \n\n", pc->marca, pc->modelo, pc->id);
    }

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
