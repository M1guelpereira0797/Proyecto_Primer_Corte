#include <stdlib.h>
#include<stdio.h>


int main(){



    char nombre[]="Miguel";
    char nombre_2[10]= "Juan";
    printf("%s\n", nombre);
    printf("%zu\n", sizeof(nombre));
    printf("%s\n", nombre_2);
    printf("%zu", sizeof(nombre_2));
}