#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#define S 5
#define C 10
#define SC 50


typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
}eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;
}eCliente;

typedef struct
{
    int idSerie;
    int cont;
} eLoser;


typedef struct
{
    int idcliente;
    int idserie;

}eseriecliente;


void cargarSeries(eSerie[]);
void cargarClientes(eCliente[]);
void cargarClientes(eCliente[]);
void cargarclientesaserie(eseriecliente[]);

void alta(eCliente [], eseriecliente [], eSerie [], int , int , int, int);
void altaserie(eSerie [], int, int);




void mostrarSeries(eSerie[],int );
void mostrarClientes(eCliente[], int);

void mostrar(eCliente [], eSerie [],eseriecliente [], int , int , int );
void mostrarserieconcliente(eCliente [], eSerie [],eseriecliente [], int , int , int );
void mostrarserieclientetbbt(eCliente [], eSerie [],eseriecliente [], int , int , int );
void mostrarserieclientetscd(eCliente [], eSerie [],eseriecliente [], int , int , int );
void mostrarSerieLoser(eCliente [], eSerie [],eseriecliente [], eLoser [], int , int , int );
void mostrarSeriemasvista(eCliente [], eSerie [],eseriecliente [], eLoser [], int , int , int );
void busquedaxidinicio(eCliente [], eseriecliente [], eSerie [], int , int , int );
void bajaxid(eCliente [], eseriecliente [], eSerie [], int , int , int );
void modificarcliente(eCliente [], eseriecliente [], eSerie [], int , int , int );
void modificarserie(eSerie [], int);
void bajaxidseries(eSerie [], int);


void inicio(eCliente [], eseriecliente [], eSerie [], int , int, int );
int obtenerespaciolibre(eCliente [], int );
int obtenerespaciolibreseries(eSerie [], int );
int obtenerespaciolibreseriesclientes(eseriecliente [], int );
int vM(int , int );
char vRta(char resp);



