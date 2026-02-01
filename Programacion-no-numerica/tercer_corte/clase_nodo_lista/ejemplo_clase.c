#include<stdio.h>
#include<stdlib.h>

struct Punto
{
    int x, y;
};

typedef struct 
{
    int telefono, numero_casa;
} Datos;


int main(){
    struct Punto A;
    struct Punto B;

    Datos Miguel;
    Miguel.telefono = 123456789;

    A.x=20;
    B.y=10;

    printf("%d", Miguel.telefono);

    
}