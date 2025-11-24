#include <stdlib.h>
#include<stdio.h>
#include <string.h>


int main(){



    char destino[4];
    char Fuente[10]= "Juan";
    if(strlen(Fuente)< (int)sizeof(destino)){

        strcpy(destino, Fuente);
        printf("%s", destino);
    }
}