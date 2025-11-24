#include <stdlib.h>
#include<stdio.h>
#include <string.h>


int main(){



    char destino[12]= " Hola ";
    char Fuente[]= " Mundo ";
    int  espacio = (int)sizeof(destino)-strlen(destino);
    int tamano = strlen(Fuente);
    if(espacio > tamano){

        strcat(destino, Fuente);
        destino[sizeof(destino)-1]= '\0';
        printf(" %s " , destino);
        
    }
}